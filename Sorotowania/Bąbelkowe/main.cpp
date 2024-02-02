#include <iostream>
#include "sortowanie.hpp"

using namespace std;

int main() {
    int tablica[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(tablica) / sizeof(tablica[0]);
    sortowanieBabelkowe(tablica, n);
    cout << "Posortowana tablica: \n";
    for (int i = 0; i < n; i++)
        cout << tablica[i] << " ";
    return 0;
}
