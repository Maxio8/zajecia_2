#include <iostream>
#include "wyszukiwanie.hpp"

using namespace std;

int main() {
    int rozmiar = 5;
    int klucz_1 = 5;
    int klucz_2 = 33;
    int tablica[] = {1, 2, 3, 4, 5};

    int wynik = wyszukiwanieSkokowe(tablica, rozmiar, klucz_1);

    cout << "W tablicy klucz o wartości: " << klucz_1 << " znajduje się pod indeksem: " << wynik << endl;

    wynik = wyszukiwanieSkokowe(tablica, rozmiar, klucz_2);
    cout << "W tablicy klucz o wartości: " << klucz_2 << " znajduje się pod indeksem: " << wynik << endl;

    return 0;
}
