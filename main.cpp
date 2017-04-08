#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include <QPixmap>
#include <QSplashScreen>
#include <cmysplashscreen.h>
#include <QDesktopWidget>
#include <globl_data.h>
#include "thread_canopen.h"


MainWindow *w;
int main(int argc, char *argv[])
{
    Thread_CANopen *canopen_slave = new Thread_CANopen();
    //canopen_slave->start();
    QApplication a(argc, argv);
//    QTextCodec *codec = QTextCodec::codecForName("GB2312");
//    QTextCodec::setCodecForTr(codec);
//    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
//    QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());

    //QTextCodec *codec = QTextCodec::codecForName("GB2312");
    QTextCodec *codec1 = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec1);
    QTextCodec::setCodecForCStrings(codec1);
    QTextCodec::setCodecForTr(codec1);

    QPixmap pixmap(":/new/prefix1/image/Bofeng.png");
    QSize picSize(771,456);
    QPixmap scaledPixmap = pixmap.scaled(picSize,Qt::KeepAspectRatio);

    CMySplashScreen *splash = new CMySplashScreen(scaledPixmap,System_InitTime);
    splash->show();
    //a.processEvents();
    splash->move((QApplication::desktop()->width()-splash->width())/2,
                 (QApplication::desktop()->height()-splash->height())/2);
    //struct timespec slptm;
    //slptm.tv_sec=1.5;
    //slptm.tv_nsec=0;
    //QTime t;
    MainWindow w;
    w.show();
    w.move((QApplication::desktop()->width()-w.width())/2,
           (QApplication::desktop()->height()-w.height())/2);


    splash->finish(&w);
    delete splash;

//    while(1){
//        char string[25];
//        sprintf(string,"%d",input);
//        qDebug(string);
//        input = CO_OD_RAM.readInput8Bit[0];
//    }

    return a.exec();
}
