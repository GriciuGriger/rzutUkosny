#ifndef CIALO_H
#define CIALO_H
#include <string>
#include "WektorPredkosci.h"

class Cialo
{
    public:
        Cialo(std::string name);
        virtual ~Cialo();
        void nadajPredkosc(Wektor *wektorPredkosci);
        std::string getName();
        void pokazWektorPredkosci();
        void pokazWektorPolozenia();
        void przeprowadzRzutUkosny(double time);

    protected:

    private:
    std::string name;
    Wektor *w_predkosci;
    Wektor *w_polozenia;

};

#endif // CIALO_H
