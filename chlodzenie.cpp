#include "chlodzenie.h"

Chlodzenie::Chlodzenie(string n, string pr, string p, int o, int w, int g, double c, int il)
    : nazwa{n}, producent{pr}, przeznaczenie{p}, obroty{o}, wymiary{w}, glosnosc{g}, cena{c}, ilosc{il}   {
}

Chlodzenie::Chlodzenie(Chlodzenie *kopiowany)
    : nazwa{kopiowany->nazwa}, producent{kopiowany->producent}, przeznaczenie{kopiowany->przeznaczenie}, obroty{kopiowany->obroty}, wymiary{kopiowany->wymiary}, glosnosc{kopiowany->glosnosc}, cena{kopiowany->cena}, ilosc{0}  {
    *this = *kopiowany;
}

Chlodzenie::Chlodzenie()    {

}

Chlodzenie::~Chlodzenie()   {

}

void Chlodzenie::set_ilosc(int i) {
    ilosc = i;
}

void Chlodzenie::zmien_ilosc(int z)   {
    ilosc -= z;
}

void Chlodzenie::dobra_zmiana(double zw)    {
    cout << "Obecna cena: " << this->cena << endl;
    *this + zw;
    cout << "Nowa cena: " << this->cena << endl;
}

void Chlodzenie::wypisz()   {
    cout << "Nazwa produktu: " << nazwa << endl;
    cout << "Producent: " << producent << endl;
    cout << "Przeznaczenie: " << przeznaczenie << endl;
    cout << "Obroty: " << obroty << "/min" << endl;
    cout << "Wymiary: " << wymiary << "mm" << endl;
    cout << "Max. glosnosc: " << glosnosc << "dB" << endl;
    cout << "Ilosc na stanie: " << ilosc << "szt." << endl;
    cout << "CENA: " << cena << "zl" << endl;
}

Produkt &Chlodzenie::operator=(Chlodzenie *p_in)    {
    Produkt *p_out = new Chlodzenie(p_in);
    return *p_out;
}

Chlodzenie& Chlodzenie::operator+(double &z)   {
    this->cena += z;
    return *this;
}

ostream &operator<<(ostream &os, Chlodzenie *ref) {
    os << ref->nazwa;
    return os;
}
