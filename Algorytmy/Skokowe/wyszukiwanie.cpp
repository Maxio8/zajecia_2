#include "wyszukiwanie.hpp"
#include <cmath>
#include <algorithm> 

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
