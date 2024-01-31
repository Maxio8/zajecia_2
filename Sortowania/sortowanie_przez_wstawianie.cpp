#include <iostream>

using namespace std;

void sortowaniePrzezWstawianie(int tablica[], int n) {
    int i, klucz, j;
    for (i = 1; i < n; i++) {
        klucz = tablica[i];
        j = i - 1;

        while (j >= 0 && tablica[j] > klucz) {
            tablica[j + 1] = tablica[j];
            j = j - 1;
        }
        tablica[j + 1] = klucz;
    }
}

int main() {
    int tablica[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(tablica)/sizeof(tablica[0]);
    sortowaniePrzezWstawianie(tablica, n);
    cout << "Posortowana tablica: \n";
    for (int i = 0; i < n; i++)
        cout << tablica[i] << " ";
    return 0;
}
