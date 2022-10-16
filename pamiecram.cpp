#include "pamiecram.h"

PamiecRam::PamiecRam(string n, string pr, string r, string s, int p, int t, int o, double c, int il)
    : nazwa{n}, producent{pr}, rodzaj{r}, standard{s}, pojemnosc{p}, taktowanie{t}, opoznienie{o}, cena{c}, ilosc{il}     {
}

PamiecRam::PamiecRam(PamiecRam *kopiowany)
    : nazwa{kopiowany->nazwa}, producent{kopiowany->producent}, rodzaj{kopiowany->rodzaj}, standard{kopiowany->standard}, pojemnosc{kopiowany->pojemnosc}, taktowanie{kopiowany->taktowanie}, opoznienie{kopiowany->opoznienie}, cena{kopiowany->cena}, ilosc{0}  {
    *this = *kopiowany;
}

PamiecRam::PamiecRam()  {

}

PamiecRam::~PamiecRam()     {

}

void PamiecRam::set_ilosc(int i) {
    ilosc = i;
}

void PamiecRam::zmien_ilosc(int z)   {
    ilosc -= z;
}

void PamiecRam::dobra_zmiana(double zw)    {
    cout << "Obecna cena: " << this->cena << endl;
    *this + zw;
    cout << "Nowa cena: " << this->cena << endl;
}

void PamiecRam::wypisz()    {
    cout << "Nazwa produktu: " << nazwa << endl;
    cout << "Producent: " << producent << endl;
    cout << "Rodzaj: " << rodzaj << endl;
    cout << "Standard: " << standard << endl;
    cout << "Pojemnosc: " << pojemnosc << "GB" << endl;
    cout << "Taktowanie " << taktowanie << "MHz" << endl;
    cout << "Opoznienie: " << opoznienie << endl;
    cout << "Ilosc na stanie: " << ilosc << "szt." << endl;
    cout << "CENA: " << cena << "zl" << endl;
}

Produkt &PamiecRam::operator=(PamiecRam *p_in)    {
    Produkt *p_out = new PamiecRam(p_in);
    return *p_out;
}

PamiecRam& PamiecRam::operator+(double &z)   {
    this->cena += z;
    return *this;
}

ostream &operator<<(ostream &os, PamiecRam *ref) {
    os << ref->nazwa;
    return os;
}
