
#include <QLabel>
#include <QPushButton>
#include "widget.h"
#include "ui_widget.h"
#include "subwidget.h"
#include <QPainter>
#include <QPen>
#include <QTimer>
#include <QDebug>
#include <QtCore/qmath.h>
#include <QTime>
#include <QSlider>
#include <qmath.h>
//#include <sqlite.h>
//#include <QtSql>

#define INTERVAL 10

SUBWIDGET::SUBWIDGET(QWidget *parent) :
    QWidget(parent)
{
    Widget *sw = static_cast<Widget*> (parent);

    //初始化参数
    this->lineNum = 0;

    //以线段一为中心点旋转有用
    length = x;

    //标志位
    flag = 0;
    lastflag = 0;
    alert = 0;
    move = 0;

    //鼠标追踪事件
    this->setMouseTracking(true);


    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(update()));
    connect(timer,SIGNAL(timeout()),this,SLOT(stopTimer()));
    connect(sw,SIGNAL(dotsSignal(QList<double>)),this,SLOT(dotSlot(QList<double>)));
    connect(sw->ui->pushButton,SIGNAL(clicked()),this,SLOT(clear()));
}

void SUBWIDGET::initiation(double k1, double k2, double b1, double b2, double b3,
                           double b4, double len1, double len2, double degree,double x,double y)
{
    this->x = x;
    this->y = y;

    this->len1 = len1;
    this->len2 = len2;

    this->k1 = k1;
    this->k2 = k2;

    this->b1 = b1;
    this->b2 = b2;
    this->b3 = b3;
    this->b4 = b4;

    this->degree = degree;
    originDegree = qAtan(y/x)*180/PI;
    originLen = sqrt(x*x + y*y);

    //初始化中间变量tmplen
    this->tmpLen1 = this->len1;
    this->tmpLen2 = this->len2;
    this->lastDegree = degree;

    //QPainter * qpe = new QPainter;
}

void SUBWIDGET::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    QPen pen(Qt::black,1);
    painter.setPen(pen);

    painter.translate(WIDTH_X/2,HEIGHT_Y/2);

    for(int i = -WIDTH_X/2;i <= WIDTH_X/2; i = i +4)
        painter.drawLine(QPointF(i,0),QPointF(i+1,0));
    for(int i = -HEIGHT_Y/2;i <= HEIGHT_Y/2; i = i +4)
        painter.drawLine(QPointF(0,i),QPointF(0,i+1));

    //不改变角度时，不用重新计算斜率
    if(lastDegree != degree)
    {
        //围绕坐标中心点旋转
        //取左上角为目标点，x为0，则为90
        if(x == 0)
        {
            originDegree = 90;
        }
        else
        {

            originDegree = qAtan(y/x)*180/PI;
            //x>0则为正角度
            if(x > 0)
                originDegree = 180 + originDegree;
        }

        //计算左上角到原点的值
        originLen = sqrt(x*x + y*y);

        //计算每次增加的角度
        double newDegree = originDegree + degree-lastDegree;
        //重赋值
        lastDegree = degree;

        double newK = 0;
        double newX = 0;
        double newY = 0;
        //double类型不能刚好相等
        if(newDegree < 89.5)
        {
            newK = qTan(newDegree/180*PI);
            newX = -originLen/sqrt(1+newK*newK);
            newY = newK * newX;
        }
        else if(newDegree > 90.5)
        {
            newK = qTan(newDegree/180*PI);
            newX = originLen/sqrt(1+newK*newK);
            newY = newK * newX;
        }else if(newDegree < 90.5 && newDegree > 89.5)
        {
            qDebug()<<"000000000000000";
            newX = 0;
            newY = -originLen;
        }

        x = newX;
        y = newY;

        //重新计算k1,k2的数值，b1,b2,b3,b4的数值,x,y
        k1 = qTan(degree/180*PI);
        if(degree == 0)
            k2 = 1300;
        else
            k2 = qTan((90+degree)/180*PI);

        b1 = y - k1 * x;
        if(k2 != 1300)
        {
            b2 = y - k2 * x;
            b3 = len2*sqrt(1+k1*k1)+y-k1*x;
            double newX2 = (b3-b2)/(k2-k1);
            double newY2 = k1*newX2+b3;
            if(degree < 0)
                b4 = -len1*sqrt(1+k2*k2)+newY2-k2*newX2;
            else
                b4 = len1*sqrt(1+k2*k2)+newY2-k2*newX2;
        }
        else
        {
            b3 = b1 + len2;
        }
    }

    //移动时，对应改变线段的长度

        len1 = tmpLen1;
        len2 = tmpLen2;

    //线段4由的b4由下面计算,以x,y为准
    if(lineNum == 2 && degree == 0)
    {
        x = x1 - len1;
        //originDegree = qAtan(y/x)*180/PI-degree;
    }
    else if(lineNum == 2 && degree != 0)
    {
        x = calPostion(x1,y1,k1,b1,len1,1);

        y = k1*x + b1;
        //更新b2的数值
        b2 = y - k2*x;
        //originDegree = qAtan(y/x)*180/PI-degree;
    }


    if(lineNum == 1 && degree == 0)
    {
        y = y2 - len2;
        b1 = y;
        //originDegree = qAtan(y/x)*180/PI-degree;
    }
    else if(lineNum == 1 && degree != 0)
    {
        if(k2 < 0)
            x = calPostion(x2,y2,k2,b2,len2,0);
        else
           x = calPostion(x2,y2,k2,b2,len2,1);

        y = k2*x + b2;
        //更新b1的数值
        b1 = y - k1*x;
        //originDegree = qAtan(y/x)*180/PI-degree;
    }

    painter.setPen(pen);
    //第一条线 上  不可能旋转过-90至90

      QPen pen1(getColor(flag,1),2);
      painter.setPen(pen1);

     x1 = calPostion(x,y,k1,b1,len1,0);
     y1 = k1*x1+b1;
    //}
     length = sqrt(x1*x1+(y1-b1)*(y1-b1));
     painter.drawLine(QPointF(x,y),QPointF(x1,y1));
    //第二条线 左
    //TODO 若移动一个角度 计算k2的值和b2
    //和k2的正负有关,一元二次方程求解
     //正负需要判断
     QPen pen2(getColor(flag,2),2);
     painter.setPen(pen2);

     if(1288>k2 && k2>=0)
     {
         x2 = calPostion(x,y,k2,b2,len2,0);
         y2 = k2*x2+b2;
         b3 = y2 - k1*x2;
     }else if(k2>-1288 && k2<0)
     {
         x2 = calPostion(x,y,k2,b2,len2,1);
         y2 = k2*x2+b2;
         b3 = y2 - k1*x2;
     }else
     {
        x2 = x;
        y2 = y + len2;
        b3 = y2;
     }
     painter.drawLine(QPointF(x,y),QPointF(x2,y2));

    //第三条线 下 不可能旋转过-90至90
     QPen pen3(getColor(flag,3),2);
     painter.setPen(pen3);

     x3 = calPostion(x2,y2,k1,b3,len1,0);
     y3 = k1*x3+b3;
      painter.drawLine(QPointF(x2,y2),QPointF(x3,y3));


    //第四条线 右
    //TODO 若移动一个角度 计算k2的值和b4
     QPen pen4(getColor(flag,4),2);
      painter.setPen(pen4);

    painter.drawLine(QPointF(x1,y1),QPointF(x3,y3));

    //重新计算b4的数值
    b4 = y3 - k2*x3;

    //画完线段后将数据显示在旁
    emit setData(x,y,x1,y1,x2,y2,x3,y3,degree,k1,k2,len1,len2,b1,b2,b3,b4);

    //

    QPen pen5(Qt::black,2);
    painter.setPen(pen5);
    //qDebug()<<"++++++++++++++++++++++++++++++++";
    for (int i =0 ;i < allDots.length();i ++)
    {
        //todo 待优化，可能多画了几次
        painter.drawPoint(i-2,i+20);
    }
    painter.drawPoint(0,0);
    //qDebug()<<"++++++++++++++++++++++++++++++++";
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
}

void SUBWIDGET::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    QPointF point;
    point=event->pos();

    if(flag == 1)
        move = 1;
}

void SUBWIDGET::mouseMoveEvent(QMouseEvent *event)
{
     QPointF point;
     point=event->pos();
     int len = 10;
     //鼠标获取的坐标点位置是画布坐标
     //画线获得的是实体坐标
     //两个坐标系
     /*
       (0,0)画布坐标-----------1-------------正x轴
       -                     -正Y轴
       -                     -
       2-        ----------（0，0）----------4-正x轴
       -                     -
       -                     -
       ------------------------3---------------
       正Y轴
     */
     //在鼠标托动事件中，重新计算len的长度时候，可能重复计算，还未到达重新绘制图形paint
     if(!(1288>k2&&k2>-1288))
     {
         if(move == 1 && flag == 1)
         {
             double temp = 0;
             double position = 0;
             double position1 = 0;
             if(40 <= point.x() && point.x()<= WIDTH_X-40 && 40 <= point.y() && point.y() <= HEIGHT_Y-40)
             {
                 position = point.x()-WIDTH_X/2;
                 position1 = point.y()-HEIGHT_Y/2;
             }
             else if(40 <= point.x() && point.x() <= WIDTH_X-40 && 40 > point.y())
             {
                 position = point.x()-WIDTH_X/2;
                 position1 = 40 - HEIGHT_Y/2;
             }
             else if(40 <= point.x() && point.x() <= WIDTH_X-40 && point.y() > HEIGHT_Y-40)
             {
                 position = point.x()-WIDTH_X/2;
                 position1 = HEIGHT_Y-40 - HEIGHT_Y/2;
             }
             else if(40 <= point.y() && point.y() <= HEIGHT_Y-40 && 40 > point.x())
             {
                 position = 40 - WIDTH_X/2;
                 position1 = point.y()-HEIGHT_Y/2;
             }else if(40 <= point.y() && point.y() <= HEIGHT_Y-40 && WIDTH_X-40 < point.x())
             {
                 position = WIDTH_X-40 - WIDTH_X/2;
                 position1 = point.y()-HEIGHT_Y/2;
             }
             else if(40 > point.x() && 40 > point.y())
            {
                position = 40 - WIDTH_X/2;
                position1 = 40 - HEIGHT_Y/2;
            }
             else if(WIDTH_X-40 < point.x() && 5 > point.y())
             {
                 position = WIDTH_X-40 - WIDTH_X/2;
                 position1 = 40 - HEIGHT_Y/2;
             }
             else if(40 > point.x() && HEIGHT_Y-40 < point.y())
             {
                 position = 40 - WIDTH_X/2;
                 position1 = HEIGHT_Y-40 - HEIGHT_Y/2;
             }
             else if(WIDTH_X-40 < point.x() && HEIGHT_Y-40 < point.y())
             {
                 position = WIDTH_X-40 - WIDTH_X/2;
                 position1 = HEIGHT_Y-40 - HEIGHT_Y/2;
             }

             timer->start(INTERVAL);

             if(lineNum == 4)
             {
                 temp = position - x1;
                 if(temp < 0 && -temp > len1/2-1)
                     temp = -len1/2 +1;
                 tmpLen1 =  len1 + temp;
             }
             else if(lineNum == 2)
             {
                 temp = position - x;
                 if(temp > 0 && temp > len1/2-1)
                     temp = len1/2 -1;
                 tmpLen1 =  len1 - temp;
             }
             else if(lineNum == 1)
             {
                 temp = position1 - y;
                 if(temp > 0 && temp > len2/2-1)
                     temp = len2/2 -1;
                 tmpLen2 =  len2 - temp;
             }
             else if(lineNum == 3)
             {
                 temp = position1 - y2;
                 if(temp < 0 && -temp > len2/2-1)
                     temp = -len2/2 +1;
                 tmpLen2 =  len2 + temp;
             }
         }else
         {
             double pos1 = point.x()-x1 -WIDTH_X/2 ;
             double pos2 = point.x()-x - WIDTH_X/2;
             double pos3 = point.y()-y - HEIGHT_Y/2;
             double pos4 = point.y()-y2 - HEIGHT_Y/2;

             if(-len<pos1 && pos1 <= len)
             {
                 flag = 1;
                 lineNum = 4;
             }
             else if(-len<pos2 && pos2 <= len)
             {
                 flag = 1;
                 lineNum = 2;
             }
             else if(-len<pos3 && pos3 <= len)
             {
                 flag = 1;
                 lineNum = 1;
             }
             else if(-len<pos4 && pos4 <= len)
             {
                 flag = 1;
                 lineNum = 3;
             }
             else
             {
                 flag = 0;
                 lineNum = 0;
             }

             if(!(lastflag == flag))
             {
                 timer->start(INTERVAL);
                 lastflag = flag;
             }

         }
     }else{
         if(move == 1 && flag == 1)
         {
             double posX = 0 ;
             double posY = 0;

             if(40 <= point.x() && point.x() <= WIDTH_X-40 && 40 <= point.y() && point.y() <= HEIGHT_Y-40)
             {
                 posX = point.x()-WIDTH_X/2;
                 posY = point.y()-HEIGHT_Y/2;
             }
             else if(40 <= point.x() && point.x() <= WIDTH_X-40 && 40 > point.y())
             {
                 posX = point.x()-WIDTH_X/2;
                 posY = 40 - HEIGHT_Y/2;
             }
             else if(40 <= point.x() && point.x() <= WIDTH_X-40 && point.y() > HEIGHT_Y-40)
             {
                 posX = point.x()-WIDTH_X/2;
                 posY = HEIGHT_Y-40 - HEIGHT_Y/2;
             }
             else if(40 <= point.y() && point.y() <= HEIGHT_Y-40 && 40 > point.x())
             {
                 posX = 40 - WIDTH_X/2;
                 posY = point.y()-HEIGHT_Y/2;
             }else if(40 <= point.y() && point.y() <= HEIGHT_Y-40 && WIDTH_X-40 < point.x())
             {
                 posX = WIDTH_X-40 - WIDTH_X/2;
                 posY = point.y()-HEIGHT_Y/2;
             }
             else if(40 > point.x() && 40 > point.y())
            {
                posX = 40 - WIDTH_X/2;
                posY = 40 - HEIGHT_Y/2;
            }
             else if(WIDTH_X-40 < point.x() && 40 > point.y())
             {
                 posX = WIDTH_X-40 - WIDTH_X/2;
                 posY = 40 - HEIGHT_Y/2;
             }
             else if(40 > point.x() && HEIGHT_Y-40 < point.y())
             {
                 posX = 40 - WIDTH_X/2;
                 posY = HEIGHT_Y-40 - HEIGHT_Y/2;
             }
             else if(WIDTH_X-40 < point.x() && HEIGHT_Y-40 < point.y())
             {
                 posX = WIDTH_X-40 - WIDTH_X/2;
                 posY = HEIGHT_Y-40 - HEIGHT_Y/2;
             }

             timer->start(INTERVAL);

             if(lineNum == 4)
             {
                 double dis = calDistance(posX,posY,k2,b4);
                 //距离正负需要判断
                 if(k2 > 0)
                 {
                     if(dis < 0 && -dis > len1/2-1)
                         dis = -len1/2 + 1;
                     tmpLen1 =  len1 + dis;
                 }
                 else
                 {
                     if(dis > 0 && dis > len1/2-1)
                         dis = len1/2 - 1;
                     tmpLen1 =  len1 - dis;
                 }
             }
             else if(lineNum == 2)
             {
                 double dis = calDistance(posX,posY,k2,b2);
                 //距离正负需要判断
                 if(k2 > 0)
                 {
                     if(dis > 0 && dis > len1/2-1)
                         dis = len1/2 - 1;
                    tmpLen1 =  len1 - dis;
                 }
                 else
                 {
                     if(dis < 0 && -dis > len1/2-1)
                         dis = -len1/2 + 1;
                    tmpLen1 =  len1 + dis;
                 }
             }
             else if(lineNum == 3)
             {
                 double dis = calDistance(posX,posY,k1,b3);
                 if(dis>0 && dis > len2/2-1)
                     dis = len2/2 -1;
                 tmpLen2 =  len2 - dis;
             }
             else if(lineNum == 1)
             {
                 double dis = calDistance(posX,posY,k1,b1);
                 if(dis<0 && -dis > len2/2-1)
                     dis = -len2/2 +1;
                 tmpLen2 =  len2 + dis;
             }
         }else
         {
             double posX = point.x() - WIDTH_X/2;
             double posY = point.y() - HEIGHT_Y/2;

             double dis1 = qAbs(calDistance(posX,posY,k2,b4));
             double dis2 = qAbs(calDistance(posX,posY,k2,b2));
             double dis3 = qAbs(calDistance(posX,posY,k1,b1));
             double dis4 = qAbs(calDistance(posX,posY,k1,b3));

             if(-len<dis1 && dis1 <= len)
             {
                 flag = 1;
                 lineNum = 4;
             }
             else if(-len<dis2 && dis2 <= len)
             {
                 flag = 1;
                 lineNum = 2;
             }
             else if(-len<dis3 && dis3 <= len)
             {
                 flag = 1;
                 lineNum = 1;
             }
             else if(-len<dis4 && dis4 <= len)
             {
                 flag = 1;
                 lineNum = 3;
             }
             else
             {
                 flag = 0;
                 lineNum = 0;
             }

             if(!(lastflag == flag))
             {
                 timer->start(INTERVAL);
                 lastflag = flag;
             }
         }
 }
}

void SUBWIDGET::dotSlot(QList<double> dots)
{
    qDebug()<<"lllllllllllllllllll";
    allDots.append(dots);
    //不变的线段不重新画
    update();
}

void SUBWIDGET::clear()
{
    allDots.clear();
    update();
}

void SUBWIDGET::stopTimer()
{
    timer->stop();
}

QColor SUBWIDGET::getColor(int flag, int lineNum)
{

    if(flag == 1 && lineNum == this->lineNum)
    {
        QColor *color = new QColor(192,255,62);
        return *color;
    }else
    {
        QColor *color = new QColor(83,148,160);
        return *color;
    }
}

void SUBWIDGET::mouseReleaseEvent(QMouseEvent *){
    if(move == 1)
        move = 0;
}

void SUBWIDGET::getValue(int value)
{
    QString s = QString("%1").arg(value);
    degree = value;
    timer->start(INTERVAL);
}

double SUBWIDGET::calDistance(double x, double y, double k, double b)
{
    return (k*x-y+b)/sqrt(1+k*k);
}

double SUBWIDGET::calPostion(double x, double y, double k, double b, double len,int type){
    if (type == 0)
        return (-(-2*x+2*k*b-2*k*y)+sqrt((-2*x+2*k*b-2*k*y)*(-2*x+2*k*b-2*k*y)
                                             -4*(1+k*k)*(x*x+b*b+y*y-2*b*y-len*len)))/(2*(1+k*k));
    else
        return (-(-2*x+2*k*b-2*k*y)-sqrt((-2*x+2*k*b-2*k*y)*(-2*x+2*k*b-2*k*y)
                                             -4*(1+k*k)*(x*x+b*b+y*y-2*b*y-len*len)))/(2*(1+k*k));
}

void SUBWIDGET::getOneMSecond()
{
    QTime n=QTime::currentTime();
    QTime now;
    do
    {
        now=QTime::currentTime();
        //qDebug()<<now;
    }
    while(n.msecsTo(now)<=1);
}

void SUBWIDGET::setGeometryByUser(int x, int y, int w, int h)
{
    this->setGeometry(x,y,w,h);
    HEIGHT_Y = this->height();
    WIDTH_X = this->width();
}
