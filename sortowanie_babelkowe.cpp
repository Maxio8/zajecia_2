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

void sortowanie_babelkowe(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar - 1; ++i) {
        for (int j = 0; j < rozmiar - i - 1; ++j) {
            if (tablica[j] > tablica[j + 1]) {
                swap(tablica[j], tablica[j + 1]);

                cout << "Krok " << i + 1 << ": ";
                drukujTab(tablica, rozmiar);
            }
        }
    }
}

int main() {
    int tablica[MAX_SIZE];
    int n = MAX_SIZE;

    wypelnijTab(tablica, n);
    cout << "Tablica przed sortowaniem bąbelkowym:" << endl;
    drukujTab(tablica, n);

    sortowanie_babelkowe(tablica, n);

    cout << "Tablica po sortowaniu bąbelkowym:" << endl;
    drukujTab(tablica, n);

    return 0;
}
