#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_SIZE = 6;

void wypelnijTab(int tablica[], int rozmiar) {
    cout << "Wprowadz " << rozmiar << " liczb do tablicy:" << endl;
    for (int i = 0; i < rozmiar; ++i) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> tablica[i];
    }
}

void drukujTab(int tablica[], int rozmiar) {
    for_each(tablica, tablica + rozmiar, [](int x){ cout << x << " "; });
    cout << endl;
}

void sortowanie_przez_scalanie(int tablica[], int poczatek, int koniec) {
    if (poczatek < koniec) {
        int srodek = poczatek + (koniec - poczatek) / 2;
        sortowanie_przez_scalanie(tablica, poczatek, srodek);
        sortowanie_przez_scalanie(tablica, srodek + 1, koniec);
    }
}

int main() {
    int tablica[MAX_SIZE];
    int n = MAX_SIZE;

    wypelnijTab(tablica, n);
    cout << "Tablica przed sortowaniem przez scalanie:" << endl;
    drukujTab(tablica, n);

    sortowanie_przez_scalanie(tablica, 0, n - 1);

    cout << "Tablica po sortowaniu przez scalanie:" << endl;
    drukujTab(tablica, n);

    return 0;
}
