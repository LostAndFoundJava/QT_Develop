/********************************************************************************
** Form generated from reading UI file 'log.ui'
**
** Created: Sat Apr 8 22:29:47 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_H
#define UI_LOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Log
{
public:
    QPushButton *Jur_And_User;
    QLabel *DateTime;
    QLabel *DisLabel;
    QPushButton *LoadLog_2;
    QPushButton *NGButton;
    QPushButton *USBOuput;
    QPushButton *Return;
    QStackedWidget *Stack;
    QWidget *LoadLog;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QWidget *NGLog;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLineEdit *lineEdit;
    QLabel *TestNum;
    QLabel *Number;
    QLabel *EndTime;
    QLabel *Name;
    QLabel *label_15;
    QLabel *StartTime;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *Proportion;
    QLineEdit *lineEdit_3;
    QLabel *label_12;
    QTableWidget *tableWidget_2;

    void setupUi(QWidget *Log)
    {
        if (Log->objectName().isEmpty())
            Log->setObjectName(QString::fromUtf8("Log"));
        Log->resize(751, 420);
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
        Log->setPalette(palette);
        Log->setAutoFillBackground(true);
        Jur_And_User = new QPushButton(Log);
        Jur_And_User->setObjectName(QString::fromUtf8("Jur_And_User"));
        Jur_And_User->setGeometry(QRect(330, 10, 91, 21));
        DateTime = new QLabel(Log);
        DateTime->setObjectName(QString::fromUtf8("DateTime"));
        DateTime->setGeometry(QRect(570, 10, 161, 20));
        DateTime->setFrameShape(QFrame::Box);
        DisLabel = new QLabel(Log);
        DisLabel->setObjectName(QString::fromUtf8("DisLabel"));
        DisLabel->setGeometry(QRect(20, 10, 71, 16));
        DisLabel->setFrameShape(QFrame::Box);
        LoadLog_2 = new QPushButton(Log);
        LoadLog_2->setObjectName(QString::fromUtf8("LoadLog_2"));
        LoadLog_2->setGeometry(QRect(20, 380, 75, 23));
        NGButton = new QPushButton(Log);
        NGButton->setObjectName(QString::fromUtf8("NGButton"));
        NGButton->setGeometry(QRect(100, 380, 75, 23));
        USBOuput = new QPushButton(Log);
        USBOuput->setObjectName(QString::fromUtf8("USBOuput"));
        USBOuput->setGeometry(QRect(530, 380, 75, 23));
        Return = new QPushButton(Log);
        Return->setObjectName(QString::fromUtf8("Return"));
        Return->setGeometry(QRect(620, 380, 75, 23));
        Stack = new QStackedWidget(Log);
        Stack->setObjectName(QString::fromUtf8("Stack"));
        Stack->setGeometry(QRect(8, 30, 731, 341));
        Stack->setAutoFillBackground(true);
        LoadLog = new QWidget();
        LoadLog->setObjectName(QString::fromUtf8("LoadLog"));
        gridLayoutWidget = new QWidget(LoadLog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 731, 341));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(gridLayoutWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMinimumSize(QSize(729, 339));
        tableWidget->setDragEnabled(false);
        tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(21);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(21);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        Stack->addWidget(LoadLog);
        NGLog = new QWidget();
        NGLog->setObjectName(QString::fromUtf8("NGLog"));
        gridLayoutWidget_2 = new QWidget(NGLog);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(9, 9, 351, 331));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 5, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        TestNum = new QLabel(gridLayoutWidget_2);
        TestNum->setObjectName(QString::fromUtf8("TestNum"));

        gridLayout_2->addWidget(TestNum, 3, 0, 1, 1);

        Number = new QLabel(gridLayoutWidget_2);
        Number->setObjectName(QString::fromUtf8("Number"));

        gridLayout_2->addWidget(Number, 0, 0, 1, 1);

        EndTime = new QLabel(gridLayoutWidget_2);
        EndTime->setObjectName(QString::fromUtf8("EndTime"));

        gridLayout_2->addWidget(EndTime, 2, 0, 1, 1);

        Name = new QLabel(gridLayoutWidget_2);
        Name->setObjectName(QString::fromUtf8("Name"));

        gridLayout_2->addWidget(Name, 0, 2, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 3, 2, 1, 1);

        StartTime = new QLabel(gridLayoutWidget_2);
        StartTime->setObjectName(QString::fromUtf8("StartTime"));

        gridLayout_2->addWidget(StartTime, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout_2->addWidget(lineEdit_4, 3, 3, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 0, 3, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 2, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 1, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout_2->addWidget(lineEdit_5, 4, 1, 1, 1);

        Proportion = new QLabel(gridLayoutWidget_2);
        Proportion->setObjectName(QString::fromUtf8("Proportion"));

        gridLayout_2->addWidget(Proportion, 4, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_2->addWidget(lineEdit_3, 3, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 5, 1, 1, 1);

        tableWidget_2 = new QTableWidget(NGLog);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        if (tableWidget_2->rowCount() < 6)
            tableWidget_2->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(5, __qtablewidgetitem18);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(370, 10, 361, 331));
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(10);
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setMinimumSectionSize(10);
        Stack->addWidget(NGLog);

        retranslateUi(Log);

        Stack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Log);
    } // setupUi

    void retranslateUi(QWidget *Log)
    {
        Log->setWindowTitle(QApplication::translate("Log", "Form", 0, QApplication::UnicodeUTF8));
        Jur_And_User->setText(QApplication::translate("Log", "\346\235\203\351\231\220/\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        DateTime->setText(QApplication::translate("Log", "2017\345\271\26402\346\234\21001\346\227\245\346\230\237\346\234\237\346\227\245 13:28", 0, QApplication::UnicodeUTF8));
        DisLabel->setText(QApplication::translate("Log", "\347\231\273\351\231\206\346\227\245\345\277\227", 0, QApplication::UnicodeUTF8));
        LoadLog_2->setText(QApplication::translate("Log", "\347\231\273\351\231\206\346\227\245\345\277\227", 0, QApplication::UnicodeUTF8));
        NGButton->setText(QApplication::translate("Log", "NG\346\227\245\345\277\227", 0, QApplication::UnicodeUTF8));
        USBOuput->setText(QApplication::translate("Log", "USB\350\276\223\345\207\272", 0, QApplication::UnicodeUTF8));
        Return->setText(QApplication::translate("Log", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Log", "\345\271\264/\346\234\210/\346\227\245/\346\227\266/\345\210\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Log", "\346\223\215\344\275\234\344\272\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("Log", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("Log", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("Log", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("Log", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("Log", "5", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        TestNum->setText(QApplication::translate("Log", "\346\243\200\346\265\213\346\225\260:", 0, QApplication::UnicodeUTF8));
        Number->setText(QApplication::translate("Log", "\344\272\247\345\223\201\347\274\226\345\217\267:", 0, QApplication::UnicodeUTF8));
        EndTime->setText(QApplication::translate("Log", "\346\227\245\345\277\227\347\273\223\346\235\237\346\227\266\351\227\264:", 0, QApplication::UnicodeUTF8));
        Name->setText(QApplication::translate("Log", "\344\272\247\345\223\201\345\220\215\347\247\260:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Log", "NG\346\225\260:", 0, QApplication::UnicodeUTF8));
        StartTime->setText(QApplication::translate("Log", "\346\227\245\345\277\227\345\274\200\345\247\213\346\227\266\351\227\264:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Log", "2017.1.19", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Log", "2017.1.19", 0, QApplication::UnicodeUTF8));
        Proportion->setText(QApplication::translate("Log", "NG\346\225\260\345\215\240\346\257\224\346\243\200\346\265\213\346\225\260\346\257\224\344\276\213:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QString());
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("Log", "\345\272\217\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("Log", "\344\272\247\345\223\201\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("Log", "\344\272\247\345\223\201\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("Log", "NG\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("Log", "\344\277\241\345\217\267\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("Log", "\346\223\215\344\275\234\344\272\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("Log", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem14->setText(QApplication::translate("Log", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem15->setText(QApplication::translate("Log", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->verticalHeaderItem(3);
        ___qtablewidgetitem16->setText(QApplication::translate("Log", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->verticalHeaderItem(4);
        ___qtablewidgetitem17->setText(QApplication::translate("Log", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_2->verticalHeaderItem(5);
        ___qtablewidgetitem18->setText(QApplication::translate("Log", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Log: public Ui_Log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_H
