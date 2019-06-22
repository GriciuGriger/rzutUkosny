#ifndef WEKTORPREDKOSCI_H
#define WEKTORPREDKOSCI_H
#include "Wektor.h"


class WektorPredkosci : public Wektor
{
    public:
        WektorPredkosci(double x, double y, double z);
        virtual ~WektorPredkosci();
        double getKatNachylenia();

    protected:

    private:
        double kat_nachylenia_do_poziomu;
};

#endif // WEKTORPREDKOSCI_H
