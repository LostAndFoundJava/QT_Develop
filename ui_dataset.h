/********************************************************************************
** Form generated from reading UI file 'dataset.ui'
**
** Created: Sat Apr 8 22:29:47 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASET_H
#define UI_DATASET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dataset
{
public:
    QLabel *label;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QPushButton *save;
    QPushButton *cancel;

    void setupUi(QWidget *dataset)
    {
        if (dataset->objectName().isEmpty())
            dataset->setObjectName(QString::fromUtf8("dataset"));
        dataset->resize(457, 330);
        label = new QLabel(dataset);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 80, 71, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(dataset);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 130, 71, 31));
        label_2->setFont(font);
        dateEdit = new QDateEdit(dataset);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(160, 80, 191, 31));
        dateEdit->setFont(font);
        dateEdit->setStyleSheet(QString::fromUtf8("background-color:#D4E6CA;\n"
"border-radius:3px;"));
        timeEdit = new QTimeEdit(dataset);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(160, 130, 191, 31));
        timeEdit->setFont(font);
        timeEdit->setStyleSheet(QString::fromUtf8("background-color:#D4E6CA;\n"
"border-radius:3px;"));
        save = new QPushButton(dataset);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(100, 230, 75, 23));
        save->setFont(font);
        save->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        cancel = new QPushButton(dataset);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(290, 230, 75, 23));
        cancel->setFont(font);
        cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));

        retranslateUi(dataset);

        QMetaObject::connectSlotsByName(dataset);
    } // setupUi

    void retranslateUi(QWidget *dataset)
    {
        dataset->setWindowTitle(QApplication::translate("dataset", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dataset", "\346\227\245\346\234\237\350\256\276\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dataset", "\346\227\266\351\227\264\350\256\276\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        save->setText(QApplication::translate("dataset", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("dataset", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dataset: public Ui_dataset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASET_H
