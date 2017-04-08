#ifndef JUXINGKUANG_H
#define JUXINGKUANG_H
#include <QString>

class JuXingKuang
{
public:
    JuXingKuang();
     QString getTypeQ();

     void setTypeQ(QString typeQ);

     int getNumberQ() ;

     void setNumberQ(int numberQ);
     double getxQ();

     void setxQ(double xQ) ;
     double getyQ() ;

     void setyQ(double yQ) ;

     double getLen1Q() ;

     void setLen1Q(double len1Q) ;

     double getLen2Q();

     void setLen2Q(double len2Q) ;

     double getB1Q() ;

     void setB1Q(double b1Q);
     double getB2Q() ;

     void setB2Q(double b2Q) ;
     double getB3Q() ;
     void setB3Q(double b3Q) ;

     double getB4Q();

     void setB4Q(double b4Q) ;
     double getK1Q() ;

     void setK1Q(double k1Q) ;

     double getK2Q() ;
     void setK2Q(double k2Q) ;

     double getDegreeQ() ;

     void setDegreeQ(double degreeQ) ;

private:
    QString typeQ;
    int numberQ;
    double xQ;
    double yQ;
    double len1Q;
    double len2Q;
    double b1Q;
    double b2Q;
    double b3Q;
    double b4Q;
    double k1Q;
    double k2Q;
    double degreeQ;
};

#endif // JUXINGKUANG_H
