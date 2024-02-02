#include "wyszukiwanie.hpp"

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
