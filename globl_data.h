#ifndef GLOBAL_DATA_H
#define GLOBAL_DATA_H
#include <QtGui>
typedef struct
{
    unsigned short int year;   //年
    unsigned short int month;  //月
    unsigned short int day;
    unsigned short int hour;
    unsigned short int minute;
    unsigned short int second;
    unsigned short int week;
}System_ParameterStruct;  //系统参数

struct System_RunTimeStruct  //
{
    unsigned short int day;
    unsigned short int hour;
    unsigned short int minute;
    unsigned short int second;
};

/****************************************************************************************/
//================================= Global functions========================================================
extern System_ParameterStruct             SystemParameter;                               //系统参数
extern System_RunTimeStruct               System_RunTime;                                //系统安全运行时间
extern int System_InitTime;
#endif // GLOBAL_DATA_H
