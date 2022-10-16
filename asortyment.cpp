#include "asortyment.h"

Asortyment::Asortyment()    {

      Procesor *procesor1 = new Procesor("Intel Core i3 9100", "Intel", "Intel Core i3", "i3 9XXX", "Socket 1151", 3600, 4200, 4, false, 549, 17);
      Procesor *procesor2 = new Procesor("Intel Core i5 9600K", "Intel", "Intel Core i5", "i5 9XXX", "Socket 1151", 3700, 4600, 6, true, 999, 25);
      Procesor *procesor3 = new Procesor("Intel Core i7 9700K", "Intel", "Intel Core i7", "i7 9XXX", "Socket 1151", 3600, 4900, 8, true, 1799, 21);
      Procesor *procesor4 = new Procesor("AMD Ryzen 5 2600X", "AMD", "AMD Ryzen 5", "AMD Ryzen 5", "Socket AM4", 3600, 4200, 6, true, 749, 22);
      Procesor *procesor5 = new Procesor("AMD Ryzen 7 3700X", "AMD", "AMD Ryzen 7", "AMD Ryzen 7 - seria 3", "Socket AM4", 3600, 4400, 8, true, 1499, 17);
      procesory.push_back(procesor1);
      procesory.push_back(procesor2);
      procesory.push_back(procesor3);
      procesory.push_back(procesor4);
      procesory.push_back(procesor5);

      PamiecRam *pamiec_ram1 = new PamiecRam("HyperX Fury Black", "Kingston", "DIMM (do PC)", "DDR4", 8, 2666, 16, 199, 13);
      PamiecRam *pamiec_ram2 = new PamiecRam("HyperX Impact", "Kingston", "SO-DIMM (do laptopów)", "DDR4", 16, 2400, 14, 329, 13);
      PamiecRam *pamiec_ram3 = new PamiecRam("Corsair Vengeance LPX", "Corsair", "DIMM (do PC)", "DDR4", 16, 3200, 16, 379, 16);
      PamiecRam *pamiec_ram4 = new PamiecRam("GOODRAM IRDM X", "GOODRAM", "DIMM (do PC)", "DDR4", 16, 3000, 16, 349, 10);
      PamiecRam *pamiec_ram5 = new PamiecRam("Patriot Viper 3", "Patriot", "DIMM (do PC)", "DDR3", 16, 1600, 9, 339, 8);
      pamieci_ram.push_back(pamiec_ram1);
      pamieci_ram.push_back(pamiec_ram2);
      pamieci_ram.push_back(pamiec_ram3);
      pamieci_ram.push_back(pamiec_ram4);
      pamieci_ram.push_back(pamiec_ram5);

      KartaGraficzna *karta_graficzna1 = new KartaGraficzna("Gigabyte GeForce GTX 1660 OC", "Gigabyte", "PCI-Express x16", "GeForce GTX 1660", "GDDR5", 6, 8000, 1830, 1099, 9);
      KartaGraficzna *karta_graficzna2 = new KartaGraficzna("ASUS GeForce RTX 2060", "ASUS", "PCI-Express16", "GeForce RTX 2060", "GDDR6", 8, 14000, 4700, 2399, 13);
      KartaGraficzna *karta_graficzna3 = new KartaGraficzna("MSI GeForce GTX 1050ti", "NVIDIA", "PCI-Express16", "GeForce GTX 1050Ti", "GDDR5", 4, 7008, 1354, 769, 17);
      KartaGraficzna *karta_graficzna4 = new KartaGraficzna("ASUS Radeon RX 570", "AMD", "PCI-Express16", "Radeon RX 570", "GDDR5", 8, 7000, 1168, 729, 15);
      KartaGraficzna *karta_graficzna5 = new KartaGraficzna("MSI Radeon RX 5600", "MSI", "PCI-Express16", "Radeon RX 5600", "GDDR6", 6, 12000, 1850, 1499, 9);
      karty_graficzne.push_back(karta_graficzna1);
      karty_graficzne.push_back(karta_graficzna2);
      karty_graficzne.push_back(karta_graficzna3);
      karty_graficzne.push_back(karta_graficzna4);
      karty_graficzne.push_back(karta_graficzna5);

      vector<string> o1 {"AMD Ryzen 3", "AMD Ryzen 5", "AMD Ryzen 7", "AMD Ryzen 9"};
      vector<string> p1 {"1 x PCI-Express x16", "2 x PCI-Express x1"};
      PlytaGlowna *plyta_glowna1 = new PlytaGlowna("MSI B450M PRO-M2", "MSI", "Socket AM4", "AMD B450", "DDR4", o1, p1, 2, 379, 9);
      vector<string> o2 {"Intel Core i3-8XXX", "Intel Core i3-9XXX", "Intel Core i5-8XXX", "Intel Core i5-9XXX", "Intel Core i7-8XXX", "Intel Core i7-9XXX", "Intel Core i9-9XXX"};
      vector<string> p2 {"3 x PCI-Express x16", "3 x PCI-Express x1"};
      PlytaGlowna *plyta_glowna2 = new PlytaGlowna("Gigabyte Z390 UD", "Gigabyte", "Socket 1151", "Intel Z390", "DDR4", o2, p2, 4, 579, 13);
      vector<string> o3 {"AMD APU", "AMD Ryzen 3", "AMD Ryzen 5", "AMD Ryzen 7"};
      vector<string> p3 {"1 x PCI-Express x16", "2 x PCI-Express x1"};
      PlytaGlowna *plyta_glowna3 = new PlytaGlowna("ASUS PRIME A320M-E", "ASUS", "Socket AM4", "AMD A320", "DDR4", o3, p3, 2, 299, 18);
      vector<string> o4 {"Intel Core i3-8XXX", "Intel Core i3-9XXX", "Intel Core i5-8XXX", "Intel Core i5-9XXX", "Intel Core i7-8XXX", "Intel Core i7-9XXX", "Intel Core i9-9XXX"};
      vector<string> p4 {"1 x PCI-Express x16", "2 x PCI-Express x1"};
      PlytaGlowna *plyta_glowna4 = new PlytaGlowna("ASUS PRIME H310M-E", "ASUS", "Socket 1151", "Intel H310", "DDR4", o4, p4, 2, 299, 14);
      vector<string> o5 {"AMD Ryzen 3", "AMD Ryzen 5", "AMD Ryzen 7", "AMD Ryzen 9"};
      vector<string> p5 {"2 x PCI-Express x16", "4 x PCI-Express x1"};
      PlytaGlowna *plyta_glowna5 = new PlytaGlowna("ASRock X370 Pro4", "ASRock", "Socket AM4", "AMD X370", "DDR4", o4, p4, 4, 389, 10);
      plyty_glowne.push_back(plyta_glowna1);
      plyty_glowne.push_back(plyta_glowna2);
      plyty_glowne.push_back(plyta_glowna3);
      plyty_glowne.push_back(plyta_glowna4);
      plyty_glowne.push_back(plyta_glowna5);

      vector<string> w1 {"1 x 4/8 EPS 12V", "1 x Floppy", "2 x 4-pin Molex", "2 x 6/8-pin PEG", "7 x SATA"};
      Zasilacz *zasilacz1 = new Zasilacz("Corsair VS 550W Builder", "Corsair", "ATX", "80 Plus", "wentylator", w1, 550, 249, 19);
      vector<string> w2 {"1 x 4/8 EPS 12V", "1 x Floppy", "3 x 4-pin Molex", "4 x 6-pin PEG", "6 x SATA", "ATX 20pin", "ATX 24pin"};
      Zasilacz *zasilacz2 = new Zasilacz("be quiet! Pure Power 11", "be quiet!", "ATX", "80 Plus Gold", "wentylator", w2, 600, 479, 10);
      vector<string> w3 {"1 x 4/8 EPS 12V", "2 x 4-pin Molex", "2 x 6/8-pin PEG", "7 x SATA", "ATX 24pin"};
      Zasilacz *zasilacz3 = new Zasilacz("SilentiumPC Vero L3", "SilentiumPC", "ATX", "80 Plus Bronze", "wentylator", w3, 500, 229, 12);
      vector<string> w4 {"2 x 4-pin Molex", "2 x 6/8-pin PEG", "2 x 8-pin EPS", "7 x SATA", "ATX 24pin"};
      Zasilacz *zasilacz4 = new Zasilacz("SilentiumPC Elementum E2", "SilentiumPC", "ATX", "80 Plus", "wentylator", w4, 550, 189, 11);
      vector<string> w5 {"2 x 4/8 EPS 12V", "4 x 4-pin Molex", "4 x 6/8-pin PEG", "8 x SATA, ATX 24pin"};
      Zasilacz *zasilacz5 = new Zasilacz("Asus ROG STRIX", "Asus", "ATX", "80 Plus Gold", "wentylator", w5, 750, 699, 5);
      zasilacze.push_back(zasilacz1);
      zasilacze.push_back(zasilacz2);
      zasilacze.push_back(zasilacz3);
      zasilacze.push_back(zasilacz4);
      zasilacze.push_back(zasilacz5);

      Chlodzenie *chlodzenie1 = new Chlodzenie("SilentiumPC Zephyr 120", "Silentium PC", "do obudowy", 1100, 140, 14, 24.90, 14);
      Chlodzenie *chlodzenie2 = new Chlodzenie("Noctua NF-A14 PWM", "Noctua", "do obudowy", 1500, 140, 26, 109.90, 20);
      Chlodzenie *chlodzenie3 = new Chlodzenie("Corsair A500", "Corsair", "do procesora", 2400, 120, 36, 479.90, 22);
      Chlodzenie *chlodzenie4 = new Chlodzenie("Cooler Master Hyper EVO", "Cooler Master", "do procesora", 1600, 120, 31, 159.90, 7);
      Chlodzenie *chlodzenie5 = new Chlodzenie("MSI Core Frozr S", "MSI", "do procesora", 1800, 120, 34, 179.9, 15);
      chlodzenia.push_back(chlodzenie1);
      chlodzenia.push_back(chlodzenie2);
      chlodzenia.push_back(chlodzenie3);
      chlodzenia.push_back(chlodzenie4);
      chlodzenia.push_back(chlodzenie5);

      Dysk *dysk1 = new Dysk("Samsung 970 Evo Plus", "Samsung", "SSD", "M.2 (PCIe Gen 3.0 x4)", "M.2 2280", 500, 3200, 3500, 579.90, 9);
      Dysk *dysk2 = new Dysk("GOODRAM CX400", "GOODRAM", "SSD", "Serial ATA III", "2.5 cala", 256, 490, 550, 579.90, 14);
      Dysk *dysk3 = new Dysk("Kingston SSD A400", "Kingston", "SSD", "Serial ATA III", "2.5 cala", 480, 450, 500, 259.90, 15);
      Dysk *dysk4 = new Dysk("Seagate BarraCuda", "Seagate", "HDD", "Serial ATA III", "3.5 cala", 1000, 130, 155, 299.90, 4);
      Dysk *dysk5 = new Dysk("ADATA SU75", "Adata", "SSD", "Serial ATA III", "2.5 cala", 512, 520, 550, 339.90, 10);
      dyski.push_back(dysk1);
      dyski.push_back(dysk2);
      dyski.push_back(dysk3);
      dyski.push_back(dysk4);
      dyski.push_back(dysk5);
}


void Asortyment::szukaj(int &k, Koszyk &kosz, Produkt *ptr)   {


        if (k == 1) {
            cout << "--- PROCESORY ---" << endl;
            ptr = pokaz_procesory(ptr);
            kosz.dodane.push_back(ptr);
            cout << "W koszu: " << kosz.dodane.back()->get_nazwa() << ", ilosc: " << kosz.dodane.back()->get_ilosc() << endl;
            cout << "Do zaplaty: " << kosz.dodane.back()->get_cena() * kosz.dodane.back()->get_ilosc() << endl;
            delete ptr;
        }
        else if (k == 2) {
            cout << "--- PAMIECI RAM ---" << endl;
            ptr = pokaz_pamieci(ptr);
            kosz.dodane.push_back(ptr);
            cout << "W koszu: " << kosz.dodane.back()->get_nazwa() << ", ilosc: " << kosz.dodane.back()->get_ilosc() << endl;
            cout << "Do zaplaty: " << kosz.dodane.back()->get_cena() * kosz.dodane.back()->get_ilosc() << endl;
            delete ptr;
        }
        else if (k == 3) {
            cout << "--- KARTY GRAFICZNE ---" << endl;
            ptr = pokaz_karty(ptr);
            kosz.dodane.push_back(ptr);
            cout << "W koszu: " << kosz.dodane.back()->get_nazwa() << ", ilosc: " << kosz.dodane.back()->get_ilosc() << endl;
            cout << "Do zaplaty: " << kosz.dodane.back()->get_cena() * kosz.dodane.back()->get_ilosc() << endl;
            delete ptr;
        }
        else if (k == 4) {
            cout << "--- PLYTY GLOWNE ---" << endl;
            ptr = pokaz_plyty(ptr);
            kosz.dodane.push_back(ptr);
            cout << "W koszu: " << kosz.dodane.back()->get_nazwa() << ", ilosc: " << kosz.dodane.back()->get_ilosc() << endl;
            cout << "Do zaplaty: " << kosz.dodane.back()->get_cena() * kosz.dodane.back()->get_ilosc() << endl;
            delete ptr;
        }
        else if (k == 5) {
            cout << "--- ZASILACZE --" << endl;
            ptr = pokaz_zasilacze(ptr);
            kosz.dodane.push_back(ptr);
            cout << "W koszu: " << kosz.dodane.back()->get_nazwa() << ", ilosc: " << kosz.dodane.back()->get_ilosc() << endl;
            cout << "Do zaplaty: " << kosz.dodane.back()->get_cena() * kosz.dodane.back()->get_ilosc() << endl;
            delete ptr;
        }
        else if (k == 6) {
            cout << "--- CHLODZENIA ---" << endl;
            ptr = pokaz_chlodzenia(ptr);
            kosz.dodane.push_back(ptr);
            cout << "W koszu: " << kosz.dodane.back()->get_nazwa() << ", ilosc: " << kosz.dodane.back()->get_ilosc() << endl;
            cout << "Do zaplaty: " << kosz.dodane.back()->get_cena() * kosz.dodane.back()->get_ilosc() << endl;
            delete ptr;
        }
        else if (k == 7) {
            cout << "--- DYSKI ---" << endl;
            ptr = pokaz_dyski(ptr);
            kosz.dodane.push_back(ptr);
            cout << "W koszu: " << kosz.dodane.back()->get_nazwa() << ", ilosc: " << kosz.dodane.back()->get_ilosc() << endl;
            cout << "Do zaplaty: " << kosz.dodane.back()->get_cena() * kosz.dodane.back()->get_ilosc() << endl;
            delete ptr;
        }

}


Produkt *Asortyment::pokaz_procesory(Produkt *akt)  {

    cout << "--------------- PROCESORY ---------------" << endl;
    for (size_t i {0}; i < procesory.size(); ++i)   {
        procesory.at(i)->wypisz();
        cout << endl;
    }

    int wybor;
    int liczba;

    cout << "Ktory produkt chcesz dodac do koszyka? " << endl;
    for (size_t i {0}; i < procesory.size(); ++i)   {
        cout << i+1 << ". " << procesory.at(i) << ", ilosc " << procesory.at(i)->get_ilosc() << endl;
    }
    cin >> wybor;

    cout << "Podaj ilosc: ";
    cin >> liczba;

    akt = new Procesor(procesory.at(wybor-1));
    akt->set_ilosc(liczba);
    procesory.at(wybor-1)->zmien_ilosc(liczba);
    return akt;
}

Produkt *Asortyment::pokaz_pamieci(Produkt *akt)   {

    cout << "-------------- PAMIECI RAM --------------" << endl;
    for (size_t i {0}; i < pamieci_ram.size(); ++i)   {
        pamieci_ram.at(i)->wypisz();
        cout << endl;
    }

    int wybor;
    int liczba;

    cout << "Ktory produkt chcesz dodac do koszyka? " << endl;
    for (size_t i {0}; i < pamieci_ram.size(); ++i)   {
        cout << i+1 << ". " << pamieci_ram.at(i) << ", ilosc " << pamieci_ram.at(i)->get_ilosc() << endl;
    }
    cin >> wybor;

    cout << "Podaj ilosc: ";
    cin >> liczba;

    akt = new PamiecRam(pamieci_ram.at(wybor-1));
    akt->set_ilosc(liczba);
    pamieci_ram.at(wybor-1)->zmien_ilosc(liczba);
    return akt;

}

Produkt *Asortyment::pokaz_karty(Produkt *akt)    {

    cout << "------------ KARTY GRAFICZNE ------------" << endl;
    for (size_t i {0}; i < karty_graficzne.size(); ++i)   {
        karty_graficzne.at(i)->wypisz();
        cout << endl;
    }

    int wybor;
    int liczba;

    cout << "Ktory produkt chcesz dodac do koszyka? " << endl;
    for (size_t i {0}; i < karty_graficzne.size(); ++i)   {
        cout << i+1 << ". " << karty_graficzne.at(i) << ", ilosc " << karty_graficzne.at(i)->get_ilosc() << endl;
    }
    cin >> wybor;

    cout << "Podaj ilosc: ";
    cin >> liczba;

    akt = new KartaGraficzna(karty_graficzne.at(wybor-1));
    akt->set_ilosc(liczba);
    karty_graficzne.at(wybor-1)->zmien_ilosc(liczba);
    return akt;
}

Produkt *Asortyment::pokaz_plyty(Produkt *akt)  {

    cout << "-------------- PLYTY GLOWNE --------------" << endl;
    for (size_t i {0}; i < plyty_glowne.size(); ++i)   {
        plyty_glowne.at(i)->wypisz();
        cout << endl;
    }

    int wybor;
    int liczba;

    cout << "Ktory produkt chcesz dodac do koszyka? " << endl;
    for (size_t i {0}; i < plyty_glowne.size(); ++i)   {
        cout << i+1 << ". " << plyty_glowne.at(i) << ", ilosc " << plyty_glowne.at(i)->get_ilosc() << endl;
    }
    cin >> wybor;

    cout << "Podaj ilosc: ";
    cin >> liczba;

    akt = new PlytaGlowna(plyty_glowne.at(wybor-1));
    akt->set_ilosc(liczba);
    plyty_glowne.at(wybor-1)->zmien_ilosc(liczba);
    return akt;
}

Produkt *Asortyment::pokaz_zasilacze(Produkt *akt)    {

    cout << "--------------- ZASILACZE ---------------" << endl;
    for (size_t i {0}; i < zasilacze.size(); ++i)   {
        zasilacze.at(i)->wypisz();
        cout << endl;
    }

    int wybor;
    int liczba;

    cout << "Ktory produkt chcesz dodac do koszyka? " << endl;
    for (size_t i {0}; i < zasilacze.size(); ++i)   {
        cout << i+1 << ". " << zasilacze.at(i) << ", ilosc " << zasilacze.at(i)->get_ilosc() << endl;
    }
    cin >> wybor;

    cout << "Podaj ilosc: ";
    cin >> liczba;

    akt = new Zasilacz(zasilacze.at(wybor-1));
    akt->set_ilosc(liczba);
    zasilacze.at(wybor-1)->zmien_ilosc(liczba);
    return akt;
}

Produkt *Asortyment::pokaz_chlodzenia(Produkt *akt)    {

    cout << "--------------- CHLODZENIA ---------------" << endl;
    for (size_t i {0}; i < chlodzenia.size(); ++i)   {
        chlodzenia.at(i)->wypisz();
        cout << endl;
    }

    int wybor;
    int liczba;

    cout << "Ktory produkt chcesz dodac do koszyka? " << endl;
    for (size_t i {0}; i < chlodzenia.size(); ++i)   {
        cout << i+1 << ". " << chlodzenia.at(i) << ", ilosc " << chlodzenia.at(i)->get_ilosc() << endl;
    }
    cin >> wybor;

    cout << "Podaj ilosc: ";
    cin >> liczba;

    akt = new Chlodzenie(chlodzenia.at(wybor-1));
    akt->set_ilosc(liczba);
    chlodzenia.at(wybor-1)->zmien_ilosc(liczba);
    return akt;
}

Produkt *Asortyment::pokaz_dyski(Produkt *akt)    {

    cout << "----------------- DYSKI ------------------" << endl;
    for (size_t i {0}; i < dyski.size(); ++i)   {
        dyski.at(i)->wypisz();
        cout << endl;
    }

    int wybor;
    int liczba;

    cout << "Ktory produkt chcesz dodac do koszyka? " << endl;
    for (size_t i {0}; i < dyski.size(); ++i)   {
        cout << i+1 << ". " << dyski.at(i) << ", ilosc " << chlodzenia.at(i)->get_ilosc() << endl;
    }
    cin >> wybor;

    cout << "Podaj ilosc: ";
    cin >> liczba;

    akt = new Dysk(dyski.at(wybor-1));
    akt->set_ilosc(liczba);
    chlodzenia.at(wybor-1)->zmien_ilosc(liczba);
    return akt;
}

void Asortyment::zwieksz_cene(int o)    {
    if (o == 1) {
        cout << "Ktorego procesora cene zwiekszyc? " << endl;
        for (size_t i {0}; i < procesory.size(); ++i)   {
            cout << i+1 << ". " << procesory.at(i);
            cout << endl;
        }
        int wybor;
        cin >> wybor;
        cout << "O jaka kwote? ";
        int kwota;
        cin >> kwota;
        procesory.at(wybor-1)->dobra_zmiana(kwota);
    }
    else if (o == 2)    {
        cout << "Ktorej pamieci cene zwiekszyc? " << endl;
        for (size_t i {0}; i < pamieci_ram.size(); ++i)   {
            cout << i+1 << ". " << pamieci_ram.at(i);
            cout << endl;
        }
        int wybor;
        cin >> wybor;
        cout << "O jaka kwote? ";
        int kwota;
        cin >> kwota;
        pamieci_ram.at(wybor-1)->dobra_zmiana(kwota);
    }
    else if (o == 3)    {
        cout << "Ktorej karty cene zwiekszyc? " << endl;
        for (size_t i {0}; i < karty_graficzne.size(); ++i)   {
            cout << i+1 << ". " << karty_graficzne.at(i);
            cout << endl;
        }
        int wybor;
        cin >> wybor;
        cout << "O jaka kwote? ";
        int kwota;
        cin >> kwota;
        karty_graficzne.at(wybor-1)->dobra_zmiana(kwota);
    }
    else if (o == 4)    {
        cout << "Ktorej plyty cene zwiekszyc? " << endl;
        for (size_t i {0}; i < plyty_glowne.size(); ++i)   {
            cout << i+1 << ". " << plyty_glowne.at(i);
            cout << endl;
        }
        int wybor;
        cin >> wybor;
        cout << "O jaka kwote? ";
        int kwota;
        cin >> kwota;
        plyty_glowne.at(wybor-1)->dobra_zmiana(kwota);
    }
    else if (o == 5)    {
        cout << "Ktorego zasilacza cene zwiekszyc? " << endl;
        for (size_t i {0}; i < zasilacze.size(); ++i)   {
            cout << i+1 << ". " << zasilacze.at(i);
            cout << endl;
        }
        int wybor;
        cin >> wybor;
        cout << "O jaka kwote? ";
        int kwota;
        cin >> kwota;
        zasilacze.at(wybor-1)->dobra_zmiana(kwota);
    }
    else if (o == 6)    {
        cout << "Ktorego chlodzenia cene zwiekszyc? " << endl;
        for (size_t i {0}; i < chlodzenia.size(); ++i)   {
            cout << i+1 << ". " << chlodzenia.at(i);
            cout << endl;
        }
        int wybor;
        cin >> wybor;
        cout << "O jaka kwote? ";
        int kwota;
        cin >> kwota;
        chlodzenia.at(wybor-1)->dobra_zmiana(kwota);
    }
    else if (o == 7)    {
        cout << "Ktorego dysku cene zwiekszyc? " << endl;
        for (size_t i {0}; i < dyski.size(); ++i)   {
            cout << i+1 << ". " << dyski.at(i);
            cout << endl;
        }
        int wybor;
        cin >> wybor;
        cout << "O jaka kwote? ";
        int kwota;
        cin >> kwota;
        dyski.at(wybor-1)->dobra_zmiana(kwota);
    }
}
