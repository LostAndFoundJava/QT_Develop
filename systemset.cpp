#include "systemset.h"
#include "ui_systemset.h"
#include <string>
#include <QWidget>
#include <sys/time.h>
#include <time.h>
#include <globl_data.h>
Systemset::Systemset(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Systemset)
{
    ui->setupUi(this);
    setWindowTitle(tr("系统设置"));

    //设置背景色
    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, "#D4E6CA");
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

   // ui->stackedWidget->setCurrentIndex(0);

//    buttonGroup = new QButtonGroup(this);
//    buttonGroup->setExclusive(true);
//    buttonGroup->addButton(ui->pushButton_1,1);
//    buttonGroup->addButton(ui->pushButton_2,2);
//    buttonGroup->addButton(ui->pushButton_3,3);
//    buttonGroup->addButton(ui->pushButton_4,4);
//    buttonGroup->addButton(ui->pushButton_5,5);
//    buttonGroup->addButton(ui->pushButton_6,6);
//    buttonGroup->addButton(ui->pushButton_7,7);
//    buttonGroup->addButton(ui->pushButton_8,8);
//    buttonGroup->addButton(ui->pushButton_9,9);
//    buttonGroup->addButton(ui->pushButton_10,10);
//    connect(buttonGroup,SIGNAL(buttonClicked(int)),this,SLOT(buttonJudge(int)));
    ui->power->installEventFilter(this);
    ui->language->installEventFilter(this);
    ui->check->installEventFilter(this);
    ui->screen_display->installEventFilter(this);
    ui->graphics_clear->installEventFilter(this);
    ui->network->installEventFilter(this);
    ui->in_out->installEventFilter(this);
    ui->parameter->installEventFilter(this);
    ui->update->installEventFilter(this);
    ui->setting->installEventFilter(this);

    //时间显示
    valueInt();
    QTimer *timer = new QTimer(this);
    this->setFocusPolicy(Qt::NoFocus);
    connect(timer, SIGNAL(timeout()), this, SLOT(ShowTime()));
    timer->start(500);

    ui->Powerwidget->show();
    //ui->Powerwidget->setFixedSize(701,251);
    ui->Powerwidget->setGeometry(0,0,701,251);
    ui->Languagewidget->hide();
    ui->Screenwidget->hide();
    ui->Graphicswidget->hide();
    Button_AMP_1(ui->power);
}

Systemset::~Systemset()
{
    delete ui;
}
void Systemset::valueInt(void)
{
    System_RunTime.hour=0;
    System_RunTime.minute=0;
    System_RunTime.second=0;
    ShowTime();
}

void Systemset::ShowTime()
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
bool Systemset::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->power)
    {
        if(event->type() == QEvent::MouseButtonPress)
          {
                Button_AMP_1(ui->power);
                Button_AMP_0(ui->language);
                Button_AMP_0(ui->check);
                Button_AMP_0(ui->screen_display);
                Button_AMP_0(ui->graphics_clear);
                Button_AMP_0(ui->network);
                Button_AMP_0(ui->in_out);
                Button_AMP_0(ui->parameter);
                Button_AMP_0(ui->update);
                Button_AMP_0(ui->setting);

                ui->Powerwidget->show();
                 ui->Powerwidget->setGeometry(0,0,701,251);
                ui->Languagewidget->hide();
                ui->Screenwidget->hide();
                ui->Graphicswidget->hide();
           }
    }
    if(watched == ui->language)
    {
        if(event->type() == QEvent::MouseButtonPress)
        {
            Button_AMP_0(ui->power);
            Button_AMP_1(ui->language);
            Button_AMP_0(ui->check);
            Button_AMP_0(ui->screen_display);
            Button_AMP_0(ui->graphics_clear);
            Button_AMP_0(ui->network);
            Button_AMP_0(ui->in_out);
            Button_AMP_0(ui->parameter);
            Button_AMP_0(ui->update);
            Button_AMP_0(ui->setting);

            ui->Powerwidget->hide();            
            ui->Languagewidget->show();
             ui->Languagewidget->setGeometry(0,0,701,251);
            ui->Screenwidget->hide();
            ui->Graphicswidget->hide();
        }
    }
    if(watched == ui->check)
    {
        if(event->type() == QEvent::MouseButtonPress)
        {
            Button_AMP_0(ui->power);
            Button_AMP_0(ui->language);
            Button_AMP_1(ui->check);
            Button_AMP_0(ui->screen_display);
            Button_AMP_0(ui->graphics_clear);
            Button_AMP_0(ui->network);
            Button_AMP_0(ui->in_out);
            Button_AMP_0(ui->parameter);
            Button_AMP_0(ui->update);
            Button_AMP_0(ui->setting);


        }
    }
    if(watched == ui->screen_display)
    {
        if(event->type() == QEvent::MouseButtonPress)
        {
            Button_AMP_0(ui->power);
            Button_AMP_0(ui->language);
            Button_AMP_0(ui->check);
            Button_AMP_1(ui->screen_display);
            Button_AMP_0(ui->graphics_clear);
            Button_AMP_0(ui->network);
            Button_AMP_0(ui->in_out);
            Button_AMP_0(ui->parameter);
            Button_AMP_0(ui->update);
            Button_AMP_0(ui->setting);

            ui->Powerwidget->hide();
            ui->Languagewidget->hide();
            ui->Screenwidget->show();
            ui->Screenwidget->setGeometry(0,0,701,251);
            ui->Graphicswidget->hide();
        }
    }
    if(watched == ui->graphics_clear)
    {
        if(event->type() == QEvent::MouseButtonPress)
        {
            Button_AMP_0(ui->power);
            Button_AMP_0(ui->language);
            Button_AMP_0(ui->check);
            Button_AMP_0(ui->screen_display);
            Button_AMP_1(ui->graphics_clear);
            Button_AMP_0(ui->network);
            Button_AMP_0(ui->in_out);
            Button_AMP_0(ui->parameter);
            Button_AMP_0(ui->update);
            Button_AMP_0(ui->setting);

            ui->Powerwidget->hide();
            ui->Languagewidget->hide();
            ui->Screenwidget->hide();
            ui->Graphicswidget->show();
            ui->Graphicswidget->setGeometry(0,0,701,251);

        }
    }
    if(watched == ui->network)
    {
        if(event->type() == QEvent::MouseButtonPress)
        {
            Button_AMP_0(ui->power);
            Button_AMP_0(ui->language);
            Button_AMP_0(ui->check);
            Button_AMP_0(ui->screen_display);
            Button_AMP_0(ui->graphics_clear);
            Button_AMP_1(ui->network);
            Button_AMP_0(ui->in_out);
            Button_AMP_0(ui->parameter);
            Button_AMP_0(ui->update);
            Button_AMP_0(ui->setting);
        }
    }
    if(watched==ui->in_out)
    {
        if(event->type() == QEvent::MouseButtonPress)
        {
            Button_AMP_0(ui->power);
            Button_AMP_0(ui->language);
            Button_AMP_0(ui->check);
            Button_AMP_0(ui->screen_display);
            Button_AMP_0(ui->graphics_clear);
            Button_AMP_0(ui->network);
            Button_AMP_1(ui->in_out);
            Button_AMP_0(ui->parameter);
            Button_AMP_0(ui->update);
            Button_AMP_0(ui->setting);
        }
    }
    if(watched==ui->parameter)
    {
        if(event->type() == QEvent::MouseButtonPress)
        {
            Button_AMP_0(ui->power);
            Button_AMP_0(ui->language);
            Button_AMP_0(ui->check);
            Button_AMP_0(ui->screen_display);
            Button_AMP_0(ui->graphics_clear);
            Button_AMP_0(ui->network);
            Button_AMP_0(ui->in_out);
            Button_AMP_1(ui->parameter);
            Button_AMP_0(ui->update);
            Button_AMP_0(ui->setting);
        }
    }
    if(watched==ui->update)
    {
        if(event->type() == QEvent::MouseButtonPress)
        {
            Button_AMP_0(ui->power);
            Button_AMP_0(ui->language);
            Button_AMP_0(ui->check);
            Button_AMP_0(ui->screen_display);
            Button_AMP_0(ui->graphics_clear);
            Button_AMP_0(ui->network);
            Button_AMP_0(ui->in_out);
            Button_AMP_0(ui->parameter);
            Button_AMP_1(ui->update);
            Button_AMP_0(ui->setting);
        }
    }
    if(watched==ui->setting)
    {
        if(event->type() == QEvent::MouseButtonPress)
        {
            Button_AMP_0(ui->power);
            Button_AMP_0(ui->language);
            Button_AMP_0(ui->check);
            Button_AMP_0(ui->screen_display);
            Button_AMP_0(ui->graphics_clear);
            Button_AMP_0(ui->network);
            Button_AMP_0(ui->in_out);
            Button_AMP_0(ui->parameter);
            Button_AMP_0(ui->update);
            Button_AMP_1(ui->setting);
        }
    }
 return QWidget::eventFilter(watched,event);
}
//点击和释放对应不同的颜色处理
void Systemset::Button_AMP_1(QPushButton *button)
{
    button->setStyleSheet("QPushButton{background-color:#b8dedf;color:#000;border-radius:5px;}");
}

void Systemset::Button_AMP_0(QPushButton *button)
{

    button->setStyleSheet("QPushButton{background-color:#5394a0;color:#fff;border-radius:5px;}");

}


void Systemset::on_dataset_clicked()
{
    Dataset=new dataset();
    Dataset->show();
   Dataset->move(pos().x(),pos().y());
}
