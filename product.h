#ifndef PRODUCT_H
#define PRODUCT_H

#include <QObject>
#include <QString>

class Product : public QObject
{
    Q_OBJECT
public:
    explicit Product(QObject *parent = 0);

    QString getProductNumber();

    void setProductNumber(QString productNumber);

    QString  getProductName();

    void setProductName(QString productName);
    QString getProductLength() ;

    void setProductLength(QString productLength) ;
    QString getProductSpeed() ;

    void setProductSpeed(QString productSpeed) ;
    QString getProductPackage() ;

    void setProductPackage(QString productPackage);
    QString getProductFeatures() ;

    void setProductFeatures(QString productFeatures) ;

    QString getProductDetect() ;

    void setProductDetect(QString productDetect);

    QString getProductPhotoelectricTime() ;

    void setProductPhotoelectricTime(QString productPhotoelectricTime);

    QString getProductAutomaticFlag() ;

    void setProductAutomaticFlag(QString productAutomaticFlag);

    QString getProductExcluseiveSetting();

    void setProductExcluseiveSetting(QString productExcluseiveSetting);
    
private:
    QString productNumber;
    QString productName;
    QString productLength;
    QString productSpeed;
    QString productPackage; //0为包装 1为散装 2为包装-镀铝膜
    QString productFeatures;//1/2/3/4/5/6/7/8/9（产品特征图片标志位，从上到下，从左到右）
    QString productDetect; //0正检测 1反检测
    QString productPhotoelectricTime;
    QString productAutomaticFlag; //输送带自动往返 0选中 1不选中
    QString productExcluseiveSetting; //剔除设置 0/a延时剔除/b剔除保持/c 0勾选 1不勾选
                                      //停机设置 1/a停机延迟/b自自动 0勾选 1不勾选/c 勾选-》时间
                                      //到带设置 2/a到带延迟/b警灯 0勾选 1不勾选
};

#endif // PRODUCT_H
/*
create table product(
    id integer PRIMARY KEY autoincrement,
    productNumber varchar (50), //产品编号
    productName varchar(10),    //产品名称
    productLength varchar(50),
    productSpeed varchar(50),
    productPackage varchar(50),
    productFeatures varchar(50),
    productDetect varchar(50),
    productPhotoelectricTime varchar(50),
    productAutomaticFlag varchar(50),
    productExcluseiveSetting varchar(50),
    createdate datetime default (datetime('now', 'localtime'))
);
  */
