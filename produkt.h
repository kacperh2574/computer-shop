#ifndef PRODUKT_H
#define PRODUKT_H
#include <string>
using namespace std;

class Produkt
{
public:
    virtual string get_nazwa() = 0;
    virtual double get_cena() = 0;
    virtual int get_ilosc() = 0;
    virtual void set_ilosc(int i) = 0;
    virtual void zmien_ilosc(int z) = 0;
    virtual void dobra_zmiana(double zw) = 0;
    virtual void wypisz() = 0;
    virtual ~Produkt() = 0;
};

#endif // PRODUKT_H
