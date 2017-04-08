#ifndef LEARN_H
#define LEARN_H
#include "globl_data.h"
#include <QWidget>
#include <varify.h>
#include <QAbstractButton>
#include <qmyedit.h>
#include <config.h>
#include <QFileDialog>
#include "globl_data.h"
#include <varify.h>
namespace Ui {
    class learn;
}

class learn : public QWidget
{
    Q_OBJECT

public:
    explicit learn(QWidget *parent = 0);
    ~learn();

private:
    Ui::learn *ui;
    class varify *Varify;
    void valueInt(void);

public slots:
    void ShowTime(void);

private slots:
    void on_FinishBtn_clicked();
};

#endif // LEARN_H
