#ifndef NOTICE_H
#define NOTICE_H

#include <QWidget>

namespace Ui {
    class notice;
}

class notice : public QWidget
{
    Q_OBJECT

public:
    explicit notice(QWidget *parent = 0);
    ~notice();

private:
    Ui::notice *ui;
};

#endif // NOTICE_H
