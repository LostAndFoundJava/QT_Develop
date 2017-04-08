#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QWidget>
#include <sys/time.h>
#include <time.h>
#include <globl_data.h>

//#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    w = this;
    ui->setupUi(this);
    setWindowTitle(tr("双频机"));
    valueInt();
    //设置背景色
    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, "#D4E6CA");
    this->setAutoFillBackground(true);
    this->setPalette(Pal);
    //struct timespec slptm;
    //slptm.tv_sec=1.5;
    //slptm.tv_nsec=0;
    QTime t;
    t.start();
    while(t.elapsed()<System_InitTime)
        QCoreApplication::processEvents();
    //给界面文件内资源添加事件过滤
    ui->Jur_And_User->installEventFilter(this);
    ui->Log->installEventFilter(this);
    ui->Management->installEventFilter(this);
    ui->Phase->installEventFilter(this);
    ui->Sensitivity->installEventFilter(this);
    ui->SetZero->installEventFilter(this);
    ui->System_set->installEventFilter(this);

    //设置TAB的顺序
//    QWidget::setTabOrder(ui->Detect,ui->Jur_And_User);
//    QWidget::setTabOrder(ui->Jur_And_User,ui->DateTime);
//    QWidget::setTabOrder(ui->DateTime,ui->ProNum);
//    QWidget::setTabOrder(ui->ProNum,ui->ProName);
//    QWidget::setTabOrder(ui->ProName,ui->SetZero);
//    QWidget::setTabOrder(ui->SetZero,ui->Management);
//    QWidget::setTabOrder(ui->Management,ui->Sensitivity);
//    QWidget::setTabOrder(ui->Sensitivity,ui->Phase);
//    QWidget::setTabOrder(ui->Phase,ui->Log);
//    QWidget::setTabOrder(ui->Log,ui->System_set);
//    QWidget::setTabOrder(ui->System_set,ui->Detect);

    Widget *w1 = new Widget(this,false);
    w1->show();

    QTimer *timer = new QTimer(this);
    //this->setFocusPolicy(Qt::NoFocus);
    connect(timer, SIGNAL(timeout()), this, SLOT(ShowTime()));
    timer->start(500);

    management = new Management;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::valueInt(void)
{
    System_RunTime.hour=0;
    System_RunTime.minute=0;
    System_RunTime.second=0;
    ShowTime();
}

void MainWindow::ShowTime()
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

//触发的事件
bool MainWindow::eventFilter(QObject *watched,QEvent *event)
{
    if(watched==ui->System_set)
    {
        if(event->type()==QEvent::MouseButtonPress)
        {
            Button_AMP_1(ui->System_set);
        }
        else if(event->type()==QEvent::MouseButtonRelease)
        {
            Button_AMP_0(ui->System_set);
        }
    }
    if(watched==ui->Jur_And_User)
    {
        if(event->type()==QEvent::MouseButtonPress)
        {
           Button_AMP_1(ui->Jur_And_User);
        }
        else if(event->type()==QEvent::MouseButtonRelease)
        {
            Button_AMP_0(ui->Jur_And_User);
        }
    }

    if(watched==ui->Log)
    {
        if(event->type()==QEvent::MouseButtonPress)
        {
           Button_AMP_1(ui->Log);
        }
        else if(event->type()==QEvent::MouseButtonRelease)
        {
            Button_AMP_0(ui->Log);
        }
    }
    if(watched==ui->Management)
    {
        if(event->type()==QEvent::MouseButtonPress)
        {
           Button_AMP_1(ui->Management);

        }
        else if(event->type()==QEvent::MouseButtonRelease)
        {
            Button_AMP_0(ui->Management);

        }

    }
    if(watched==ui->Phase)
    {
        if(event->type()==QEvent::MouseButtonPress)
        {
           Button_AMP_1(ui->Phase);
        }
        else if(event->type()==QEvent::MouseButtonRelease)
        {
            Button_AMP_0(ui->Phase);
        }
    }
    if(watched==ui->Sensitivity)
    {
        if(event->type()==QEvent::MouseButtonPress)
        {
           Button_AMP_1(ui->Sensitivity);
        }
        else if(event->type()==QEvent::MouseButtonRelease)
        {
            Button_AMP_0(ui->Sensitivity);
        }
    }
    if(watched==ui->SetZero)
    {
        if(event->type()==QEvent::MouseButtonPress)
        {
           Button_AMP_1(ui->SetZero);
        }
        else if(event->type()==QEvent::MouseButtonRelease)
        {
            Button_AMP_0(ui->SetZero);
        }
    }
   return QWidget::eventFilter(watched,event);
}

//点击和释放对应不同的颜色处理
void MainWindow::Button_AMP_1(QPushButton *button)
{
    button->setStyleSheet("QPushButton{background-color:#b8dedf;color:#000;border-radius:5px;}");
}

void MainWindow::Button_AMP_0(QPushButton *button)
{

    button->setStyleSheet("QPushButton{background-color:#5394a0;color:#fff;border-radius:5px;}");

}

//键盘处理事件
void MainWindow::keyPressEvent(QKeyEvent *event)
{
  switch(event->key())
  {
      case Qt::Key_Up:
      break;
      case Qt::Key_Down:
      break;
      case Qt::Key_Right:
      this->focusNextChild();
      break;
      case Qt::Key_Left:
      this->focusNextChild();
      break;
      case Qt::Key_Return:
      break;
      case Qt::Key_Escape:
      this->close();
      break;
      case Qt::Key_Alt:
      break;
      default:
      break;
  }
}

void MainWindow::on_Log_clicked()
{
    log = new Log;
    log->show();
    p=this->pos();
    log->move(pos().x(),pos().y());
}

void MainWindow::on_Management_clicked()
{
    management->show();
    p=this->pos();
    management->move(pos().x(),pos().y());
}

void MainWindow::on_System_set_clicked()
{
    systemset = new Systemset;
    systemset->show();
    p=this->pos();
    systemset->move(pos().x(),pos().y());
}

void MainWindow::on_SetZero_clicked()
{
    ui->TestNum->setText(tr("检测数0"));
    ui->PassNum->setText(tr("通过数0"));
    ui->NoPassNum->setText(tr("未通过数0"));
}

