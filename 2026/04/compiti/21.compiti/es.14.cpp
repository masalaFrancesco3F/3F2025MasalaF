#include <iostream>

using namespace std;

int main() {
    int matrice[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Inserisci elemento [" << i << "][" << j << "]: ";
            cin >> matrice[i][j];
        }
    }

    int sommaMassima = -2147483647;
    int indiceMax = -1;
    bool eRiga = true;

    for (int i = 0; i < 4; i++) {
        int sommaRiga = 0;
        for (int j = 0; j < 4; j++) {
            sommaRiga += matrice[i][j];
        }
        if (sommaRiga > sommaMassima) {
            sommaMassima = sommaRiga;
            indiceMax = i;
            eRiga = true;
        }
    }

    for (int j = 0; j < 4; j++) {
        int sommaColonna = 0;
        for (int i = 0; i < 4; i++) {
            sommaColonna += matrice[i][j];
        }
        if (sommaColonna > sommaMassima) {
            sommaMassima = sommaColonna;
            indiceMax = j;
            eRiga = false;
        }
    }

    if (eRiga) {
        cout << "\nLa riga con somma piu' alta e' la " << indiceMax << " con totale: " << sommaMassima << endl;
    } else {
        cout << "\nLa colonna con somma piu' alta e' la " << indiceMax << " con totale: " << sommaMassima << endl;
    }

    return 0;
}
