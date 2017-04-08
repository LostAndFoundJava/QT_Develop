#include "dataset.h"
#include "ui_dataset.h"

dataset::dataset(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dataset)
{
    ui->setupUi(this);
    //设置背景色
    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, "#D4E6CA");
    this->setAutoFillBackground(true);
    this->setPalette(Pal);
}

dataset::~dataset()
{
    delete ui;
}

void dataset::on_save_clicked()
{
//    QString str;
//    QString str1;
//    str=QString::number(ui->dateEdit->date().year())+"."+QString::number(ui->dateEdit->date().month())+"."+QString::number(ui->dateEdit->date().day())
//        +"-"+QString::number(ui->timeEdit->time().hour())+":"+QString::number(ui->timeEdit->time().minute())+":"+QString::number(ui->timeEdit->time().second());
//    str1="date "+str;
//    QProcess::execute(str1.toLatin1().data());
}

void dataset::on_cancel_clicked()
{
    close();
    delete this;
}
