#include <iostream>

using namespace std;

void trovaMassimo(int v[], int n, int &posMax) {
    int maxVal = v[0];
    posMax = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] > maxVal) {
            maxVal = v[i];
            posMax = i;
        }
    }
}

void inserisciInPosizione(int v[], int &n, int valore, int pos) {
    for (int i = n; i > pos; i--) {
        v[i] = v[i - 1];
    }
    v[pos] = valore;
    n++;
}

int main() {
    int v[100];
    int n, nuovoValore, posMax;

    cout << "Quanti elementi? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> v[i];
    }

    cout << "Valore da inserire: ";
    cin >> nuovoValore;

    trovaMassimo(v, n, posMax);
    inserisciInPosizione(v, n, nuovoValore, posMax);

    cout << "Vettore risultante: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
