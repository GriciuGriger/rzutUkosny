#include "WektorPredkosci.h"
#include "math.h"

WektorPredkosci::WektorPredkosci(double x, double y, double z) : Wektor(x, y, z)
{
    this->kat_nachylenia_do_poziomu = acos(this->getX()/this->getWartosc()) * 180.0/M_PI;
}

double WektorPredkosci::getKatNachylenia(){

    return this->kat_nachylenia_do_poziomu;
}

WektorPredkosci::~WektorPredkosci()
{
    //dtor
}
