#ifndef THREAD_CANOPEN_H
#define THREAD_CANOPEN_H

#include <QThread>
#include "application.h"
#include "CANopen.h"
#include "CO_OD_storage.h"
#include "CO_Linux_tasks.h"
#include "CO_time.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sched.h>
#include <signal.h>
#include <errno.h>
#include <sys/epoll.h>
#include <net/if.h>
#include <linux/reboot.h>
#include <sys/reboot.h>

#ifndef CO_SINGLE_THREAD
#include "CO_command.h"
#include "CO_comm_helpers.h"
#include <pthread.h>
#endif

class Thread_CANopen : public QThread
{
    Q_OBJECT
public:
    explicit Thread_CANopen(QObject *parent = 0);
    
signals:
    
public slots:

protected:
    void run();
    
};

#endif // THREAD_CANOPEN_H
