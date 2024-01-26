#include <iostream>
#include <vector>
using namespace std;

void sortowaniePrzezWstrzasanie(vector<int>& tablica) {
    int n = tablica.size();
    bool zamiana = true;
    int lewy = 0, prawy = n - 1;

    while (zamiana) {
        zamiana = false;

        for (int i = lewy; i < prawy; i++) {
            if (tablica[i] > tablica[i + 1]) {
                swap(tablica[i], tablica[i + 1]);
                zamiana = true;
            }
        }
        

        if (!zamiana)
            break;

        zamiana = false;
        prawy--;

        for (int i = prawy - 1; i >= lewy; i--) {
            if (tablica[i] > tablica[i + 1]) {
                swap(tablica[i], tablica[i + 1]);
                zamiana = true;
            }
        }
        lewy++;
    }
}

int main() {
    vector<int> tablica = {12, 7, 11, 5, 6, 13, 6};
    sortowaniePrzezWstrzasanie(tablica);

    cout << "Posortowana tablica: ";
    for (int i : tablica) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
