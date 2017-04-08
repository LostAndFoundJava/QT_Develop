#ifndef VARIFY_H
#define VARIFY_H

#include <QWidget>
#include <QAbstractButton>
#include <qmyedit.h>
#include <config.h>
#include <QFileDialog>
#include "globl_data.h"
#include <mainwindow.h>
namespace Ui {
    class varify;
}

class varify : public QWidget
{
    Q_OBJECT

public:
    explicit varify(QWidget *parent = 0);
    ~varify();

private:
    Ui::varify *ui;
    class MainWindow *mainWindow;
    void valueInt(void);

public slots:
    void ShowTime(void);
    void on_DropOut_clicked();
private slots:
    void on_SetZero_clicked();
};

#endif // VARIFY_H
