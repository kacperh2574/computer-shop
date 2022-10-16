#ifndef DYSK_H
#define DYSK_H
#include "produkt.h"
#include <iostream>
using namespace std;

class Dysk: public Produkt
{
    string nazwa;
    string producent;
    string rodzaj;
    string interfejs;
    string format;
    int pojemnosc;
    int pred_zapisu;
    int pred_odczytu;
    double cena;
    int ilosc;
    double podwyzka;
public:
    //przeciazone operatory
    Produkt &operator=(Dysk *p_in);
    Dysk &operator+(double &z);
    friend ostream &operator<<(ostream &os, Dysk *ref);
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
    Dysk();
    Dysk(Dysk *kopiowany);
    Dysk(string n, string pr, string r, string i, string f, int pj, int pz, int po, double c, int il);
    virtual ~Dysk();
};

#endif // DYSK_H
