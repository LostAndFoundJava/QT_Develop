#include "cmysplashscreen.h"
#include <QTime>
#include <QTimer>
#include <time.h>

CMySplashScreen::CMySplashScreen(QPixmap &pixmap,int time) :
    QSplashScreen(pixmap),
    elapseTime(time)
{
    ProgressBar = new QProgressBar(this);
    //设置进度条的位置
    ProgressBar->setGeometry(70,pixmap.height()-130,pixmap.width()-140,20);
    //设置进度条的样式
    ProgressBar->setStyleSheet("QProgressBar {color:black;font:30px;text-align:center; }QProgressBar::chunk {background-color: rgb(202, 165, 14);}");
    //设置进度条的范围
    ProgressBar->setRange(0, 100);
    //设置进度条的当前进度
    ProgressBar->setValue(0);

    qtimer = new QTimer(this);
    qtimer->start(elapseTime/100);
    connect(qtimer,SIGNAL(timeout()),this,SLOT(on_time_out()));


}

CMySplashScreen::~CMySplashScreen()
{

}

void CMySplashScreen::on_time_out()
{
    temp++;
    ProgressBar->setValue(temp);

    if(temp==elapseTime)
    {
        qtimer->stop();
        temp=0;
    }

}

