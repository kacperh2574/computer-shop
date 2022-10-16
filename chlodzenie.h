#ifndef CHLODZENIE_H
#define CHLODZENIE_H
#include "produkt.h"
#include <iostream>
using namespace std;

class Chlodzenie: public Produkt
{
    string nazwa;
    string producent;
    string przeznaczenie;
    int obroty;
    int wymiary;
    int glosnosc;
    double cena;
    int ilosc;
    double podwyzka;
public:
    //przeciazone operatory
    Produkt &operator=(Chlodzenie *p_in);
    Chlodzenie &operator+(double &z);
    friend ostream &operator<<(ostream &os, Chlodzenie *ref);
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
    Chlodzenie();
    Chlodzenie(Chlodzenie *kopiowany);
    Chlodzenie(string n, string pr, string p, int o, int w, int g, double c, int il);
    virtual ~Chlodzenie();
};

#endif // CHLODZENIE_H
