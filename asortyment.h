#ifndef ASORTYMENT_H
#define ASORTYMENT_H
#include "produkt.h"
#include "procesor.h"
#include "pamiecram.h"
#include "kartagraficzna.h"
#include "plytaglowna.h"
#include "zasilacz.h"
#include "chlodzenie.h"
#include "dysk.h"
#include "koszyk.h"
#include <vector>
using namespace std;

class Asortyment
{
    vector<Procesor*> procesory;
    vector<PamiecRam*> pamieci_ram;
    vector<KartaGraficzna*> karty_graficzne;
    vector<PlytaGlowna*> plyty_glowne;
    vector<Zasilacz*> zasilacze;
    vector<Chlodzenie*> chlodzenia;
    vector<Dysk*> dyski;
public:
    void szukaj(int &k, Koszyk &kosz, Produkt *ptr);
    Produkt* pokaz_procesory(Produkt *p);
    Produkt* pokaz_pamieci(Produkt *p);
    Produkt* pokaz_karty(Produkt *p);
    Produkt* pokaz_plyty(Produkt *p);
    Produkt* pokaz_zasilacze(Produkt *p);
    Produkt* pokaz_chlodzenia(Produkt *p);
    Produkt* pokaz_dyski(Produkt *p);
    void zwieksz_cene(int o);
    Asortyment();
};

#endif // ASORTYMENT_H
