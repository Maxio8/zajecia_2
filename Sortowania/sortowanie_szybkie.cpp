#include <iostream>

using namespace std;

int podzial(int tablica[], int lewy, int prawy) {
    int pivot = tablica[prawy];
    int i = lewy - 1;
    for (int j = lewy; j <= prawy - 1; j++) {
        if (tablica[j] < pivot) {
            i++;
            swap(tablica[i], tablica[j]);
        }
    }
    swap(tablica[i + 1], tablica[prawy]);
    return i + 1;
}

void sortowanieSzybkie(int tablica[], int lewy, int prawy) {
    if (lewy < prawy) {
        int pi = podzial(tablica, lewy, prawy);
        sortowanieSzybkie(tablica, lewy, pi - 1);
        sortowanieSzybkie(tablica, pi + 1, prawy);
    }
}

int main() {
    int tablica[] = {12, 34, 25, 12, 345, 11, 14};
    int n = sizeof(tablica)/sizeof(tablica[0]);
    sortowanieSzybkie(tablica, 0, n - 1);
    cout << "Posortowana tablica: \n";
    for (int i = 0; i < n; i++)
        cout << tablica[i] << " ";
    return 0;
}
