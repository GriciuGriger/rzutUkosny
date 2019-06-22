#include <iostream>
#include <cstdio>
#include "Cialo.h"
#include <string>
#include "math.h"


int main()
{

    WektorPredkosci wektor_predkosci(30.0, 90.0, 0.0);
    Cialo cialo("Kokosz");
    cialo.nadajPredkosc(&wektor_predkosci);
    cialo.pokazWektorPredkosci();

    double czasDoMomentuUpadku = 2*wektor_predkosci.getWartosc() * sin(wektor_predkosci.getKatNachylenia() * M_PI/180)/9.81;
    std::cout<<czasDoMomentuUpadku;

    cialo.przeprowadzRzutUkosny(czasDoMomentuUpadku);


}

//void przeprowadz_ruch(Cialo *cialo){
//
//    int time=0;
//
//
//
//
//
//}

//void licz_w³asnoœci_ruchu(int time){
//
//
//
//
//}
