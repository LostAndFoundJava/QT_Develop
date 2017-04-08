/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Sat Apr 8 22:29:47 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *pushButton;
    QLabel *label_21;
    QLabel *label_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(731, 286);
        Widget->setStyleSheet(QString::fromUtf8(""));
        horizontalSlider = new QSlider(Widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(540, 70, 160, 29));
        horizontalSlider->setStyleSheet(QString::fromUtf8(""));
        horizontalSlider->setMinimum(-89);
        horizontalSlider->setMaximum(89);
        horizontalSlider->setSingleStep(1);
        horizontalSlider->setSliderPosition(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(510, 70, 21, 20));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(710, 70, 21, 17));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(520, 90, 101, 20));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 60, 71, 17));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(100, 60, 40, 21));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(139, 26, 26);"));
        label_14 = new QLabel(Widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 220, 31, 17));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(10);
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_15 = new QLabel(Widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(70, 220, 16, 16));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(139, 26, 26);"));
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 100, 71, 17));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_9 = new QLabel(Widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(100, 100, 40, 21));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(139, 26, 26);"));
        label_10 = new QLabel(Widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 130, 71, 17));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(100, 130, 40, 21));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(139, 26, 26);"));
        label_12 = new QLabel(Widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 160, 71, 17));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_13 = new QLabel(Widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(99, 160, 40, 21));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(139, 26, 26);"));
        label_16 = new QLabel(Widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(160, 60, 40, 21));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(139, 26, 26);"));
        label_17 = new QLabel(Widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(160, 100, 40, 21));
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(139, 26, 26);"));
        label_18 = new QLabel(Widget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(160, 130, 40, 21));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(139, 26, 26);"));
        label_19 = new QLabel(Widget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(160, 160, 40, 21));
        label_19->setFont(font);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(139, 26, 26);"));
        label_20 = new QLabel(Widget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 20, 91, 17));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(15);
        label_20->setFont(font2);
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(580, 180, 98, 27));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        label_21 = new QLabel(Widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 190, 91, 17));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(14);
        label_21->setFont(font3);
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(640, 90, 81, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "-90", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "90", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "current value:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Widget", "Coordinate1:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Widget", "(-100)", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Widget", "angle:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Widget", "0", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Widget", "Coordinate2:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Widget", "(-100,100)", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Widget", "Coordinate3:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Widget", "(-100,100)", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Widget", "Coordinate4:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Widget", "(-100,100)", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("Widget", "(-100,100)", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Widget", "(-100,100)", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Widget", "(-100,100)", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("Widget", "(-100,100)", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("Widget", "\345\235\220\346\240\207", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\346\243\200\346\265\213\347\202\271", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Widget", "\347\233\270\344\275\215", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "current value:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
