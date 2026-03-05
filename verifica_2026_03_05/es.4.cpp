#include <iostream>
using namespace std;
void occorrenze(int v[], int n, int x) {
    int conto = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] == x) {
            conto++;
        }
    }
    cout << "Il numero " << x << " compare " << conto << " volte." << endl;
}
int main() {
    int dati[] = {4,2,12,56,7,9,0,33,4,2,33};
    int n = sizeof(dati) / sizeof(dati[0]);
    int x;

    cout << "Inserisci un numero da cercare: ";
    cin >> x;

    occorrenze(dati, n, x);

    return 0;
}
