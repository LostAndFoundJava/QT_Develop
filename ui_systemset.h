/********************************************************************************
** Form generated from reading UI file 'systemset.ui'
**
** Created: Sat Apr 8 18:49:24 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMSET_H
#define UI_SYSTEMSET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Systemset
{
public:
    QLabel *SystemLabel;
    QPushButton *Jur_And_User;
    QLabel *DateTime;
    QPushButton *power;
    QPushButton *language;
    QPushButton *check;
    QPushButton *screen_display;
    QPushButton *graphics_clear;
    QPushButton *network;
    QPushButton *update;
    QPushButton *setting;
    QPushButton *parameter;
    QPushButton *in_out;
    QWidget *widget;
    QWidget *Graphicswidget;
    QSpinBox *spinBox;
    QLabel *label;
    QWidget *Screenwidget;
    QPushButton *adjustment;
    QPushButton *dataset;
    QPushButton *ligntopen;
    QPushButton *screenprotect;
    QWidget *Languagewidget;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QWidget *Powerwidget;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QWidget *Systemset)
    {
        if (Systemset->objectName().isEmpty())
            Systemset->setObjectName(QString::fromUtf8("Systemset"));
        Systemset->resize(751, 426);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(114, 137, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Systemset->setPalette(palette);
        Systemset->setStyleSheet(QString::fromUtf8(""));
        SystemLabel = new QLabel(Systemset);
        SystemLabel->setObjectName(QString::fromUtf8("SystemLabel"));
        SystemLabel->setGeometry(QRect(10, 10, 41, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        SystemLabel->setFont(font);
        SystemLabel->setStyleSheet(QString::fromUtf8("border:none;"));
        SystemLabel->setFrameShape(QFrame::Box);
        Jur_And_User = new QPushButton(Systemset);
        Jur_And_User->setObjectName(QString::fromUtf8("Jur_And_User"));
        Jur_And_User->setGeometry(QRect(330, 10, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(12);
        Jur_And_User->setFont(font1);
        Jur_And_User->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        DateTime = new QLabel(Systemset);
        DateTime->setObjectName(QString::fromUtf8("DateTime"));
        DateTime->setGeometry(QRect(574, 10, 176, 31));
        DateTime->setFont(font);
        DateTime->setStyleSheet(QString::fromUtf8("border:none;"));
        DateTime->setFrameShape(QFrame::Box);
        power = new QPushButton(Systemset);
        power->setObjectName(QString::fromUtf8("power"));
        power->setGeometry(QRect(40, 50, 90, 30));
        power->setFont(font1);
        power->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        language = new QPushButton(Systemset);
        language->setObjectName(QString::fromUtf8("language"));
        language->setGeometry(QRect(150, 50, 90, 30));
        language->setFont(font1);
        language->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        check = new QPushButton(Systemset);
        check->setObjectName(QString::fromUtf8("check"));
        check->setGeometry(QRect(260, 50, 90, 30));
        check->setFont(font1);
        check->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        screen_display = new QPushButton(Systemset);
        screen_display->setObjectName(QString::fromUtf8("screen_display"));
        screen_display->setGeometry(QRect(380, 50, 97, 30));
        screen_display->setFont(font1);
        screen_display->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        graphics_clear = new QPushButton(Systemset);
        graphics_clear->setObjectName(QString::fromUtf8("graphics_clear"));
        graphics_clear->setGeometry(QRect(500, 50, 90, 30));
        graphics_clear->setFont(font1);
        graphics_clear->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        network = new QPushButton(Systemset);
        network->setObjectName(QString::fromUtf8("network"));
        network->setGeometry(QRect(610, 50, 90, 30));
        network->setFont(font1);
        network->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        update = new QPushButton(Systemset);
        update->setObjectName(QString::fromUtf8("update"));
        update->setGeometry(QRect(260, 100, 90, 30));
        update->setFont(font1);
        update->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        setting = new QPushButton(Systemset);
        setting->setObjectName(QString::fromUtf8("setting"));
        setting->setGeometry(QRect(380, 100, 117, 30));
        setting->setFont(font1);
        setting->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        parameter = new QPushButton(Systemset);
        parameter->setObjectName(QString::fromUtf8("parameter"));
        parameter->setGeometry(QRect(150, 100, 90, 30));
        parameter->setFont(font1);
        parameter->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        in_out = new QPushButton(Systemset);
        in_out->setObjectName(QString::fromUtf8("in_out"));
        in_out->setGeometry(QRect(40, 100, 90, 30));
        in_out->setFont(font1);
        in_out->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        widget = new QWidget(Systemset);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 150, 701, 251));
        Graphicswidget = new QWidget(widget);
        Graphicswidget->setObjectName(QString::fromUtf8("Graphicswidget"));
        Graphicswidget->setGeometry(QRect(0, 150, 311, 81));
        Graphicswidget->setStyleSheet(QString::fromUtf8("border:1px solid #000;"));
        spinBox = new QSpinBox(Graphicswidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(130, 30, 171, 31));
        spinBox->setFont(font1);
        spinBox->setStyleSheet(QString::fromUtf8("background-color:#D4E6CA;\n"
"border-radius:3px;"));
        label = new QLabel(Graphicswidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 101, 31));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("border:none;"));
        spinBox->raise();
        label->raise();
        Screenwidget = new QWidget(widget);
        Screenwidget->setObjectName(QString::fromUtf8("Screenwidget"));
        Screenwidget->setGeometry(QRect(320, 20, 171, 221));
        Screenwidget->setStyleSheet(QString::fromUtf8("border:1px solid #000;"));
        adjustment = new QPushButton(Screenwidget);
        adjustment->setObjectName(QString::fromUtf8("adjustment"));
        adjustment->setGeometry(QRect(50, 30, 75, 23));
        adjustment->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        dataset = new QPushButton(Screenwidget);
        dataset->setObjectName(QString::fromUtf8("dataset"));
        dataset->setGeometry(QRect(50, 70, 75, 23));
        dataset->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        ligntopen = new QPushButton(Screenwidget);
        ligntopen->setObjectName(QString::fromUtf8("ligntopen"));
        ligntopen->setGeometry(QRect(50, 120, 75, 23));
        ligntopen->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        screenprotect = new QPushButton(Screenwidget);
        screenprotect->setObjectName(QString::fromUtf8("screenprotect"));
        screenprotect->setGeometry(QRect(50, 170, 75, 23));
        screenprotect->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        adjustment->raise();
        dataset->raise();
        ligntopen->raise();
        screenprotect->raise();
        widget->raise();
        Languagewidget = new QWidget(widget);
        Languagewidget->setObjectName(QString::fromUtf8("Languagewidget"));
        Languagewidget->setGeometry(QRect(90, 10, 181, 121));
        Languagewidget->setStyleSheet(QString::fromUtf8("border:1px solid #000;"));
        radioButton_4 = new QRadioButton(Languagewidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(40, 40, 89, 17));
        radioButton_4->setFont(font1);
        radioButton_4->setStyleSheet(QString::fromUtf8("border:none;"));
        radioButton_5 = new QRadioButton(Languagewidget);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(40, 80, 89, 17));
        radioButton_5->setFont(font1);
        radioButton_5->setStyleSheet(QString::fromUtf8("border:none;"));
        Powerwidget = new QWidget(widget);
        Powerwidget->setObjectName(QString::fromUtf8("Powerwidget"));
        Powerwidget->setGeometry(QRect(510, 40, 171, 161));
        Powerwidget->setStyleSheet(QString::fromUtf8("border:1px solid #000;"));
        radioButton = new QRadioButton(Powerwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(60, 30, 89, 17));
        radioButton->setFont(font1);
        radioButton->setStyleSheet(QString::fromUtf8("border:none;"));
        radioButton_2 = new QRadioButton(Powerwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(60, 70, 89, 17));
        radioButton_2->setFont(font1);
        radioButton_2->setStyleSheet(QString::fromUtf8("border:none;"));
        radioButton_3 = new QRadioButton(Powerwidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(60, 110, 89, 17));
        radioButton_3->setFont(font1);
        radioButton_3->setStyleSheet(QString::fromUtf8("border:none;"));
        radioButton->raise();
        radioButton_2->raise();
        radioButton_3->raise();
        Languagewidget->raise();
        widget->raise();

        retranslateUi(Systemset);

        QMetaObject::connectSlotsByName(Systemset);
    } // setupUi

    void retranslateUi(QWidget *Systemset)
    {
        Systemset->setWindowTitle(QApplication::translate("Systemset", "Form", 0, QApplication::UnicodeUTF8));
        SystemLabel->setText(QApplication::translate("Systemset", "\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        Jur_And_User->setText(QApplication::translate("Systemset", "\346\235\203\351\231\220/\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        DateTime->setText(QApplication::translate("Systemset", "2017/02/01 13:28", 0, QApplication::UnicodeUTF8));
        power->setText(QApplication::translate("Systemset", "\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        language->setText(QApplication::translate("Systemset", "\350\257\255\350\250\200", 0, QApplication::UnicodeUTF8));
        check->setText(QApplication::translate("Systemset", "\350\207\252\346\243\200", 0, QApplication::UnicodeUTF8));
        screen_display->setText(QApplication::translate("Systemset", "\345\261\217\345\271\225\344\270\216\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        graphics_clear->setText(QApplication::translate("Systemset", "\345\233\276\345\275\242\346\270\205\347\251\272", 0, QApplication::UnicodeUTF8));
        network->setText(QApplication::translate("Systemset", "\350\201\224\347\275\221", 0, QApplication::UnicodeUTF8));
        update->setText(QApplication::translate("Systemset", "\346\233\264\346\226\260", 0, QApplication::UnicodeUTF8));
        setting->setText(QApplication::translate("Systemset", "\346\201\242\345\244\215\345\207\272\345\216\202\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        parameter->setText(QApplication::translate("Systemset", "\350\256\276\345\244\207\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        in_out->setText(QApplication::translate("Systemset", "\350\276\223\345\205\245\350\276\223\345\207\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Systemset", "\345\233\276\345\275\242\347\264\257\350\256\241\346\225\260:", 0, QApplication::UnicodeUTF8));
        adjustment->setText(QApplication::translate("Systemset", "\346\240\241\345\207\206", 0, QApplication::UnicodeUTF8));
        dataset->setText(QApplication::translate("Systemset", "\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        ligntopen->setText(QApplication::translate("Systemset", "\344\272\256\345\272\246", 0, QApplication::UnicodeUTF8));
        screenprotect->setText(QApplication::translate("Systemset", "\345\261\217\344\277\235", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("Systemset", "\344\270\255\346\226\207", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("Systemset", "\350\213\261\346\226\207", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("Systemset", "\346\223\215\344\275\234\345\221\230", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("Systemset", "\347\256\241\347\220\206\345\221\230", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("Systemset", "\345\210\266\351\200\240\345\225\206", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Systemset: public Ui_Systemset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMSET_H
