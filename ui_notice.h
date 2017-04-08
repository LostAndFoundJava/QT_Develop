/********************************************************************************
** Form generated from reading UI file 'notice.ui'
**
** Created: Sat Apr 8 22:29:47 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICE_H
#define UI_NOTICE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_notice
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *notice)
    {
        if (notice->objectName().isEmpty())
            notice->setObjectName(QString::fromUtf8("notice"));
        notice->resize(347, 240);
        label = new QLabel(notice);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 70, 151, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(notice);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 110, 221, 21));
        label_2->setFont(font);
        pushButton = new QPushButton(notice);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 170, 75, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(12);
        pushButton->setFont(font1);

        retranslateUi(notice);

        QMetaObject::connectSlotsByName(notice);
    } // setupUi

    void retranslateUi(QWidget *notice)
    {
        notice->setWindowTitle(QApplication::translate("notice", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("notice", "\344\277\241\346\201\257\346\234\252\345\241\253\345\206\231\345\256\214\346\225\264\357\274\214", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("notice", "\350\257\267\346\240\270\345\257\271\350\241\245\345\205\205\345\220\216\345\206\215\346\211\247\350\241\214\350\267\263\350\275\254", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("notice", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class notice: public Ui_notice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICE_H
