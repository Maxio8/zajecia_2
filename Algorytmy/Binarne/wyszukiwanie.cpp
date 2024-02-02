#include "wyszukiwanie.hpp"

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
