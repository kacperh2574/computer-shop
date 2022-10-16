#ifndef KOSZYK_H
#define KOSZYK_H
#include <produkt.h>
#include "procesor.h"
#include <vector>
#include <memory>
#include <iostream>
using namespace std;

class Koszyk
{
    friend class Asortyment;
    vector<Produkt*> dodane;
public:
    int get_ilosc();
    void set_ilosc (int i);
    string get_nazwa ();
    void wypisz();
    Koszyk();
};

#endif // KOSZYK_H
