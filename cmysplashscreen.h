#ifndef CMYSPLASHSCREEN_H
#define CMYSPLASHSCREEN_H

#include <QSplashScreen>
#include <QPixmap>
#include <QProgressBar>
#include <QList>
#include <QtGlobal>

class CMySplashScreen : public QSplashScreen
{
    Q_OBJECT
public:
    CMySplashScreen(QPixmap &pixmap,int time);
    ~CMySplashScreen();
private:
    //进度条
    QProgressBar *ProgressBar;
    //启动界面停留时间 单位毫秒
    int elapseTime;
    QTimer *qtimer;
    int temp;

private slots:
    void on_time_out();

signals:
    
public slots:

};

#endif // CMYSPLASHSCREEN_H
