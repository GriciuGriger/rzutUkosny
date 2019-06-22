#ifndef WEKTOR_H
#define WEKTOR_H

class Wektor
{
    public:
        Wektor(double x, double y, double z);
        virtual ~Wektor();
        virtual double policzWartosc();
        double getX();
        double getY();
        double getZ();
        void setX(double x);
        void setY(double y);
        void setZ(double z);
        double getWartosc();


    private:
    double wartosc;
    double x;
    double y;
    double z;

};

#endif // WEKTOR_H
