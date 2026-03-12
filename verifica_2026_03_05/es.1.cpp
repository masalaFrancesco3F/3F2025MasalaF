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
    int dati[] = {2, 4, 10, 15, 20, 25, 30};
    int n = sizeof(dati) / sizeof(dati[0]);
    int x;

    cout << "Inserisci un numero per trovare i suoi multipli: ";
    cin >> x;

    StampaMultipli(dati, n, x);

    return 0;
}