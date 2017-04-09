/********************************************************************************
** Form generated from reading UI file 'varify.ui'
**
** Created: Sat Apr 8 23:12:01 2017
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VARIFY_H
#define UI_VARIFY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_varify
{
public:
    QPushButton *Jur_And_User;
    QLabel *ProNum;
    QLabel *ProName;
    QLabel *TestNum;
    QLabel *PassNum;
    QPushButton *SetZero;
    QPushButton *VarfityButton;
    QPushButton *DropOut;
    QPushButton *Sensitivity;
    QPushButton *Phase;
    QPushButton *ModelBtn;
    QLabel *LearnVarify;
    QLabel *SpeedDisLabel;
    QLabel *DateTime;
    QLabel *NoPassNum;
    QWidget *widget;

    void setupUi(QWidget *varify)
    {
        if (varify->objectName().isEmpty())
            varify->setObjectName(QString::fromUtf8("varify"));
        varify->resize(751, 426);
        Jur_And_User = new QPushButton(varify);
        Jur_And_User->setObjectName(QString::fromUtf8("Jur_And_User"));
        Jur_And_User->setGeometry(QRect(380, 10, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(12);
        Jur_And_User->setFont(font);
        Jur_And_User->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        ProNum = new QLabel(varify);
        ProNum->setObjectName(QString::fromUtf8("ProNum"));
        ProNum->setGeometry(QRect(30, 60, 66, 16));
        ProNum->setFont(font);
        ProName = new QLabel(varify);
        ProName->setObjectName(QString::fromUtf8("ProName"));
        ProName->setGeometry(QRect(130, 60, 71, 16));
        ProName->setFont(font);
        TestNum = new QLabel(varify);
        TestNum->setObjectName(QString::fromUtf8("TestNum"));
        TestNum->setGeometry(QRect(250, 60, 71, 16));
        TestNum->setFont(font);
        PassNum = new QLabel(varify);
        PassNum->setObjectName(QString::fromUtf8("PassNum"));
        PassNum->setGeometry(QRect(370, 60, 71, 16));
        PassNum->setFont(font);
        SetZero = new QPushButton(varify);
        SetZero->setObjectName(QString::fromUtf8("SetZero"));
        SetZero->setGeometry(QRect(640, 55, 75, 23));
        SetZero->setFont(font);
        SetZero->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        VarfityButton = new QPushButton(varify);
        VarfityButton->setObjectName(QString::fromUtf8("VarfityButton"));
        VarfityButton->setGeometry(QRect(22, 390, 81, 31));
        VarfityButton->setFont(font);
        VarfityButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        DropOut = new QPushButton(varify);
        DropOut->setObjectName(QString::fromUtf8("DropOut"));
        DropOut->setGeometry(QRect(156, 390, 81, 31));
        DropOut->setFont(font);
        DropOut->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        Sensitivity = new QPushButton(varify);
        Sensitivity->setObjectName(QString::fromUtf8("Sensitivity"));
        Sensitivity->setGeometry(QRect(374, 390, 81, 31));
        Sensitivity->setFont(font);
        Sensitivity->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        Phase = new QPushButton(varify);
        Phase->setObjectName(QString::fromUtf8("Phase"));
        Phase->setGeometry(QRect(524, 390, 81, 31));
        Phase->setFont(font);
        Phase->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        ModelBtn = new QPushButton(varify);
        ModelBtn->setObjectName(QString::fromUtf8("ModelBtn"));
        ModelBtn->setGeometry(QRect(650, 390, 81, 31));
        ModelBtn->setFont(font);
        ModelBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        LearnVarify = new QLabel(varify);
        LearnVarify->setObjectName(QString::fromUtf8("LearnVarify"));
        LearnVarify->setGeometry(QRect(10, 10, 81, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        LearnVarify->setFont(font1);
        SpeedDisLabel = new QLabel(varify);
        SpeedDisLabel->setObjectName(QString::fromUtf8("SpeedDisLabel"));
        SpeedDisLabel->setGeometry(QRect(110, 10, 141, 31));
        SpeedDisLabel->setFont(font1);
        DateTime = new QLabel(varify);
        DateTime->setObjectName(QString::fromUtf8("DateTime"));
        DateTime->setGeometry(QRect(574, 10, 176, 31));
        DateTime->setFont(font1);
        NoPassNum = new QLabel(varify);
        NoPassNum->setObjectName(QString::fromUtf8("NoPassNum"));
        NoPassNum->setGeometry(QRect(500, 60, 91, 16));
        NoPassNum->setFont(font);
        widget = new QWidget(varify);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 90, 731, 291));

        retranslateUi(varify);

        QMetaObject::connectSlotsByName(varify);
    } // setupUi

    void retranslateUi(QWidget *varify)
    {
        varify->setWindowTitle(QApplication::translate("varify", "Form", 0, QApplication::UnicodeUTF8));
        Jur_And_User->setText(QApplication::translate("varify", "\346\235\203\351\231\220/\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        ProNum->setText(QApplication::translate("varify", "\344\272\247\345\223\201\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        ProName->setText(QApplication::translate("varify", "\344\272\247\345\223\201\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        TestNum->setText(QApplication::translate("varify", "\346\243\200\346\265\213\346\225\260100", 0, QApplication::UnicodeUTF8));
        PassNum->setText(QApplication::translate("varify", "\351\200\232\350\277\207\346\225\260100", 0, QApplication::UnicodeUTF8));
        SetZero->setText(QApplication::translate("varify", "\346\270\205\351\233\266", 0, QApplication::UnicodeUTF8));
        VarfityButton->setText(QApplication::translate("varify", "\345\255\246\344\271\240\351\252\214\350\257\201", 0, QApplication::UnicodeUTF8));
        DropOut->setText(QApplication::translate("varify", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        Sensitivity->setText(QApplication::translate("varify", "\347\201\265\346\225\217\345\272\246", 0, QApplication::UnicodeUTF8));
        Phase->setText(QApplication::translate("varify", "\347\233\270\344\275\215", 0, QApplication::UnicodeUTF8));
        ModelBtn->setText(QApplication::translate("varify", "\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        LearnVarify->setText(QApplication::translate("varify", "\345\255\246\344\271\240\351\252\214\350\257\201", 0, QApplication::UnicodeUTF8));
        SpeedDisLabel->setText(QApplication::translate("varify", "\350\276\223\351\200\201\345\270\246\351\200\237\345\272\246\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        DateTime->setText(QApplication::translate("varify", "2017/3/26  18\357\274\23248", 0, QApplication::UnicodeUTF8));
        NoPassNum->setText(QApplication::translate("varify", "\346\234\252\351\200\232\350\277\207\346\225\260100", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class varify: public Ui_varify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VARIFY_H
