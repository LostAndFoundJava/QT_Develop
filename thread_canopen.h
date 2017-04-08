#ifndef THREAD_CANOPEN_H
#define THREAD_CANOPEN_H

#include <QThread>

class Thread_CANopen : public QThread
{
    Q_OBJECT
public:
    explicit Thread_CANopen(QObject *parent = 0);
    
signals:
    
public slots:

protected:
    void run();
    
};

#endif // THREAD_CANOPEN_H
