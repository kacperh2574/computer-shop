#ifndef PROCESOR_H
#define PROCESOR_H
#include "produkt.h"
#include <iostream>
using namespace std;

class Procesor: public Produkt
{    
    string nazwa;
    string producent;
    string typ;
    string seria;
    string gniazdo;
    int taktowanie;
    int takt_turbo;
    int rdzenie;
    bool OC;
    double cena;
    int ilosc;
    double podwyzka;
public:
    //przeciazone operatory
    Produkt &operator=(Procesor *p_in);
    Procesor &operator+(double &z);
    friend ostream &operator<<(ostream &os, Procesor *ref);
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
    Procesor();
    Procesor(Procesor *kopiowany);
    Procesor(string n, string pr, string ty, string s, string g, int ta, int tt, int r, bool oc, double c, int il);
    virtual ~Procesor();
};

#endif // PROCESOR_H
