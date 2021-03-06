﻿#include "varify.h"
#include "ui_varify.h"
#include <string>
#include <QWidget>
#include <sys/time.h>
#include <time.h>
#include <globl_data.h>
varify::varify(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::varify)
{
    ui->setupUi(this);
    //设置背景色
    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, "#D4E6CA");
    this->setAutoFillBackground(true);
    this->setPalette(Pal);
    //时间显示
    valueInt();
    QTimer *timer = new QTimer(this);
    this->setFocusPolicy(Qt::NoFocus);
    connect(timer, SIGNAL(timeout()), this, SLOT(ShowTime()));
    timer->start(500);

    valueInt();
    //设置背景色
    QPalette Pal1(palette());
    Pal1.setColor(QPalette::Background, "#D4E6CA");
    this->setAutoFillBackground(true);
    this->setPalette(Pal1);
    //struct timespec slptm;
    //slptm.tv_sec=1.5;
    //slptm.tv_nsec=0;
    QTime t;
    t.start();
    while(t.elapsed()<System_InitTime)
        QCoreApplication::processEvents();


    Widget *w1 = new Widget(this);
    w1->show();
}

varify::~varify()
{
    delete ui;
}
void varify::valueInt(void)
{
    System_RunTime.hour=0;
    System_RunTime.minute=0;
    System_RunTime.second=0;
    ShowTime();
}

void varify::ShowTime()
{
     QDateTime time = QDateTime(QDateTime::currentDateTime());
     QString text = time.toString(tr("yyyy/M/d"));
//     if(time.date().dayOfWeek() == 1) text=text+tr("星期一");
//     else if(time.date().dayOfWeek() == 2) text=text+tr("星期二");
//     else if(time.date().dayOfWeek() == 3) text=text+tr("星期三");
//     else if(time.date().dayOfWeek() == 4) text=text+tr("星期四");
//     else if(time.date().dayOfWeek() == 5) text=text+tr("星期五");
//     else if(time.date().dayOfWeek() == 6) text=text+tr("星期六");
//     else if(time.date().dayOfWeek() == 7) text=text+tr("星期日");
     ui->DateTime->setText((text+time.toString(" hh:mm")));
}

void varify::on_DropOut_clicked()
{
   w->activateWindow();
   this->hide();
}

void varify::on_SetZero_clicked()
{
    ui->TestNum->setText(tr("检测数0"));
    ui->PassNum->setText(tr("通过数0"));
    ui->NoPassNum->setText(tr("未通过数0"));
}
