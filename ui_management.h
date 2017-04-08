/********************************************************************************
** Form generated from reading UI file 'management.ui'
**
** Created: Sat Apr 8 18:49:24 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMENT_H
#define UI_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Management
{
public:
    QLabel *DateTime;
    QLabel *ManaLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QRadioButton *packButton;
    QRadioButton *bulkButton;
    QRadioButton *AluminizerButton;
    QLabel *label_27;
    QLabel *label_28;
    QLineEdit *NumEdit;
    QLineEdit *NameEdit;
    QLineEdit *SpeedEdit;
    QLineEdit *LengthEdit;
    QWidget *tab2;
    QLabel *label_11;
    QLabel *label_12;
    QRadioButton *radioButton;
    QPushButton *PositiveTest;
    QPushButton *NagtiveTest;
    QLineEdit *LightTime;
    QLabel *label_13;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *LearningButton;
    QSlider *Slider1;
    QSlider *Slider2;
    QSlider *Slider3;
    QWidget *tab3;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *RmoveTime;
    QLabel *label_21;
    QLineEdit *RmoveKeep;
    QLabel *label_22;
    QLineEdit *StopTime;
    QLineEdit *StartTime;
    QLineEdit *BackTime;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QCheckBox *OddRmove;
    QCheckBox *AutoStart;
    QLabel *label_19;
    QPushButton *RemoveTest;
    QPushButton *FinishButton;
    QPushButton *RemovedButton;
    QPushButton *StopButton;
    QPushButton *BackButton;
    QRadioButton *Light;
    QLabel *line_1;
    QLabel *line_2;
    QLabel *red;
    QLabel *green;
    QTableWidget *tableWidget;
    QLabel *SpeedDisLabel;

    void setupUi(QWidget *Management)
    {
        if (Management->objectName().isEmpty())
            Management->setObjectName(QString::fromUtf8("Management"));
        Management->resize(751, 426);
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
        Management->setPalette(palette);
        Management->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 230, 202);"));
        DateTime = new QLabel(Management);
        DateTime->setObjectName(QString::fromUtf8("DateTime"));
        DateTime->setGeometry(QRect(574, 10, 176, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        DateTime->setFont(font);
        DateTime->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        DateTime->setFrameShape(QFrame::NoFrame);
        ManaLabel = new QLabel(Management);
        ManaLabel->setObjectName(QString::fromUtf8("ManaLabel"));
        ManaLabel->setEnabled(true);
        ManaLabel->setGeometry(QRect(20, 10, 101, 31));
        ManaLabel->setFont(font);
        ManaLabel->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        ManaLabel->setFrameShape(QFrame::NoFrame);
        ManaLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        gridLayoutWidget = new QWidget(Management);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 50, 741, 381));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(gridLayoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(245, 0, 501, 379));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(12);
        tabWidget->setFont(font1);
        tabWidget->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);\n"
"background-color: rgb(212, 230, 202);"));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        label = new QLabel(tab1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 25, 81, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        label_2 = new QLabel(tab1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 110, 81, 16));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        label_3 = new QLabel(tab1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 210, 111, 16));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        label_4 = new QLabel(tab1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 66, 71, 21));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        label_5 = new QLabel(tab1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(75, 150, 91, 21));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        packButton = new QRadioButton(tab1);
        packButton->setObjectName(QString::fromUtf8("packButton"));
        packButton->setEnabled(true);
        packButton->setGeometry(QRect(210, 210, 71, 23));
        packButton->setFont(font2);
        bulkButton = new QRadioButton(tab1);
        bulkButton->setObjectName(QString::fromUtf8("bulkButton"));
        bulkButton->setGeometry(QRect(310, 210, 61, 23));
        bulkButton->setFont(font2);
        bulkButton->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        AluminizerButton = new QRadioButton(tab1);
        AluminizerButton->setObjectName(QString::fromUtf8("AluminizerButton"));
        AluminizerButton->setEnabled(true);
        AluminizerButton->setGeometry(QRect(210, 260, 81, 21));
        AluminizerButton->setFont(font2);
        AluminizerButton->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        label_27 = new QLabel(tab1);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(350, 110, 21, 20));
        QFont font3;
        font3.setPointSize(12);
        label_27->setFont(font3);
        label_28 = new QLabel(tab1);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(340, 150, 51, 20));
        label_28->setFont(font3);
        NumEdit = new QLineEdit(tab1);
        NumEdit->setObjectName(QString::fromUtf8("NumEdit"));
        NumEdit->setEnabled(true);
        NumEdit->setGeometry(QRect(180, 24, 151, 20));
        NumEdit->setFocusPolicy(Qt::StrongFocus);
        NumEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #000;\n"
"background-color: rgb(212, 230, 202);"));
        NameEdit = new QLineEdit(tab1);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));
        NameEdit->setEnabled(true);
        NameEdit->setGeometry(QRect(180, 66, 151, 20));
        NameEdit->setFocusPolicy(Qt::StrongFocus);
        NameEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #000;\n"
"background-color: rgb(212, 230, 202);"));
        SpeedEdit = new QLineEdit(tab1);
        SpeedEdit->setObjectName(QString::fromUtf8("SpeedEdit"));
        SpeedEdit->setEnabled(true);
        SpeedEdit->setGeometry(QRect(180, 150, 151, 20));
        SpeedEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #000;\n"
"background-color: rgb(212, 230, 202);"));
        LengthEdit = new QLineEdit(tab1);
        LengthEdit->setObjectName(QString::fromUtf8("LengthEdit"));
        LengthEdit->setEnabled(true);
        LengthEdit->setGeometry(QRect(180, 110, 151, 20));
        LengthEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #000;\n"
"background-color: rgb(212, 230, 202);"));
        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        label_11 = new QLabel(tab2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(60, 200, 81, 16));
        label_11->setFont(font2);
        label_12 = new QLabel(tab2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(80, 240, 171, 16));
        label_12->setFont(font2);
        radioButton = new QRadioButton(tab2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(60, 280, 141, 16));
        radioButton->setFont(font2);
        PositiveTest = new QPushButton(tab2);
        PositiveTest->setObjectName(QString::fromUtf8("PositiveTest"));
        PositiveTest->setGeometry(QRect(140, 170, 75, 23));
        PositiveTest->setFont(font2);
        PositiveTest->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        NagtiveTest = new QPushButton(tab2);
        NagtiveTest->setObjectName(QString::fromUtf8("NagtiveTest"));
        NagtiveTest->setGeometry(QRect(280, 170, 75, 23));
        NagtiveTest->setFont(font2);
        NagtiveTest->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        LightTime = new QLineEdit(tab2);
        LightTime->setObjectName(QString::fromUtf8("LightTime"));
        LightTime->setGeometry(QRect(250, 240, 101, 20));
        LightTime->setFont(font2);
        LightTime->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #000;\n"
"background-color: rgb(212, 230, 202);"));
        label_13 = new QLabel(tab2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(360, 240, 31, 16));
        label_13->setFont(font2);
        label_6 = new QLabel(tab2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 20, 111, 16));
        label_6->setFont(font2);
        label_7 = new QLabel(tab2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 50, 81, 16));
        label_7->setFont(font2);
        label_8 = new QLabel(tab2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 80, 81, 16));
        label_8->setFont(font2);
        label_9 = new QLabel(tab2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(70, 110, 71, 16));
        label_9->setFont(font2);
        label_10 = new QLabel(tab2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(50, 140, 91, 16));
        label_10->setFont(font2);
        LearningButton = new QPushButton(tab2);
        LearningButton->setObjectName(QString::fromUtf8("LearningButton"));
        LearningButton->setGeometry(QRect(180, 312, 75, 23));
        LearningButton->setFont(font2);
        LearningButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        Slider1 = new QSlider(tab2);
        Slider1->setObjectName(QString::fromUtf8("Slider1"));
        Slider1->setGeometry(QRect(160, 50, 160, 16));
        Slider1->setOrientation(Qt::Horizontal);
        Slider2 = new QSlider(tab2);
        Slider2->setObjectName(QString::fromUtf8("Slider2"));
        Slider2->setGeometry(QRect(160, 80, 160, 16));
        Slider2->setOrientation(Qt::Horizontal);
        Slider3 = new QSlider(tab2);
        Slider3->setObjectName(QString::fromUtf8("Slider3"));
        Slider3->setGeometry(QRect(160, 120, 160, 16));
        Slider3->setOrientation(Qt::Horizontal);
        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QString::fromUtf8("tab3"));
        label_16 = new QLabel(tab3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(250, 55, 81, 16));
        label_16->setFont(font2);
        label_17 = new QLabel(tab3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(80, 145, 71, 16));
        label_17->setFont(font2);
        RmoveTime = new QLineEdit(tab3);
        RmoveTime->setObjectName(QString::fromUtf8("RmoveTime"));
        RmoveTime->setGeometry(QRect(150, 55, 51, 20));
        RmoveTime->setFont(font2);
        RmoveTime->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #000;\n"
"background-color: rgb(212, 230, 202);"));
        label_21 = new QLabel(tab3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(210, 50, 21, 16));
        label_21->setFont(font2);
        RmoveKeep = new QLineEdit(tab3);
        RmoveKeep->setObjectName(QString::fromUtf8("RmoveKeep"));
        RmoveKeep->setGeometry(QRect(320, 55, 51, 20));
        RmoveKeep->setFont(font2);
        RmoveKeep->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #000;\n"
"background-color: rgb(212, 230, 202);"));
        label_22 = new QLabel(tab3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(380, 55, 21, 16));
        label_22->setFont(font2);
        StopTime = new QLineEdit(tab3);
        StopTime->setObjectName(QString::fromUtf8("StopTime"));
        StopTime->setGeometry(QRect(160, 145, 71, 20));
        StopTime->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #000;\n"
"background-color: rgb(212, 230, 202);"));
        StartTime = new QLineEdit(tab3);
        StartTime->setObjectName(QString::fromUtf8("StartTime"));
        StartTime->setGeometry(QRect(160, 185, 71, 20));
        StartTime->setFont(font2);
        StartTime->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #000;\n"
"background-color: rgb(212, 230, 202);"));
        BackTime = new QLineEdit(tab3);
        BackTime->setObjectName(QString::fromUtf8("BackTime"));
        BackTime->setGeometry(QRect(200, 255, 71, 20));
        BackTime->setFont(font2);
        BackTime->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom:1px solid #000;\n"
"background-color: rgb(212, 230, 202);"));
        label_23 = new QLabel(tab3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(240, 145, 16, 16));
        label_23->setFont(font2);
        label_24 = new QLabel(tab3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(240, 185, 21, 16));
        label_24->setFont(font2);
        label_25 = new QLabel(tab3);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(280, 255, 21, 16));
        label_25->setFont(font2);
        label_26 = new QLabel(tab3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(70, 55, 81, 16));
        label_26->setFont(font2);
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        OddRmove = new QCheckBox(tab3);
        OddRmove->setObjectName(QString::fromUtf8("OddRmove"));
        OddRmove->setGeometry(QRect(80, 85, 91, 16));
        OddRmove->setFont(font2);
        OddRmove->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        AutoStart = new QCheckBox(tab3);
        AutoStart->setObjectName(QString::fromUtf8("AutoStart"));
        AutoStart->setGeometry(QRect(80, 185, 71, 16));
        AutoStart->setFont(font2);
        label_19 = new QLabel(tab3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(130, 255, 81, 16));
        label_19->setFont(font2);
        RemoveTest = new QPushButton(tab3);
        RemoveTest->setObjectName(QString::fromUtf8("RemoveTest"));
        RemoveTest->setGeometry(QRect(90, 320, 75, 23));
        RemoveTest->setFont(font2);
        RemoveTest->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        FinishButton = new QPushButton(tab3);
        FinishButton->setObjectName(QString::fromUtf8("FinishButton"));
        FinishButton->setGeometry(QRect(290, 320, 75, 23));
        FinishButton->setFont(font2);
        FinishButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        RemovedButton = new QPushButton(tab3);
        RemovedButton->setObjectName(QString::fromUtf8("RemovedButton"));
        RemovedButton->setGeometry(QRect(50, 15, 75, 23));
        RemovedButton->setFont(font2);
        RemovedButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        StopButton = new QPushButton(tab3);
        StopButton->setObjectName(QString::fromUtf8("StopButton"));
        StopButton->setGeometry(QRect(50, 115, 75, 23));
        StopButton->setFont(font2);
        StopButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        BackButton = new QPushButton(tab3);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        BackButton->setGeometry(QRect(50, 215, 75, 23));
        BackButton->setFont(font2);
        BackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(83, 148, 160);\n"
"color: rgb(255, 250, 240);\n"
"border-radius:5px;"));
        Light = new QRadioButton(tab3);
        Light->setObjectName(QString::fromUtf8("Light"));
        Light->setGeometry(QRect(190, 285, 89, 17));
        Light->setFont(font2);
        line_1 = new QLabel(tab3);
        line_1->setObjectName(QString::fromUtf8("line_1"));
        line_1->setGeometry(QRect(10, 107, 461, 20));
        line_1->setStyleSheet(QString::fromUtf8("\n"
"border:1px dashed #fff;"));
        line_2 = new QLabel(tab3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 210, 461, 20));
        line_2->setStyleSheet(QString::fromUtf8("\n"
"border:1px dashed #fff;"));
        red = new QLabel(tab3);
        red->setObjectName(QString::fromUtf8("red"));
        red->setGeometry(QRect(140, 280, 31, 31));
        red->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/circle_red.png);"));
        green = new QLabel(tab3);
        green->setObjectName(QString::fromUtf8("green"));
        green->setGeometry(QRect(140, 280, 31, 31));
        green->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/circle_green.png);"));
        tabWidget->addTab(tab3, QString());
        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 9)
            tableWidget->setRowCount(9);
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
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 250, 379));
        tableWidget->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);\n"
"background-color: rgb(212, 230, 202);"));
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout->addWidget(widget, 0, 1, 1, 1);

        SpeedDisLabel = new QLabel(Management);
        SpeedDisLabel->setObjectName(QString::fromUtf8("SpeedDisLabel"));
        SpeedDisLabel->setGeometry(QRect(310, 10, 111, 31));
        SpeedDisLabel->setFont(font);
        SpeedDisLabel->setStyleSheet(QString::fromUtf8("color: rgb(33, 28, 23);"));
        QWidget::setTabOrder(packButton, bulkButton);
        QWidget::setTabOrder(bulkButton, AluminizerButton);
        QWidget::setTabOrder(AluminizerButton, NumEdit);
        QWidget::setTabOrder(NumEdit, NameEdit);
        QWidget::setTabOrder(NameEdit, SpeedEdit);
        QWidget::setTabOrder(SpeedEdit, LengthEdit);
        QWidget::setTabOrder(LengthEdit, radioButton);
        QWidget::setTabOrder(radioButton, PositiveTest);
        QWidget::setTabOrder(PositiveTest, NagtiveTest);
        QWidget::setTabOrder(NagtiveTest, LightTime);
        QWidget::setTabOrder(LightTime, LearningButton);
        QWidget::setTabOrder(LearningButton, RmoveTime);
        QWidget::setTabOrder(RmoveTime, RmoveKeep);
        QWidget::setTabOrder(RmoveKeep, StopTime);
        QWidget::setTabOrder(StopTime, StartTime);
        QWidget::setTabOrder(StartTime, BackTime);
        QWidget::setTabOrder(BackTime, OddRmove);
        QWidget::setTabOrder(OddRmove, AutoStart);
        QWidget::setTabOrder(AutoStart, RemoveTest);
        QWidget::setTabOrder(RemoveTest, FinishButton);
        QWidget::setTabOrder(FinishButton, RemovedButton);
        QWidget::setTabOrder(RemovedButton, StopButton);
        QWidget::setTabOrder(StopButton, BackButton);
        QWidget::setTabOrder(BackButton, Light);

        retranslateUi(Management);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Management);
    } // setupUi

    void retranslateUi(QWidget *Management)
    {
        Management->setWindowTitle(QApplication::translate("Management", "Form", 0, QApplication::UnicodeUTF8));
        DateTime->setText(QApplication::translate("Management", "2017/02/01  13:28", 0, QApplication::UnicodeUTF8));
        ManaLabel->setText(QApplication::translate("Management", "\344\272\247\345\223\201\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Management", "\344\272\247\345\223\201\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Management", "\344\272\247\345\223\201\351\225\277\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Management", "\345\214\205\350\243\205\346\226\271\345\274\217\351\200\211\346\213\251\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Management", "\344\272\247\345\223\201\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Management", "\350\276\223\351\200\201\345\270\246\351\200\237\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        packButton->setText(QApplication::translate("Management", "\345\214\205\350\243\205", 0, QApplication::UnicodeUTF8));
        bulkButton->setText(QApplication::translate("Management", "\346\225\243\350\243\205", 0, QApplication::UnicodeUTF8));
        AluminizerButton->setText(QApplication::translate("Management", "\351\225\200\351\223\235\350\206\234", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("Management", "mm", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("Management", "M/MIN", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("Management", "\345\237\272\346\234\254\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Management", "\345\255\246\344\271\240\351\200\211\346\213\251\357\274\232", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Management", "\344\272\247\345\223\201\350\277\207\345\205\211\347\224\265\345\207\272\346\216\242\345\244\264\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("Management", "\350\276\223\351\200\201\345\270\246\350\207\252\345\212\250\345\276\200\345\244\215", 0, QApplication::UnicodeUTF8));
        PositiveTest->setText(QApplication::translate("Management", "\346\255\243\346\243\200\346\265\213", 0, QApplication::UnicodeUTF8));
        NagtiveTest->setText(QApplication::translate("Management", "\345\217\215\346\243\200\346\265\213", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Management", "SEC", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Management", "\344\272\247\345\223\201\347\211\271\345\276\201\351\200\211\346\213\251\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Management", "\344\272\247\345\223\201\345\220\253\346\260\264\351\207\217", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Management", "\344\272\247\345\223\201\345\220\253\347\233\220\351\207\217", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Management", "\344\272\247\345\223\201\344\275\223\347\247\257", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Management", "\345\205\250\346\211\213\345\212\250\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        LearningButton->setText(QApplication::translate("Management", "\344\272\247\345\223\201\345\255\246\344\271\240", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("Management", "\345\255\246\344\271\240", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("Management", "\345\211\224\351\231\244\344\277\235\346\214\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Management", "\345\201\234\346\234\272\345\273\266\346\227\266\357\274\232", 0, QApplication::UnicodeUTF8));
        RmoveTime->setText(QApplication::translate("Management", "2000", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Management", "ms", 0, QApplication::UnicodeUTF8));
        RmoveKeep->setText(QApplication::translate("Management", "500", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Management", "ms", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("Management", "ms", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("Management", "ms", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("Management", "ms", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("Management", "\345\211\224\351\231\244\345\273\266\346\227\266\357\274\232", 0, QApplication::UnicodeUTF8));
        OddRmove->setText(QApplication::translate("Management", "\345\215\225\347\250\213\345\211\224\351\231\244", 0, QApplication::UnicodeUTF8));
        AutoStart->setText(QApplication::translate("Management", "\350\207\252\345\220\257\345\212\250", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("Management", "\345\200\222\345\270\246\345\273\266\346\227\266\357\274\232", 0, QApplication::UnicodeUTF8));
        RemoveTest->setText(QApplication::translate("Management", "\345\211\224\351\231\244\346\243\200\351\252\214", 0, QApplication::UnicodeUTF8));
        FinishButton->setText(QApplication::translate("Management", "\345\256\214\346\210\220", 0, QApplication::UnicodeUTF8));
        RemovedButton->setText(QApplication::translate("Management", "\345\211\224\351\231\244\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        StopButton->setText(QApplication::translate("Management", "\345\201\234\346\234\272\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        BackButton->setText(QApplication::translate("Management", "\345\200\222\345\270\246\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        Light->setText(QApplication::translate("Management", "\350\255\246\347\201\257\345\274\200\345\220\257", 0, QApplication::UnicodeUTF8));
        line_1->setText(QString());
        line_2->setText(QString());
        red->setText(QString());
        green->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("Management", "\345\211\224\351\231\244", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Management", "\345\272\217\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Management", "\344\272\247\345\223\201\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("Management", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("Management", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("Management", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("Management", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("Management", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("Management", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("Management", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("Management", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("Management", "\346\226\260\345\273\272\350\241\214", 0, QApplication::UnicodeUTF8));
        SpeedDisLabel->setText(QApplication::translate("Management", "\346\235\203\351\231\220/\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Management: public Ui_Management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMENT_H
