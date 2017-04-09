#include "log.h"
#include "ui_log.h"
#include <QGridLayout>
#include <CO_driver.h>
#include <CO_OD.h>
#include <stdio.h>

Log::Log(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Log)
{
    ui->setupUi(this);
    setWindowTitle(tr("日志"));

    ui->tableWidget->setColumnWidth(0,365);
    ui->tableWidget->setColumnWidth(1,365);
    ui->tableWidget->setRowHeight(0,55);
    ui->tableWidget->setRowHeight(1,55);
    ui->tableWidget->setRowHeight(2,55);
    ui->tableWidget->setRowHeight(3,55);
    ui->tableWidget->setRowHeight(4,55);

    ui->tableWidget_2->setColumnWidth(0,70);
    ui->tableWidget_2->setColumnWidth(1,70);
    ui->tableWidget_2->setColumnWidth(2,70);
    ui->tableWidget_2->setColumnWidth(3,70);
    ui->tableWidget_2->setColumnWidth(4,70);
    ui->tableWidget_2->setColumnWidth(5,70);
    ui->tableWidget_2->setRowHeight(0,48);
    ui->tableWidget_2->setRowHeight(1,48);
    ui->tableWidget_2->setRowHeight(2,48);
    ui->tableWidget_2->setRowHeight(3,48);
    ui->tableWidget_2->setRowHeight(4,48);
    ui->tableWidget_2->setRowHeight(5,48);

    ui->Stack->setCurrentIndex(0);
    ui->DisLabel->setText(tr("登陆日志"));

    char str[15];
    sprintf(str,"%d",CO_OD_RAM.readInput8Bit[0]);
    qDebug(str);
}

Log::~Log()
{
    delete ui;
}




void Log::on_NGButton_clicked()
{
    ui->Stack->setCurrentIndex(1);
    ui->DisLabel->setText(tr("NG日志"));
}

void Log::on_Return_clicked()
{
    close();
}



void Log::on_LoadLog_2_clicked()
{
    ui->Stack->setCurrentIndex(0);
    ui->DisLabel->setText(tr("登陆日志"));
}
