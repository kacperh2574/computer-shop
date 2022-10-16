#include "dysk.h"

Dysk::Dysk(string n, string pr, string r, string i, string f, int pj, int pz, int po, double c, int il)
    : nazwa{n}, producent{pr}, rodzaj{r}, interfejs{i}, format{f}, pojemnosc{pj}, pred_zapisu{pz}, pred_odczytu{po}, cena{c}, ilosc{il}   {
}

Dysk::Dysk(Dysk *kopiowany)
    : nazwa{kopiowany->nazwa}, producent{kopiowany->producent}, rodzaj{kopiowany->rodzaj}, interfejs{kopiowany->interfejs}, format{kopiowany->format}, pojemnosc{kopiowany->pojemnosc}, pred_zapisu{kopiowany->pred_zapisu}, pred_odczytu{kopiowany->pred_odczytu}, cena{kopiowany->cena}, ilosc{0}  {
    *this = *kopiowany;
}

Dysk::Dysk()    {

}

Dysk::~Dysk()   {

}

void Dysk::set_ilosc(int i) {
    ilosc = i;
}

void Dysk::zmien_ilosc(int z)   {
    ilosc -= z;
}

void Dysk::dobra_zmiana(double zw)    {
    cout << "Obecna cena: " << this->cena << endl;
    *this + zw;
    cout << "Nowa cena: " << this->cena << endl;
}

void Dysk::wypisz()   {
    cout << "Nazwa produktu: " << nazwa << endl;
    cout << "Producent: " << producent << endl;
    cout << "Rodzaj: " << rodzaj << endl;
    cout << "Interfejs: " << interfejs << endl;
    cout << "Format: " << format << endl;
    cout << "Pojemnosc: " << pojemnosc << "GB" << endl;
    cout << "Predkosc zapisu: " << pred_zapisu << "MB/s" << endl;
    cout << "Predkosc odczytu: " << pred_odczytu << "MB/s" << endl;
    cout << "Ilosc na stanie: " << ilosc << "szt." << endl;
    cout << "CENA: " << cena << "zl" << endl;
}

Produkt &Dysk::operator=(Dysk *p_in)    {
    Produkt *p_out = new Dysk(p_in);
    return *p_out;
}

Dysk& Dysk::operator+(double &z)   {
    this->cena += z;
    return *this;
}

ostream &operator<<(ostream &os, Dysk *ref) {
    os << ref->nazwa;
    return os;
}
