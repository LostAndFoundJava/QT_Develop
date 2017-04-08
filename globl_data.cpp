#include <globl_data.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>

#include <assert.h>
#include <string.h>

/***********************************************************************************************************/
System_ParameterStruct             SystemParameter;        //系统参数
System_RunTimeStruct               System_RunTime;         //系统安全运行时间
int System_InitTime=1000;      //系统开机时间 毫秒
