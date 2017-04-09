/********************************************************************************
** Form generated from reading UI file 'learn.ui'
**
** Created: Sat Apr 8 23:12:01 2017
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARN_H
#define UI_LEARN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_learn
{
public:
    QLabel *LearnLabel;
    QLabel *SpeedDisLabel;
    QLabel *DateTime;
    QPushButton *Jur_And_User;
    QLabel *ProNum;
    QLabel *ProName;
    QProgressBar *progressBar;
    QLabel *LearnProgress;
    QWidget *widget;
    QPushButton *StartBtn;
    QPushButton *FinishBtn;
    QPushButton *Sensitivity;
    QPushButton *Phase;
    QPushButton *ModelBtn;

    void setupUi(QWidget *learn)
    {
        if (learn->objectName().isEmpty())
            learn->setObjectName(QString::fromUtf8("learn"));
        learn->resize(751, 426);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        learn->setFont(font);
        learn->setStyleSheet(QString::fromUtf8(""));
        LearnLabel = new QLabel(learn);
        LearnLabel->setObjectName(QString::fromUtf8("LearnLabel"));
        LearnLabel->setGeometry(QRect(10, 10, 81, 21));
        LearnLabel->setFont(font);
        LearnLabel->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        SpeedDisLabel = new QLabel(learn);
        SpeedDisLabel->setObjectName(QString::fromUtf8("SpeedDisLabel"));
        SpeedDisLabel->setGeometry(QRect(130, 10, 141, 21));
        SpeedDisLabel->setFont(font);
        SpeedDisLabel->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        DateTime = new QLabel(learn);
        DateTime->setObjectName(QString::fromUtf8("DateTime"));
        DateTime->setGeometry(QRect(574, 10, 176, 31));
        DateTime->setFont(font);
        DateTime->setStyleSheet(QString::fromUtf8("Jur_And_User"));
        Jur_And_User = new QPushButton(learn);
        Jur_And_User->setObjectName(QString::fromUtf8("Jur_And_User"));
        Jur_And_User->setGeometry(QRect(370, 10, 111, 31));
        Jur_And_User->setFont(font);
        Jur_And_User->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        ProNum = new QLabel(learn);
        ProNum->setObjectName(QString::fromUtf8("ProNum"));
        ProNum->setGeometry(QRect(30, 50, 61, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(11);
        ProNum->setFont(font1);
        ProName = new QLabel(learn);
        ProName->setObjectName(QString::fromUtf8("ProName"));
        ProName->setGeometry(QRect(150, 50, 71, 16));
        ProName->setFont(font1);
        progressBar = new QProgressBar(learn);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(370, 50, 361, 23));
        progressBar->setFont(font1);
        progressBar->setValue(24);
        LearnProgress = new QLabel(learn);
        LearnProgress->setObjectName(QString::fromUtf8("LearnProgress"));
        LearnProgress->setGeometry(QRect(300, 50, 61, 16));
        LearnProgress->setFont(font1);
        widget = new QWidget(learn);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 80, 731, 291));
        StartBtn = new QPushButton(learn);
        StartBtn->setObjectName(QString::fromUtf8("StartBtn"));
        StartBtn->setGeometry(QRect(40, 390, 81, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font2.setPointSize(12);
        StartBtn->setFont(font2);
        StartBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        FinishBtn = new QPushButton(learn);
        FinishBtn->setObjectName(QString::fromUtf8("FinishBtn"));
        FinishBtn->setGeometry(QRect(160, 390, 81, 31));
        FinishBtn->setFont(font2);
        FinishBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        Sensitivity = new QPushButton(learn);
        Sensitivity->setObjectName(QString::fromUtf8("Sensitivity"));
        Sensitivity->setGeometry(QRect(340, 390, 81, 31));
        Sensitivity->setFont(font2);
        Sensitivity->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        Phase = new QPushButton(learn);
        Phase->setObjectName(QString::fromUtf8("Phase"));
        Phase->setGeometry(QRect(460, 390, 81, 31));
        Phase->setFont(font2);
        Phase->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        ModelBtn = new QPushButton(learn);
        ModelBtn->setObjectName(QString::fromUtf8("ModelBtn"));
        ModelBtn->setGeometry(QRect(640, 390, 81, 31));
        ModelBtn->setFont(font2);
        ModelBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));

        retranslateUi(learn);

        QMetaObject::connectSlotsByName(learn);
    } // setupUi

    void retranslateUi(QWidget *learn)
    {
        learn->setWindowTitle(QApplication::translate("learn", "Form", 0, QApplication::UnicodeUTF8));
        LearnLabel->setText(QApplication::translate("learn", "\344\272\247\345\223\201\345\255\246\344\271\240", 0, QApplication::UnicodeUTF8));
        SpeedDisLabel->setText(QApplication::translate("learn", "\350\276\223\351\200\201\345\270\246\351\200\237\345\272\246\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        DateTime->setText(QApplication::translate("learn", "2017/02/01  13:28", 0, QApplication::UnicodeUTF8));
        Jur_And_User->setText(QApplication::translate("learn", "\346\235\203\351\231\220/\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        ProNum->setText(QApplication::translate("learn", "\344\272\247\345\223\201\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        ProName->setText(QApplication::translate("learn", "\344\272\247\345\223\201\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        LearnProgress->setText(QApplication::translate("learn", "\345\255\246\344\271\240\350\277\233\345\272\246", 0, QApplication::UnicodeUTF8));
        StartBtn->setText(QApplication::translate("learn", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        FinishBtn->setText(QApplication::translate("learn", "\345\256\214\346\210\220", 0, QApplication::UnicodeUTF8));
        Sensitivity->setText(QApplication::translate("learn", "\347\201\265\346\225\217\345\272\246", 0, QApplication::UnicodeUTF8));
        Phase->setText(QApplication::translate("learn", "\347\233\270\344\275\215", 0, QApplication::UnicodeUTF8));
        ModelBtn->setText(QApplication::translate("learn", "\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class learn: public Ui_learn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARN_H
