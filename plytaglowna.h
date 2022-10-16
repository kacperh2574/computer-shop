#ifndef PLYTAGLOWNA_H
#define PLYTAGLOWNA_H
#include "produkt.h"
#include <iostream>
#include <vector>
using namespace std;

class PlytaGlowna: public Produkt
{
    string nazwa;
    string producent;
    string gniazdoCPU;
    string chipset;
    string standardRAM;
    vector<string> PCIe;
    vector<string> obslugiwaneCPU;
    int gniazdaRAM;
    double cena;
    int ilosc;
public:
    //przeciazone operatory
    Produkt &operator=(PlytaGlowna *p_in);
    PlytaGlowna &operator+(double &z);
    friend ostream &operator<<(ostream &os, PlytaGlowna *ref);
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
    PlytaGlowna();
    PlytaGlowna(PlytaGlowna *kopiowany);
    PlytaGlowna(string n, string pr, string gc, string ch, string s, vector<string> &p, vector<string> &o, int gr, double c, int il);
    virtual ~PlytaGlowna();
};

#endif // PLYTAGLOWNA_H
