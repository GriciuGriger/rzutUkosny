#include "Wektor.h"
#include "math.h"

Wektor::Wektor(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
    this->wartosc = policzWartosc();

}

double Wektor::policzWartosc(){

    return sqrt(pow(this->x,2) + pow(this->y,2) + pow(this->z,2));

}

double Wektor::getWartosc(){

    return this->wartosc;
}


double Wektor::getX(){
    return this->x;
}

double Wektor::getY(){
    return this->y;
}

double Wektor::getZ(){
    return this->z;
}

void Wektor::setX(double x){
    this->x = x;
}

void Wektor::setY(double y){
    this->y = y;
}

void Wektor::setZ(double z){
    this->z = z;
}

Wektor::~Wektor()
{
    //dtor
}
