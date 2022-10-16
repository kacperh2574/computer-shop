#include "procesor.h"

Procesor::Procesor(string n, string pr, string ty, string s, string g, int ta, int tt, int r, bool oc, double c, int il)
    : nazwa{n}, producent{pr}, typ{ty}, seria{s}, gniazdo{g}, taktowanie{ta}, takt_turbo{tt}, rdzenie{r}, OC{oc}, cena{c}, ilosc{il}  {
}

Procesor::Procesor(Procesor *kopiowany)
    : nazwa{kopiowany->nazwa}, producent{kopiowany->producent}, typ{kopiowany->typ}, seria{kopiowany->seria}, gniazdo{kopiowany->gniazdo}, taktowanie{kopiowany->taktowanie}, takt_turbo{kopiowany->takt_turbo}, rdzenie{kopiowany->rdzenie}, OC{kopiowany->OC}, cena{kopiowany->cena}, ilosc{0}  {
    *this = *kopiowany;
}

Procesor::Procesor()    {

}

Procesor::~Procesor()   {

}

void Procesor::set_ilosc(int i) {
    ilosc = i;
}

void Procesor::zmien_ilosc(int z)   {
    ilosc -= z;
}

void Procesor::dobra_zmiana(double zw)    {
    cout << "Obecna cena: " << this->cena << endl;
    *this + zw;
    cout << "Nowa cena: " << this->cena << endl;
}

void Procesor::wypisz() {
    cout << "Nazwa produktu: " << nazwa << endl;
    cout << "Producent: " << producent << endl;
    cout << "Typ: " << typ << endl;
    cout << "Seria: " << seria << endl;
    cout << "Gniazdo: " << gniazdo << endl;
    cout << "Taktowanie: " << taktowanie << "MHz" << endl;
    cout << "Taktowanie turbo: " << takt_turbo << "MHz" << endl;
    cout << "Liczba rdzeni: " << rdzenie << endl;
    cout << "Odblokowany zegar: ";
    if (OC)
        cout << "tak" << endl;
    else
        cout << "nie" << endl;
    cout << "Ilosc na stanie: " << ilosc << "szt." << endl;
    cout << "CENA: " << cena << "zl" << endl;
}

Produkt &Procesor::operator=(Procesor *p_in)    {
    Produkt *p_out = new Procesor(p_in);
    return *p_out;
}

Procesor& Procesor::operator+(double &z)   {
    this->cena += z;
    return *this;
}

ostream &operator<<(ostream &os, Procesor *ref) {
    os << ref->nazwa;
    return os;
}
