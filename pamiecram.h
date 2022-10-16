#ifndef PAMIECRAM_H
#define PAMIECRAM_H
#include "produkt.h"
#include <iostream>
using namespace std;

class PamiecRam: public Produkt
{
    string nazwa;
    string producent;
    string rodzaj;
    string standard;
    int pojemnosc;
    int taktowanie;
    int opoznienie;
    double cena;
    int ilosc;
    double podwyzka;
public:
    //przeciazone operatory
    Produkt &operator=(PamiecRam *p_in);
    PamiecRam &operator+(double &z);
    friend ostream &operator<<(ostream &os, PamiecRam *ref);
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
    PamiecRam();
    PamiecRam(PamiecRam *kopiowany);
    PamiecRam(string n, string pr, string r, string s, int p, int t, int o, double c, int il);
    virtual ~PamiecRam();
};

#endif // PAMIECRAM_H
