#ifndef LOG_H
#define LOG_H

#include <QWidget>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>

namespace Ui {
class Log;
}

class Log : public QWidget
{
    Q_OBJECT

public:
    explicit Log(QWidget *parent = 0);
    ~Log();

private slots:

    void on_NGButton_clicked();

    void on_Return_clicked();

    void on_LoadLog_2_clicked();

private:
    Ui::Log *ui;
};

#endif // LOG_H
