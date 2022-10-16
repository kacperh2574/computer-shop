#include "kartagraficzna.h"

KartaGraficzna::KartaGraficzna(string n, string pr, string z, string ch, string t, int p, int tp, int tr, double c, int il)
    : nazwa{n}, producent{pr}, zlacze{z}, chipset{ch}, typ{t}, pojemnosc{p}, takt_pamieci{tp}, takt_rdzenia{tr}, cena{c}, ilosc{il}   {
}

KartaGraficzna::KartaGraficzna(KartaGraficzna *kopiowany)
    : nazwa{kopiowany->nazwa}, producent{kopiowany->producent}, zlacze{kopiowany->zlacze}, chipset{kopiowany->chipset}, typ{kopiowany->typ}, pojemnosc{kopiowany->pojemnosc}, takt_pamieci{kopiowany->takt_pamieci}, takt_rdzenia{kopiowany->takt_rdzenia}, cena{kopiowany->cena}, ilosc{0}  {
    *this = *kopiowany;
}

KartaGraficzna::KartaGraficzna()    {

}

KartaGraficzna::~KartaGraficzna()   {

}

void KartaGraficzna::set_ilosc(int i) {
    ilosc = i;
}

void KartaGraficzna::zmien_ilosc(int z)   {
    ilosc -= z;
}

void KartaGraficzna::dobra_zmiana(double zw)    {
    cout << "Obecna cena: " << this->cena << endl;
    *this + zw;
    cout << "Nowa cena: " << this->cena << endl;
}

void KartaGraficzna::wypisz()   {
    cout << "Nazwa produktu: " << nazwa << endl;
    cout << "Producent: " << producent << endl;
    cout << "Zlacze: " << zlacze << endl;
    cout << "Chipset: " << chipset << endl;
    cout << "Typ: " << typ << endl;
    cout << "Pojemnosc: " << pojemnosc << "GB" << endl;
    cout << "Taktowanie pamieci: " << "MHz" << endl;
    cout << "Taktowanie rdzenia: " << "MHz" << endl;
    cout << "Ilosc na stanie: " << ilosc << "szt." << endl;
    cout << "CENA: " << cena << "zl" << endl;
}

Produkt &KartaGraficzna::operator=(KartaGraficzna *p_in)    {
    Produkt *p_out = new KartaGraficzna(p_in);
    return *p_out;
}

KartaGraficzna& KartaGraficzna::operator+(double &z)   {
    this->cena += z;
    return *this;
}

ostream &operator<<(ostream &os, KartaGraficzna *ref) {
    os << ref->nazwa;
    return os;
}
