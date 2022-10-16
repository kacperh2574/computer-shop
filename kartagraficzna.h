#ifndef KARTAGRAFICZNA_H
#define KARTAGRAFICZNA_H
#include "produkt.h"
#include <iostream>
using namespace std;

class KartaGraficzna: public Produkt
{
    string nazwa;
    string producent;
    string zlacze;
    string chipset;
    string typ;
    int pojemnosc;
    int takt_pamieci;
    int takt_rdzenia;
    double cena;
    int ilosc;
    double podwyzka;
public:
    //przeciazone operatory
    Produkt &operator=(KartaGraficzna *p_in);
    KartaGraficzna &operator+(double &z);
    friend ostream &operator<<(ostream &os, KartaGraficzna *ref);
    //gettery
    virtual string get_nazwa() override {return nazwa;}
    virtual double get_cena() override  {return cena;}
    virtual int get_ilosc() override    {return  ilosc;}
    virtual void wypisz() override;
    //settery
    virtual void set_ilosc(int i) override;
    virtual void zmien_ilosc(int z) override;
    virtual void dobra_zmiana(double zw) override;
    //konstruktory i destruktory
    KartaGraficzna();
    KartaGraficzna(KartaGraficzna *kopiowany);
    KartaGraficzna(string n, string pr, string z, string ch, string t, int p, int tp, int tr, double c, int il);
    virtual ~KartaGraficzna();
};

#endif // KARTAGRAFICZNA_H
