#include <iostream>

using namespace std;

int wyszukiwanieBinarne(int tablica[], int lewy, int prawy, int klucz) {
    while (lewy <= prawy) {
        int srodek = lewy + (prawy - lewy) / 2;
        if (tablica[srodek] == klucz) {
            return srodek;
        }
        if (tablica[srodek] < klucz) {
            lewy = srodek + 1;
        } else {
            prawy = srodek - 1;
        }
    }
    return -1;
}

int main() {
    int rozmiar = 5;
    int klucz_1 = 5;
    int klucz_2 = 33;
    int tablica[] = {1, 2, 3, 4, 5};

    int wynik = wyszukiwanieBinarne(tablica, 0, rozmiar - 1, klucz_1);

    cout << "W tablicy klucz o wartości: " << klucz_1 << " znajduje się pod indeksem: " << wynik << endl;

    wynik = wyszukiwanieBinarne(tablica, 0, rozmiar - 1, klucz_2);
    cout << "W tablicy klucz o wartości: " << klucz_2 << " znajduje się pod indeksem: " << wynik << endl;

    return 0;
}
