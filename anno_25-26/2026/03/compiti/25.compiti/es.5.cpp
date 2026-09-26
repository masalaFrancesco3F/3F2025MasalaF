#include <iostream>

using namespace std;

int main() {
    int v[100];
    int n, numero, pos;

    cout << "Quanti elementi sono presenti? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Inserisci elemento " << i << ": ";
        cin >> v[i];
    }

    cout << "Inserisci il numero da aggiungere: ";
    cin >> numero;

    pos = n;
    for (int i = 0; i < n; i++) {
        if (numero < v[i]) {
            pos = i;
            break;
        }
    }

    for (int i = n; i > pos; i--) {
        v[i] = v[i - 1];
    }

    v[pos] = numero;
    n++;

    cout << "Vettore aggiornato: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
