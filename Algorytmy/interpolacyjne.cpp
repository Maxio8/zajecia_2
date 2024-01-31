#include <iostream>

using namespace std;

int wyszukiwanieInterpolacyjne(int tablica[], int rozmiar, int klucz) {
    int lewy = 0, prawy = rozmiar - 1;
    while (lewy <= prawy && klucz >= tablica[lewy] && klucz <= tablica[prawy]) {
        int pos = lewy + ((double)(prawy - lewy) / (tablica[prawy] - tablica[lewy])) * (klucz - tablica[lewy]);
        if (tablica[pos] == klucz) {
            return pos;
        }
        if (tablica[pos] < klucz) {
            lewy = pos + 1;
        } else {
            prawy = pos - 1;
        }
    }
    return -1;
}

int main() {
    int rozmiar = 5;
    int klucz_1 = 5;
    int klucz_2 = 33;
    int tablica[] = {1, 2, 3, 4, 5};

    int wynik = wyszukiwanieInterpolacyjne(tablica, rozmiar, klucz_1);

    cout << "W tablicy klucz o wartości: " << klucz_1 << " znajduje się pod indeksem: " << wynik << endl;

    wynik = wyszukiwanieInterpolacyjne(tablica, rozmiar, klucz_2);
    cout << "W tablicy klucz o wartości: " << klucz_2 << " znajduje się pod indeksem: " << wynik << endl;

    return 0;
}
