#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QList>
#include <sqlite.h>
#include <juxingkuang.h>
#define PI 3.1415926
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0,bool status = true);
    ~Widget();
    //后期定义为槽函数，由传入的点数据触发该事件
    void generateDots();

    //旋转的角度
    //double degree;
    Ui::Widget *ui;

protected:

private slots:
    void on_horizontalSlider_valueChanged(int value);

signals:
    void dotsSignal(QList<double>);

private:

    QList<double> dot;
    void showCorridateAndPhase();

private slots:
    void getData(double ,double ,double ,double ,double ,double ,
             double ,double ,double ,double ,double ,
             double ,double ,double ,double ,double ,double );
};

#endif // WIDGET_H
