#include <iostream>

using namespace std;

int main() {
    int matrice[4][4];
    unsigned int seed = 12345;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            seed = seed * 1664525 + 1013904223;
            matrice[i][j] = (seed / 65536) % 2;
        }
    }

    cout << "Matrice generata:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    int conteggi[4];
    for (int i = 0; i < 4; i++) {
        conteggi[i] = 0;
        for (int j = 0; j < 4; j++) {
            if (matrice[i][j] == 1) {
                conteggi[i]++;
            }
        }
    }

    bool tutteUguali = true;
    for (int i = 1; i < 4; i++) {
        if (conteggi[i] != conteggi[i - 1]) {
            tutteUguali = false;
            break;
        }
    }

    if (tutteUguali) {
        cout << "\nIn ogni riga c'e' lo stesso numero di 1 rispetto alla precedente." << endl;
    } else {
        cout << "\nIl numero di 1 varia tra le righe." << endl;
    }

    return 0;
}
