#include "koszyk.h"

Koszyk::Koszyk()
{

}

int Koszyk::get_ilosc()     {
    return dodane.back()->get_ilosc();
}

string Koszyk::get_nazwa()    {
    return dodane.back()->get_nazwa();
}

void Koszyk::wypisz()   {
    cout << "W koszyku: " << dodane.back()->get_nazwa() << ", ilosc: " << dodane.back()->get_ilosc() << endl;
}
