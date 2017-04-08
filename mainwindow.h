#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QWSInputMethod>
#include <QKeyEvent>
#include <QMouseEvent>
#include "globl_data.h"
#include <QtGui>
#include "log.h"
#include "management.h"
#include "systemset.h"
#include <widget.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void valueInt(void);

    void Button_AMP_1(QPushButton *button);
    void Button_AMP_0(QPushButton *button);

    Log *log;
    class Management *management;
    Systemset *systemset;

    QPoint p;
public slots:
    bool eventFilter(QObject *watched,QEvent *event);
    void ShowTime(void);

protected:
    void keyPressEvent(QKeyEvent *event);

private slots:

    void on_Log_clicked();
    void on_Management_clicked();
    void on_System_set_clicked();
    void on_SetZero_clicked();

};

extern MainWindow *w;
#endif // MAINWINDOW_H
