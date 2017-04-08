/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Apr 8 18:49:24 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *TestNum;
    QLabel *PassNum;
    QLabel *NoPassNum;
    QLabel *speed;
    QPushButton *SetZero;
    QPushButton *Management;
    QPushButton *Sensitivity;
    QPushButton *Phase;
    QPushButton *Log;
    QPushButton *System_set;
    QLabel *DateTime;
    QLabel *SpeedDisLabel;
    QLabel *Detect;
    QLabel *ProNum;
    QLabel *ProName;
    QPushButton *Jur_And_User;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(751, 426);
        QPalette palette;
        QBrush brush(QColor(212, 230, 202, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        centralWidget->setPalette(palette1);
        TestNum = new QLabel(centralWidget);
        TestNum->setObjectName(QString::fromUtf8("TestNum"));
        TestNum->setGeometry(QRect(230, 60, 71, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(11);
        TestNum->setFont(font);
        PassNum = new QLabel(centralWidget);
        PassNum->setObjectName(QString::fromUtf8("PassNum"));
        PassNum->setGeometry(QRect(330, 60, 71, 16));
        PassNum->setFont(font);
        PassNum->setStyleSheet(QString::fromUtf8("border-right-color: rgb(0, 0, 0);"));
        NoPassNum = new QLabel(centralWidget);
        NoPassNum->setObjectName(QString::fromUtf8("NoPassNum"));
        NoPassNum->setGeometry(QRect(420, 60, 91, 16));
        NoPassNum->setFont(font);
        speed = new QLabel(centralWidget);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(520, 60, 131, 16));
        speed->setFont(font);
        SetZero = new QPushButton(centralWidget);
        SetZero->setObjectName(QString::fromUtf8("SetZero"));
        SetZero->setGeometry(QRect(660, 55, 75, 23));
        SetZero->setFont(font);
        SetZero->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        Management = new QPushButton(centralWidget);
        Management->setObjectName(QString::fromUtf8("Management"));
        Management->setGeometry(QRect(22, 390, 91, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(12);
        Management->setFont(font1);
        Management->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        Sensitivity = new QPushButton(centralWidget);
        Sensitivity->setObjectName(QString::fromUtf8("Sensitivity"));
        Sensitivity->setGeometry(QRect(200, 390, 81, 31));
        Sensitivity->setFont(font1);
        Sensitivity->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        Phase = new QPushButton(centralWidget);
        Phase->setObjectName(QString::fromUtf8("Phase"));
        Phase->setGeometry(QRect(346, 390, 81, 31));
        Phase->setFont(font1);
        Phase->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        Log = new QPushButton(centralWidget);
        Log->setObjectName(QString::fromUtf8("Log"));
        Log->setGeometry(QRect(504, 390, 81, 31));
        Log->setFont(font1);
        Log->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        System_set = new QPushButton(centralWidget);
        System_set->setObjectName(QString::fromUtf8("System_set"));
        System_set->setGeometry(QRect(640, 390, 91, 31));
        System_set->setFont(font1);
        System_set->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        DateTime = new QLabel(centralWidget);
        DateTime->setObjectName(QString::fromUtf8("DateTime"));
        DateTime->setGeometry(QRect(567, 10, 179, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        DateTime->setFont(font2);
        DateTime->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        DateTime->setFrameShape(QFrame::NoFrame);
        SpeedDisLabel = new QLabel(centralWidget);
        SpeedDisLabel->setObjectName(QString::fromUtf8("SpeedDisLabel"));
        SpeedDisLabel->setGeometry(QRect(110, 10, 141, 31));
        SpeedDisLabel->setFont(font2);
        SpeedDisLabel->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        Detect = new QLabel(centralWidget);
        Detect->setObjectName(QString::fromUtf8("Detect"));
        Detect->setGeometry(QRect(10, 10, 81, 31));
        Detect->setFont(font2);
        Detect->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        ProNum = new QLabel(centralWidget);
        ProNum->setObjectName(QString::fromUtf8("ProNum"));
        ProNum->setGeometry(QRect(30, 60, 61, 16));
        ProNum->setFont(font);
        ProName = new QLabel(centralWidget);
        ProName->setObjectName(QString::fromUtf8("ProName"));
        ProName->setGeometry(QRect(130, 60, 71, 16));
        ProName->setFont(font);
        Jur_And_User = new QPushButton(centralWidget);
        Jur_And_User->setObjectName(QString::fromUtf8("Jur_And_User"));
        Jur_And_User->setGeometry(QRect(380, 10, 101, 31));
        Jur_And_User->setFont(font1);
        Jur_And_User->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        TestNum->setText(QApplication::translate("MainWindow", "\346\243\200\346\265\213\346\225\260100", 0, QApplication::UnicodeUTF8));
        PassNum->setText(QApplication::translate("MainWindow", "\351\200\232\350\277\207\346\225\260100", 0, QApplication::UnicodeUTF8));
        NoPassNum->setText(QApplication::translate("MainWindow", "\346\234\252\351\200\232\350\277\207\346\225\260100", 0, QApplication::UnicodeUTF8));
        speed->setText(QApplication::translate("MainWindow", "\347\232\256\345\270\246\351\200\237\345\272\246\346\230\276\347\244\2722m/s", 0, QApplication::UnicodeUTF8));
        SetZero->setText(QApplication::translate("MainWindow", "\350\256\241\346\225\260\346\270\205\351\233\266", 0, QApplication::UnicodeUTF8));
        Management->setText(QApplication::translate("MainWindow", "\344\272\247\345\223\201\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        Sensitivity->setText(QApplication::translate("MainWindow", "\347\201\265\346\225\217\345\272\246", 0, QApplication::UnicodeUTF8));
        Phase->setText(QApplication::translate("MainWindow", "\347\233\270\344\275\215", 0, QApplication::UnicodeUTF8));
        Log->setText(QApplication::translate("MainWindow", "\346\227\245\345\277\227", 0, QApplication::UnicodeUTF8));
        System_set->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        DateTime->setText(QApplication::translate("MainWindow", "2017/02/01  13:28", 0, QApplication::UnicodeUTF8));
        SpeedDisLabel->setText(QApplication::translate("MainWindow", "\350\276\223\351\200\201\345\270\246\351\200\237\345\272\246\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        Detect->setText(QApplication::translate("MainWindow", "\345\256\236\346\227\266\346\243\200\346\265\213", 0, QApplication::UnicodeUTF8));
        ProNum->setText(QApplication::translate("MainWindow", "\344\272\247\345\223\201\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        ProName->setText(QApplication::translate("MainWindow", "\344\272\247\345\223\201\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        Jur_And_User->setText(QApplication::translate("MainWindow", "\346\235\203\351\231\220/\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
