#include <iostream>
#include <cmath>

using namespace std;

int wyszukiwanieSkokowe(int tablica[], int rozmiar, int klucz) {
    int skok = sqrt(rozmiar);
    int poprzedni = 0;
    while (tablica[min(skok, rozmiar) - 1] < klucz) {
        poprzedni = skok;
        skok += sqrt(rozmiar);
        if (poprzedni >= rozmiar) {
            return -1;
        }
    }

    while (tablica[poprzedni] < klucz) {
        poprzedni++;
        if (poprzedni == min(skok, rozmiar)) {
            return -1;
        }
    }

    if (tablica[poprzedni] == klucz) {
        return poprzedni;
    }

    return -1;
}

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