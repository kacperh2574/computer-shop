#include <iostream>
#include "produkt.h"
#include "asortyment.h"
#include <vector>
#include <iomanip>

using namespace std;

int menu(int m);
void logowanie();
int kategorie(int k);

int main()
{
    for(;;) {
        cout << fixed << setprecision(2);
        Asortyment sklep;
        Koszyk kosz;
        Produkt *aktualny {nullptr};
        int wybor{0};
        wybor = menu(wybor);
        if (wybor == 1) {
            int k{0};
            k = kategorie(k);
            sklep.szukaj(k, kosz, aktualny);
        }
        else if (wybor == 2)    {
            int k{0};
            k = kategorie(k);
            sklep.zwieksz_cene(k);
        }
    }
    return 0;
}

int menu(int w)   {

    cout << "=====================================================================" << endl;
    cout << "Witaj w sklepie z czesciami komputerowymi. Wybierz opcje z menu: " << endl;
    cout << "1. Kup produkt" << endl;
    cout << "2. Zmien cene produktu" << endl;
    cin >> w;
    return w;
}

int kategorie(int k)    {

    cout << "\nWybierz kategorie: " << endl;
    cout << "1. Procesory" << endl;
    cout << "2. Pamiec RAM" << endl;
    cout << "3. Karty graficzne" << endl;
    cout << "4. Plyty glowne" << endl;
    cout << "5. Zasilacze" << endl;
    cout << "6. Chlodzenie" << endl;
    cout << "7. Dyski" << endl;
    cin >> k;
    return k;
}

void logowanie()    {
    cout << "Podaj ";
}

