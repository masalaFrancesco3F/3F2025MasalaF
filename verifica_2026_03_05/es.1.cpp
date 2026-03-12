#include <iostream>
using namespace std;
void StampaMultipli(int v[], int n, int x) {
    cout << "I multipli di " << x << " nell'array sono: ";
    for (int i = 0; i < n; ++i) {
        if (v[i] % x == 0) {
            cout << v[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int dati[] = {1, 3, 4, 6, 7, 9, 10, 12};
    int n = sizeof(dati) / sizeof(dati[0]);

    cout << "Multipli di 3: ";
    StampaMultipli(dati, n, 3);

    return 0;
}