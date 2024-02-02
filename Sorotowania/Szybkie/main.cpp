#include <iostream>
#include "sortowanie.hpp"

using namespace std;

int main() {
    int tablica[] = {12, 34, 25, 12, 345, 11, 14};
    int n = sizeof(tablica)/sizeof(tablica[0]);
    sortowanieSzybkie(tablica, 0, n - 1);
    cout << "Posortowana tablica: \n";
    for (int i = 0; i < n; i++)
        cout << tablica[i] << " ";
    return 0;
}
