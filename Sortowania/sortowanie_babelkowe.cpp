#include <iostream>

using namespace std;

void sortowanieBabelkowe(int tablica[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (tablica[j] > tablica[j+1]) {
                swap(tablica[j], tablica[j+1]);
            }
        }
    }
}

int main() {
    int tablica[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(tablica)/sizeof(tablica[0]);
    sortowanieBabelkowe(tablica, n);
    cout << "Posortowana tablica: \n";
    for (int i=0; i < n; i++)
        cout << tablica[i] << " ";
    return 0;
}
