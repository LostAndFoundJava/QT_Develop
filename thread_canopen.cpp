#include "thread_canopen.h"

#define STORAGE 0

#define NSEC_PER_SEC            (1000000000)    /* The number of nanoseconds per second. */
#define NSEC_PER_MSEC           (1000000)       /* The number of nanoseconds per millisecond. */
#define TMR_TASK_INTERVAL_NS    (1000000)       /* Interval of taskTmr in nanoseconds */
#define TMR_TASK_OVERFLOW_US    (5000)          /* Overflow detect limit for taskTmr in microseconds */
#define INCREMENT_1MS(var)      (var++)         /* Increment 1ms variable in taskTmr */


/* Global variable increments each millisecond. */
volatile uint16_t           CO_timer1ms = 0U;

/* Mutex is locked, when CAN is not valid (configuration state). May be used
 *  from other threads. RT threads may use CO->CANmodule[0]->CANnormal instead. */
#ifndef CO_SINGLE_THREAD
pthread_mutex_t             CO_CAN_VALID_mtx = PTHREAD_MUTEX_INITIALIZER;
#endif

/* Other variables and objects */
static int                  rtPriority = -1;    /* Real time priority, configurable by arguments. (-1=RT disabled) */
static int                  mainline_epoll_fd;  /* epoll file descriptor for mainline */
static CO_OD_storage_t      odStor;             /* Object Dictionary storage object for CO_OD_ROM */
static CO_OD_storage_t      odStorAuto;         /* Object Dictionary storage object for CO_OD_EEPROM */
static char                *odStorFile_rom    = "od2_storage";       /* Name of the file */
static char                *odStorFile_eeprom = "od2_storage_auto";  /* Name of the file */
static CO_time_t            CO_time;            /* Object for current time */

/* Realtime thread */
#ifndef CO_SINGLE_THREAD
static void*                rt_thread(void* arg);
static pthread_t            rt_thread_id;
static int                  rt_thread_epoll_fd;
#endif

int err = 0; /* syntax or other error, true or false */
respErrorCode_t respErrorCode = respErrorNone;

/* Signal handler */
volatile sig_atomic_t CO_endProgram = 0;
static void sigHandler(int sig) {
    CO_endProgram = 1;
}


/* Helper functions ***********************************************************/
void CO_errExit(char* msg) {
    perror(msg);
    exit(EXIT_FAILURE);
}

/* send CANopen generic emergency message */
void CO_error(const uint32_t info) {
    CO_errorReport(CO->em, CO_EM_GENERIC_SOFTWARE_ERROR, CO_EMC_SOFTWARE_INTERNAL, info);
    fprintf(stderr, "canopend generic error: 0x%X\n", info);
}


static void printUsage(char *progName) {
fprintf(stderr,
"Usage: %s <CAN device name> -i <Node ID (1..127)> [options]\n", progName);
fprintf(stderr,
"\n"
"Options:\n"
"  -p <RT priority>    Realtime priority of RT task (RT disabled by default).\n"
"  -r                  Enable reboot on CANopen NMT reset_node command. \n"
"  -s <ODstorage file> Set Filename for OD storage ('od_storage' is default).\n"
"  -a <ODstorageAuto>  Set Filename for automatic storage variables from\n"
"                      Object dictionary. ('od_storage_auto' is default).\n");
#ifndef CO_SINGLE_THREAD
fprintf(stderr,
"  -c <Socket path>    Enable command interface for master functionality. \n"
"                      If socket path is specified as empty string \"\",\n"
"                      default '%s' will be used.\n"
"                      Note that location of socket path may affect security.\n"
"                      See 'canopencomm/canopencomm --help' for more info.\n"
, CO_command_socketPath);
#endif
fprintf(stderr,
"\n"
"LICENSE\n"
"    This program is part of CANopenSocket and can be downloaded from:\n"
"    https://github.com/CANopenNode/CANopenSocket\n"
"    Permission is granted to copy, distribute and/or modify this document\n"
"    under the terms of the GNU General Public License, Version 2.\n"
"\n");
}



Thread_CANopen::Thread_CANopen(QObject *parent) :
    QThread(parent)
{
}

void Thread_CANopen::run(){
//-------------------------------------CANopen协议-----------------------------------//
    CO_NMT_reset_cmd_t reset = CO_RESET_NOT;
    CO_ReturnError_t odStorStatus_rom, odStorStatus_eeprom;
    int CANdevice0Index = 0;
//    int opt;
    bool_t firstRun = true;

    char* CANdevice = "can0";         /* CAN device, configurable by arguments. */
    int nodeId = -1;                /* Set to 1..127 by arguments */
    UNSIGNED16 canbitrate=0;
    bool_t rebootEnable = false;    /* Configurable by arguments */
#ifndef CO_SINGLE_THREAD
//        bool_t commandEnable = false;   /* Configurable by arguments */
#endif

//        if(argc < 3 || strcmp(argv[1], "--help") == 0){
//            printUsage(argv[0]);
//            exit(EXIT_SUCCESS);
//        }


//        /* Get program options */
//        while((opt = getopt(argc, argv, "i:p:rc:s:a:")) != -1) {
//            switch (opt) {
//                case 'i': nodeId = strtol(optarg, NULL, 0);     break;
//                case 'p': rtPriority = strtol(optarg, NULL, 0); break;
//                case 'r': rebootEnable = true;                  break;
//    #ifndef CO_SINGLE_THREAD
//                case 'c':
//                    /* In case of empty string keep default name, just enable interface. */
//                    if(strlen(optarg) != 0) {
//                        CO_command_socketPath = optarg;
//                    }
//                    commandEnable = true;
//                    break;
//    #endif
//                case 's': odStorFile_rom = optarg;              break;
//                case 'a': odStorFile_eeprom = optarg;           break;
//                default:
//                    printUsage(argv[0]);
//                   exit(EXIT_FAILURE);
//            }
//        }

//        if(optind < argc) {
//            CANdevice = argv[optind];
//            CANdevice0Index = if_nametoindex(CANdevice);
//        }

    nodeId=2;
    canbitrate=CO_OD_ROM.CANBitRate;
    CANdevice0Index = if_nametoindex(CANdevice);
    rtPriority=2;
    //CANdevice0Index=1;

    if(nodeId < 1 || nodeId > 127) {
        fprintf(stderr, "Wrong node ID (%d)\n", nodeId);
        //printUsage(argv[0]);
        exit(EXIT_FAILURE);
    }

    if(rtPriority != -1 && (rtPriority < sched_get_priority_min(SCHED_FIFO)
                         || rtPriority > sched_get_priority_max(SCHED_FIFO))) {
        fprintf(stderr, "Wrong RT priority (%d)\n", rtPriority);
        //printUsage(argv[0]);
        exit(EXIT_FAILURE);
    }

//    if(CANdevice0Index == 0) {
//        char s[120];
//        snprintf(s, 120, "Can't find CAN device \"%s\"", CANdevice);
//        CO_errExit(s);
//    }


//      printf("%s - starting CANopen device with Node ID %d(0x%02X)", argv[0], nodeId, nodeId);


    /* Verify, if OD structures have proper alignment of initial values */
    if(CO_OD_RAM.FirstWord != CO_OD_RAM.LastWord) {
        //fprintf(stderr, "Program init - %s - Error in CO_OD_RAM.\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if(CO_OD_EEPROM.FirstWord != CO_OD_EEPROM.LastWord) {
        //fprintf(stderr, "Program init - %s - Error in CO_OD_EEPROM.\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if(CO_OD_ROM.FirstWord != CO_OD_ROM.LastWord) {
        //fprintf(stderr, "Program init - %s - Error in CO_OD_ROM.\n", argv[0]);
        exit(EXIT_FAILURE);
    }


    /* initialize Object Dictionary storage */
    if(STORAGE){
        odStorStatus_rom = CO_OD_storage_init(&odStor, (uint8_t*) &CO_OD_ROM, sizeof(CO_OD_ROM), odStorFile_rom);
        odStorStatus_eeprom = CO_OD_storage_init(&odStorAuto, (uint8_t*) &CO_OD_EEPROM, sizeof(CO_OD_EEPROM), odStorFile_eeprom);
    }


    /* Catch signals SIGINT and SIGTERM */
    if(signal(SIGINT, sigHandler) == SIG_ERR)
        CO_errExit("Program init - SIGINIT handler creation failed");
    if(signal(SIGTERM, sigHandler) == SIG_ERR)
        CO_errExit("Program init - SIGTERM handler creation failed");

    /* increase variable each startup. Variable is automatically stored in non-volatile memory. */
    printf(", count=%u ...\n", ++OD_powerOnCounter);


    while(reset != CO_RESET_APP && reset != CO_RESET_QUIT && CO_endProgram == 0) {
/* CANopen communication reset - initialize CANopen objects *******************/
        CO_ReturnError_t err;

        //printf("%s - communication reset ...\n", argv[0]);


#ifndef CO_SINGLE_THREAD
        /* Wait other threads (command interface). */
        pthread_mutex_lock(&CO_CAN_VALID_mtx);
#endif

        /* Wait rt_thread. */
        if(!firstRun) {
            CO_LOCK_OD();
            CO->CANmodule[0]->CANnormal = false;
            CO_UNLOCK_OD();
        }


        /* Enter CAN configuration. */
        CO_CANsetConfigurationMode(CANdevice0Index);


        /* initialize CANopen */
        err = CO_init(CANdevice0Index, nodeId, canbitrate);
        if(err != CO_ERROR_NO) {
            char s[120];
            snprintf(s, 120, "Communication reset - CANopen initialization failed, err=%d", err);
            CO_errExit(s);
        }


        /* initialize OD objects 1010 and 1011 and verify errors. */
        if(STORAGE){
            CO_OD_configure(CO->SDO[0], OD_H1010_STORE_PARAM_FUNC, CO_ODF_1010, (void*)&odStor, 0, 0U);
            CO_OD_configure(CO->SDO[0], OD_H1011_REST_PARAM_FUNC, CO_ODF_1011, (void*)&odStor, 0, 0U);
            if(odStorStatus_rom != CO_ERROR_NO) {
                //CO_errorReport(CO->em, CO_EM_NON_VOLATILE_MEMORY, CO_EMC_HARDWARE, (uint32_t)odStorStatus_rom);
            }
            if(odStorStatus_eeprom != CO_ERROR_NO) {
                //CO_errorReport(CO->em, CO_EM_NON_VOLATILE_MEMORY, CO_EMC_HARDWARE, (uint32_t)odStorStatus_eeprom + 1000);
            }
        }


        /* Configure callback functions for task control */
        CO_EM_initCallback(CO->em, taskMain_cbSignal);
        CO_SDO_initCallback(CO->SDO[0], taskMain_cbSignal);
        CO_SDOclient_initCallback(CO->SDOclient, taskMain_cbSignal);


        /* Initialize time */
        CO_time_init(&CO_time, CO->SDO[0], &OD_time.epochTimeBaseMs, &OD_time.epochTimeOffsetMs, 0x2130);


        /* First time only initialization. */
        if(firstRun) {
            firstRun = false;

            /* Configure epoll for mainline */
            mainline_epoll_fd = epoll_create(4);
            if(mainline_epoll_fd == -1)
                CO_errExit("Program init - epoll_create mainline failed");

            /* Init mainline */
            taskMain_init(mainline_epoll_fd, &OD_performance[ODA_performance_mainCycleMaxTime]);


#ifdef CO_SINGLE_THREAD
            /* Init taskRT */
            CANrx_taskTmr_init(mainline_epoll_fd, TMR_TASK_INTERVAL_NS, &OD_performance[ODA_performance_timerCycleMaxTime]);

            OD_performance[ODA_performance_timerCycleTime] = TMR_TASK_INTERVAL_NS/1000; /* informative */

            /* Set priority for mainline */
            if(rtPriority > 0) {
                struct sched_param param;

                param.sched_priority = rtPriority;
                if(sched_setscheduler(0, SCHED_FIFO, &param) != 0)
                    CO_errExit("Program init - mainline set scheduler failed");
            }
#else
            /* Configure epoll for rt_thread */
            rt_thread_epoll_fd = epoll_create(2);
            if(rt_thread_epoll_fd == -1)
                CO_errExit("Program init - epoll_create rt_thread failed");

            /* Init taskRT */
            CANrx_taskTmr_init(rt_thread_epoll_fd, TMR_TASK_INTERVAL_NS, &OD_performance[ODA_performance_timerCycleMaxTime]);

            OD_performance[ODA_performance_timerCycleTime] = TMR_TASK_INTERVAL_NS/1000; /* informative */

            /* Create rt_thread */
            if(pthread_create(&rt_thread_id, NULL, rt_thread, NULL) != 0)
                CO_errExit("Program init - rt_thread creation failed");

            /* Set priority for rt_thread */
            if(rtPriority > 0) {
                struct sched_param param;

                param.sched_priority = rtPriority;
                if(pthread_setschedparam(rt_thread_id, SCHED_FIFO, &param) != 0)
                    CO_errExit("Program init - rt_thread set scheduler failed");
            }
#endif

//    #ifndef CO_SINGLE_THREAD
//                /* Initialize socket command interface */
//                if(commandEnable) {
//                    if(CO_command_init() != 0) {
//                        CO_errExit("Socket command interface initialization failed");
//                    }
//                    printf("%s - Command interface on socket '%s' started ...\n", argv[0], CO_command_socketPath);
//                }
//    #endif

            /* Execute optional additional application code */
            app_programStart();
        }


        /* Execute optional additional application code */
        app_communicationReset();


        /* start CAN */
        CO_CANsetNormalMode(CO->CANmodule[0]);
#ifndef CO_SINGLE_THREAD
        pthread_mutex_unlock(&CO_CAN_VALID_mtx);
#endif


        //---------------------------使所有节点进入运行状态-----------------------------//
        if(err == 0) {
            //err = CO_sendNMTcommand(CO, CO_NMT_ENTER_STOPPED, 0) ? 1:0;
            //if(err == 0) respLen = sprintf(resp, "[%d] OK", sequence);
        }
        //---------------------------------------------------------------------------//


        reset = CO_RESET_NOT;

        //printf("%s - running ...\n", argv[0]);


        while(reset == CO_RESET_NOT && CO_endProgram == 0) {
/* loop for normal program execution ******************************************/
            int ready;
            struct epoll_event ev;

            ready = epoll_wait(mainline_epoll_fd, &ev, 1, -1);

            if(ready != 1) {
                if(errno != EINTR) {
                    CO_error(0x11100000L + errno);
                }
            }

#ifdef CO_SINGLE_THREAD
            else if(CANrx_taskTmr_process(ev.data.fd)) {
                /* code was processed in the above function. Additional code process below */
                INCREMENT_1MS(CO_timer1ms);
                /* Detect timer large overflow */
                if(OD_performance[ODA_performance_timerCycleMaxTime] > TMR_TASK_OVERFLOW_US && rtPriority > 0) {
                    CO_errorReport(CO->em, CO_EM_ISR_TIMER_OVERFLOW, CO_EMC_SOFTWARE_INTERNAL, 0x22400000L | OD_performance[ODA_performance_timerCycleMaxTime]);
                }
            }
#endif

            else if(taskMain_process(ev.data.fd, &reset, CO_timer1ms)) {
                uint16_t timer1msDiff;
                static uint16_t tmr1msPrev = 0;

                /* Calculate time difference */
                timer1msDiff = CO_timer1ms - tmr1msPrev;
                tmr1msPrev = CO_timer1ms;

                /* code was processed in the above function. Additional code process below */

                /* Execute optional additional application code */
                app_programAsync(timer1msDiff);

                CO_OD_storage_autoSave(&odStorAuto, CO_timer1ms, 60000);
            }

            else {
                /* No file descriptor was processed. */
                CO_error(0x11200000L);
            }
        }
    }


/* program exit ***************************************************************/
    /* join threads */
//    #ifndef CO_SINGLE_THREAD
//        if(commandEnable) {
//            if(CO_command_clear() != 0) {
//                CO_errExit("Socket command interface removal failed");
//            }
//        }
//    #endif

    CO_endProgram = 1;
#ifndef CO_SINGLE_THREAD
    if(pthread_join(rt_thread_id, NULL) != 0) {
        CO_errExit("Program end - pthread_join failed");
    }
#endif

    /* Execute optional additional application code */
    app_programEnd();

    /* Store CO_OD_EEPROM */
    if(STORAGE){
        CO_OD_storage_autoSave(&odStorAuto, 0, 0);
        CO_OD_storage_autoSaveClose(&odStorAuto);
    }

    /* delete objects from memory */
    CANrx_taskTmr_close();
    taskMain_close();
    CO_delete(CANdevice0Index);

    //printf("%s on %s (nodeId=0x%02X) - finished.\n\n", argv[0], CANdevice, nodeId);

    /* Flush all buffers (and reboot) */
    if(rebootEnable && reset == CO_RESET_APP) {
        sync();
        if(reboot(LINUX_REBOOT_CMD_RESTART) != 0) {
            CO_errExit("Program end - reboot failed");
        }
    }

    exit(EXIT_SUCCESS);
//-------------------------------------------------------------------------------------//
}

#ifndef CO_SINGLE_THREAD
/* Realtime thread for CAN receive and taskTmr ********************************/
static void* rt_thread(void* arg) {

    /* Endless loop */
    while(CO_endProgram == 0) {
        int ready;
        struct epoll_event ev;

        ready = epoll_wait(rt_thread_epoll_fd, &ev, 1, -1);

        if(ready != 1) {
            if(errno != EINTR) {
                CO_error(0x12100000L + errno);
            }
        }

        else if(CANrx_taskTmr_process(ev.data.fd)) {
            int i;

            /* code was processed in the above function. Additional code process below */
            INCREMENT_1MS(CO_timer1ms);

            /* Monitor variables with trace objects */
            CO_time_process(&CO_time);
#if CO_NO_TRACE > 0
            for(i=0; i<OD_traceEnable && i<CO_NO_TRACE; i++) {
                CO_trace_process(CO->trace[i], *CO_time.epochTimeOffsetMs);
            }
#endif

            /* Execute optional additional application code */
            app_program1ms();

            /* Detect timer large overflow */
            if(OD_performance[ODA_performance_timerCycleMaxTime] > TMR_TASK_OVERFLOW_US && rtPriority > 0 && CO->CANmodule[0]->CANnormal) {
                CO_errorReport(CO->em, CO_EM_ISR_TIMER_OVERFLOW, CO_EMC_SOFTWARE_INTERNAL, 0x22400000L | OD_performance[ODA_performance_timerCycleMaxTime]);
            }
        }

        else {
            /* No file descriptor was processed. */
            CO_error(0x12200000L);
        }
    }

    return NULL;
}
#endif
