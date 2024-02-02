#include "wyszukiwanie.hpp"

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
