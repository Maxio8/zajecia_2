#include <iostream>

using namespace std;

int wyszukiwanieLiniowe(int tablica[], int rozmiar, int klucz) {
    for (int i = 0; i < rozmiar; ++i) {
        if (tablica[i] == klucz) {
            return i;
        }
    }
    return -1;
}

int main() {
    int rozmiar = 5;
    int klucz_1 = 5;
    int klucz_2 = 33;
    int tablica[] = {1, 2, 3, 4, 5};

    int wynik = wyszukiwanieLiniowe(tablica, rozmiar, klucz_1);

    cout << "W tablicy klucz o wartości: " << klucz_1 << " znajduje się pod indeksem: " << wynik << endl;

    wynik = wyszukiwanieLiniowe(tablica, rozmiar, klucz_2);
    cout << "W tablicy klucz o wartości: " << klucz_2 << " znajduje się pod indeksem: " << wynik << endl;

    return 0;
}
