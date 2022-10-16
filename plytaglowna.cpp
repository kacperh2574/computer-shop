#include "plytaglowna.h"

PlytaGlowna::PlytaGlowna(string n, string pr, string gc, string ch, string s, vector<string> &p, vector<string> &o, int gr, double c, int il)
    : nazwa{n}, producent{pr}, gniazdoCPU{gc}, chipset{ch}, standardRAM{s}, PCIe{p}, obslugiwaneCPU{o}, gniazdaRAM{gr}, cena{c}, ilosc{il}  {
}

PlytaGlowna::PlytaGlowna(PlytaGlowna *kopiowany)
    : nazwa{kopiowany->nazwa}, producent{kopiowany->producent}, gniazdoCPU{kopiowany->gniazdoCPU}, chipset{kopiowany->chipset}, standardRAM{kopiowany->standardRAM}, PCIe{kopiowany->PCIe}, obslugiwaneCPU{kopiowany->obslugiwaneCPU}, gniazdaRAM{kopiowany->gniazdaRAM}, cena{kopiowany->cena}, ilosc{0}  {
    *this = *kopiowany;
}

PlytaGlowna::PlytaGlowna()  {

}

PlytaGlowna::~PlytaGlowna()     {

}

void PlytaGlowna::set_ilosc(int i) {
    ilosc = i;
}

void PlytaGlowna::zmien_ilosc(int z)   {
    ilosc -= z;
}

void PlytaGlowna::dobra_zmiana(double zw)    {
    cout << "Obecna cena: " << this->cena;
    *this + zw;
    cout << "Nowa cena: " << this->cena;
}

void PlytaGlowna::wypisz()    {
    cout << "Nazwa produktu: " << nazwa << endl;
    cout << "Producent: " << producent << endl;
    cout << "Gniazdo procesora: " << gniazdoCPU << endl;
    cout << "Chipset plyty glownej: " << chipset << endl;
    cout << "Obslugiwany standard RAM: " << standardRAM << endl;
    cout << "Ilosc gniazd RAM: " << gniazdaRAM << endl;
    cout << "Zlacza PCI-Express: " << endl;
    for (auto p: PCIe)
        cout << " -" << p << endl;
    cout << "Obslugiwane procesory: " << endl;
    for (auto o: obslugiwaneCPU)
        cout << " -" << o << endl;
    cout << "Ilosc na stanie: " << ilosc << "szt." << endl;
    cout << "CENA: " << cena << "zl" << endl;
}

Produkt &PlytaGlowna::operator=(PlytaGlowna *p_in)    {
    Produkt *p_out = new PlytaGlowna(p_in);
    return *p_out;
}

PlytaGlowna& PlytaGlowna::operator+(double &z)   {
    this->cena += z;
    return *this;
}

ostream &operator<<(ostream &os, PlytaGlowna *ref) {
    os << ref->nazwa;
    return os;
}
