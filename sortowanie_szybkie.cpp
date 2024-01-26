#include <iostream>
#include <vector>
using namespace std;

void q(vector<int>& a, int l, int h) {
    if (l < h) {
        int p = a[h], i = l - 1;
        for (int j = l; j < h; ++j)
            if (a[j] <= p) swap(a[++i], a[j]);
        swap(a[i + 1], a[h]);
        q(a, l, i), q(a, i + 2, h);
    }
}

int main() {
    vector<int> a = {12, 7, 11, 5, 6, 13, 6};
    q(a, 0, a.size() - 1);
    for (int i : a) cout << i << " ";
    return 0;
}
