#ifndef SUBWIDGET_H
#define SUBWIDGET_H
#include <QWidget>
#include <QLabel>
#include <QWidget>
#include <QMouseEvent>
#include <QColor>
#define PI 3.1415926

class SUBWIDGET :public QWidget
{
    Q_OBJECT
signals:
    void setData(double ,double ,double ,double ,double ,double ,
             double ,double ,double ,double ,double ,
             double ,double ,double ,double ,double ,double );

public:
    explicit SUBWIDGET(QWidget *parent = 0);
    void initiation(double k1,double k2,double b1,double b2,double b3,
                    double b4,double len1,double len2,double degree,double x,double y);
    QLabel *label;
    //画图时开启定时器
    QTimer *timer ;
    QList<double> allDots;
    /////////////////////////////////////////////
    //斜率
    double k1;
    double k2;

    double b1;
    double b2;
    double b3;
    double b4;

    //初始做标点
    /*
      (x,y)-----------------（x1,y1）
      -                         -
      -                         -
      -                         -
      (x2,y2)----------------（x3,y3）
      */
    double x;
    double y;

    double x1;
    double y1;

    double x2;
    double y2;

    double x3;
    double y3;
    //定义移动的线段,上1，左2，下3，右四
    int lineNum;

    //初始线段长度
    double len1;
    double len2;

    //旋转的角度
    double degree;
    //上次角度
    double lastDegree;
    //初始化角度
    double originDegree;
    //旋转定长
    double length;
    //初始化长度
    double originLen;
    //中间存储的长度
    double tmpLen1;
    double tmpLen2;
    //变蓝选中标职位
    int flag;
    //用来选择是否打开定时器，节约资源
    int lastflag;
    //可以动
    int move;


    //警告标职位
    int alert;

    //计算点到直线的距离
    double calDistance(double x,double y,double k,double b);
    //由输入坐标，斜率k，公式b，线段长度求另一个线段端点
    double calPostion(double x,double y,double k,double b,double len,int type);
    //接触时判定颜色
    QColor getColor(int flag,int lineNum);
    //设置子窗体的大小
    void setGeometryByUser(int x,int y,int w,int h);
    /////////////////////////////////////////////
private slots:
    void getValue(int);
    void stopTimer();
    void dotSlot(QList<double>);
    void clear();
protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *);
    void getOneMSecond();
private:
    int HEIGHT_Y;
    int WIDTH_X;
};

#endif // SUBWIDGET_H
