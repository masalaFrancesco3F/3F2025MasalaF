#include <iostream>

using namespace std;

int main() {
    int matrice[4][5];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Inserisci elemento [" << i << "][" << j << "]: ";
            cin >> matrice[i][j];
        }
    }

    bool verificato = true;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            int sommaPrecedenti = 0;
            for (int k = 0; k < j; k++) {
                sommaPrecedenti += matrice[i][k];
            }
            if (matrice[i][j] != sommaPrecedenti) {
                verificato = false;
                break;
            }
        }
        if (!verificato) {
            break;
        }
    }

    if (verificato) {
        cout << "\nProprieta' verificata per tutte le celle." << endl;
    } else {
        cout << "\nProprieta' non verificata." << endl;
    }

    return 0;
}
