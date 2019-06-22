#include "Cialo.h"
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <math.h>

#define g 9.81

Cialo::Cialo(std::string name)
{
    this->name = name;
    this->w_predkosci = new WektorPredkosci(0.0, 0.0, 0.0);
    this->w_polozenia = new Wektor(0.0, 0.0, 0.0);
}

void Cialo::nadajPredkosc(Wektor *wp){

    this->w_predkosci = wp;

}

void Cialo::przeprowadzRzutUkosny(double time){

    Wektor *wpolozenia = this->w_polozenia;
    WektorPredkosci *wpredkosci = (WektorPredkosci*) this->w_predkosci;
    double kat = wpredkosci->getKatNachylenia();

//    std::cout<<"Kat: "<<kat<<std::endl<<"Sin(kat): "<<sin(kat*M_PI/180);
//    int i = 0;
//    wpredkosci->setY(wpredkosci->getWartosc() * sin(kat*M_PI/180) - g*i);
//    std::cout<<std::endl<<wpredkosci->getY();

    for(double i=0; i<time; i=i+1.0){
        Sleep(1000);
        wpredkosci->setY(wpredkosci->getWartosc() * sin(kat*M_PI/180) - g*i);
        wpolozenia->setX(wpredkosci->getX() * i);
        wpolozenia->setY(wpredkosci->getY() * i - (g*i*i)/2);
        std::cout<<"Ruch ciala po "<<i<<" sekund: "<<std::endl;
        this->pokazWektorPolozenia();
        this->pokazWektorPredkosci();
    }

}

std::string Cialo::getName(){

    return this->name;
}

void Cialo::pokazWektorPredkosci(){

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout<<"Wektor predkosci ciala "<< this->getName() <<": ["<<this->w_predkosci->getX()<<", "<<this->w_predkosci->getY()<<", "<<this->w_predkosci->getZ()<<"]"<<std::endl;

}

void Cialo::pokazWektorPolozenia(){

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout<<"Wektor polozenia ciala "<< this->getName() <<": ["<<this->w_polozenia->getX()<<", "<<this->w_polozenia->getY()<<", "<<this->w_polozenia->getZ()<<"]"<<std::endl;

}

Cialo::~Cialo()
{
    //dtor
}
