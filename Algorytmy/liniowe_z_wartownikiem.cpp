#include <iostream>

using namespace std;

int wyszukiwanieLinioweZWartownikiem(int tablica[], int rozmiar, int klucz) {
    int ostatni = tablica[rozmiar - 1];
    tablica[rozmiar - 1] = klucz; 

    int i = 0;
    while (tablica[i] != klucz) {
        i++;
    }

    tablica[rozmiar - 1] = ostatni; 
    if (i < rozmiar - 1 || tablica[rozmiar - 1] == klucz) {
        return i;
    }
    return -1;
}

int main() {
    int rozmiar = 5;
    int klucz_1 = 5;
    int klucz_2 = 33;
    int tablica[] = {1, 2, 3, 4, 5};

    int wynik = wyszukiwanieLinioweZWartownikiem(tablica, rozmiar, klucz_1);

    cout << "W tablicy klucz o wartości: " << klucz_1 << " znajduje się pod indeksem: " << wynik << endl;

    wynik = wyszukiwanieLinioweZWartownikiem(tablica, rozmiar, klucz_2);
    cout << "W tablicy klucz o wartości: " << klucz_2 << " znajduje się pod indeksem: " << wynik << endl;

    return 0;
}
