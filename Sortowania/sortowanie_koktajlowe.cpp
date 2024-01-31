#include <iostream>

using namespace std;

void sortowanieKoktajlowe(int tablica[], int n) {
    bool zamieniono = true;
    int poczatek = 0;
    int koniec = n - 1;

    while (zamieniono) {
        zamieniono = false;
        for (int i = poczatek; i < koniec; ++i) {
            if (tablica[i] > tablica[i + 1]) {
                swap(tablica[i], tablica[i + 1]);
                zamieniono = true;
            }
        }
        if (!zamieniono) break;
        zamieniono = false;
        --koniec;
        for (int i = koniec - 1; i >= poczatek; --i) {
            if (tablica[i] > tablica[i + 1]) {
                swap(tablica[i], tablica[i + 1]);
                zamieniono = true;
            }
        }
        ++poczatek;
    }
}

int main() {
    int tablica[] = {6454, 3344, 25123, 11232, 2572, 1241, 190};
    int n = sizeof(tablica)/sizeof(tablica[0]);
    sortowanieKoktajlowe(tablica, n);
    cout << "Posortowana tablica: \n";
    for (int i=0; i < n; i++)
        cout << tablica[i] << " ";
    return 0;
}
