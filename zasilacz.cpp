#include "zasilacz.h"

Zasilacz::Zasilacz(string n, string pr, string s, string cr, string ch, vector<string> &w, int m, double ce, int il)
    : nazwa{n}, producent{pr}, standard{s}, certyfikat{cr}, chlodzenie{ch}, wtyczki{w}, moc{m}, cena{ce}, ilosc{il}   {
}

Zasilacz::Zasilacz(Zasilacz *kopiowany)
    : nazwa{kopiowany->nazwa}, producent{kopiowany->producent}, standard{kopiowany->standard}, certyfikat{kopiowany->certyfikat}, chlodzenie{kopiowany->chlodzenie}, wtyczki{kopiowany->wtyczki}, moc{kopiowany->moc}, cena{kopiowany->cena}, ilosc{0}  {
    *this = *kopiowany;
}

Zasilacz::Zasilacz()    {

}

Zasilacz::~Zasilacz()   {

}

void Zasilacz::set_ilosc(int i) {
    ilosc = i;
}

void Zasilacz::zmien_ilosc(int z)   {
    ilosc -= z;
}

void Zasilacz::dobra_zmiana(double zw)    {
    cout << "Obecna cena: " << this->cena << endl;
    *this + zw;
    cout << "Nowa cena: " << this->cena << endl;
}

void Zasilacz::wypisz()    {
    cout << "Nazwa produktu: " << nazwa << endl;
    cout << "Producent: " << producent << endl;
    cout << "Standard: " << standard << endl;
    cout << "Certyfikat: " << certyfikat << endl;
    cout << "Chlodzenie: " << chlodzenie << endl;
    cout << "Wtyczki: " << endl;
    for (auto w: wtyczki)
        cout << " -" << w << endl;
    cout << "Moc: " << moc << "W" << endl;
    cout << "Ilosc na stanie: " << ilosc << "szt." << endl;
    cout << "CENA: " << cena << "zl" << endl;
}

Produkt &Zasilacz::operator=(Zasilacz *p_in)    {
    Produkt *p_out = new Zasilacz(p_in);
    return *p_out;
}

Zasilacz& Zasilacz::operator+(double &z)   {
    this->cena += z;
    return *this;
}

ostream &operator<<(ostream &os, Zasilacz *ref) {
    os << ref->nazwa;
    return os;
}
