#ifndef SQLITE_H
#define SQLITE_H


#include <QSqlError>
#include <QString>
#include <QFile>
#include <QDebug>
#include <QVariantList>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include "juxingkuang.h"
#include "product.h"

class SQLITE
{
public:
    SQLITE();

    bool openDatabase();
    bool closeDatabase();
    void insert(QString typeQ,int numberQ,double xQ,double yQ,double len1Q,double len2Q,double b1Q,double b2Q,double b3Q,
                        double b4Q,double k1Q,double k2Q,double degreeQ);
    void insertProduct(QString productNumber1,QString productName1,QString productLength1,QString productSpeed1,
                               QString productPackage1,QString productFeatures1,QString productDetect1,QString productPhotoelectricTime1,
                               QString productAutomaticFlag1,QString productExcluseiveSetting1);

    JuXingKuang *query(QString typeQ,int numberQ);
    QList<Product*> *queryProduct();
    QSqlDatabase database;


private:
    QSqlQuery *sql_query;
};

#endif // SQLITE_H
/*
create table juxingkang(
    id integer PRIMARY KEY autoincrement,
    type varchar (50), //药品类型
    number int(10),    //药品矩形框个数
    x varchar(50),
    y varchar(50),
    len1 varchar(50),
    len2 varchar(50),
    b1 varchar(50),
    b2 varchar(50),
    b3 varchar(50),
    b4 varchar(50),
    k1 varchar(50),
    k2 varchar(50),
    degree varchar(50),
    createdate datetime default (datetime('now', 'localtime'))
);
  */
