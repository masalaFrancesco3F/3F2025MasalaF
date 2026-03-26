#include <iostream>

using namespace std;

int main() {
    int n, numero, pos = -1;
    int v[100];

    cout << "Quanti elementi? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> v[i];
    }

    cout << "Numero da eliminare: ";
    cin >> numero;

    for (int i = 0; i < n; i++) {
        if (v[i] == numero) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        for (int i = pos; i < n - 1; i++) {
            v[i] = v[i + 1];
        }
        n--;
        
        cout << "Vettore aggiornato: ";
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Numero non trovato." << endl;
    }

    return 0;
}
