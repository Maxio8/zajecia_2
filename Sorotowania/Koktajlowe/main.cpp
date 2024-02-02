#include <iostream>
#include "sortowanie.hpp"

using namespace std;

int main() {
    int tablica[] = {6454, 3344, 25123, 11232, 2572, 1241, 190};
    int n = sizeof(tablica) / sizeof(tablica[0]);
    sortowanieKoktajlowe(tablica, n);
    cout << "Posortowana tablica: \n";
    for (int i = 0; i < n; i++)
        cout << tablica[i] << " ";
    return 0;
}
