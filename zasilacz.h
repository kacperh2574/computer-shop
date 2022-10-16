#ifndef ZASILACZ_H
#define ZASILACZ_H
#include "produkt.h"
#include <iostream>
#include <vector>
using namespace std;

class Zasilacz: public Produkt
{
    string nazwa;
    string producent;
    string standard;
    string certyfikat;
    string chlodzenie;
    vector<string> wtyczki;
    int moc;
    double cena;
    int ilosc;
    double podwyzka;
public:
    //przeciazone operatory
    Produkt &operator=(Zasilacz *p_in);
    Zasilacz &operator+(double &z);
    friend ostream &operator<<(ostream &os, Zasilacz *ref);
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
    Zasilacz();
    Zasilacz(Zasilacz *kopiowany);
    Zasilacz(string n, string pr, string s, string cr, string ch, vector<string> &w, int m, double ce, int il);
    virtual ~Zasilacz();
};

#endif // ZASILACZ_H
