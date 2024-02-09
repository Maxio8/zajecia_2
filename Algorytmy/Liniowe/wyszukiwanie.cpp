#include "wyszukiwanie.hpp"

int wyszukiwanieLiniowe(int tablica[], int rozmiar, int klucz) {
    for (int i = 0; i < rozmiar; ++i) {
        if (tablica[i] == klucz) {
            return i;
        }
    }
    return -1;
}
