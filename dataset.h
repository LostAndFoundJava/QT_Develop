#ifndef DATASET_H
#define DATASET_H

#include <QWidget>

namespace Ui {
    class dataset;
}

class dataset : public QWidget
{
    Q_OBJECT

public:
    explicit dataset(QWidget *parent = 0);
    ~dataset();

private slots:
    void on_save_clicked();

    void on_cancel_clicked();

private:
    Ui::dataset *ui;
};

#endif // DATASET_H
