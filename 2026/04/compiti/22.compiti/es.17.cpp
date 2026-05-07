#include <iostream>

using namespace std;

int main() {
    int R, C;
    cout << "Inserisci numero righe: ";
    cin >> R;
    cout << "Inserisci numero colonne: ";
    cin >> C;

    int matrice[10][10];

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matrice[i][j];
        }
    }

    cout << "\nMassimo per ciascuna riga:" << endl;
    for (int i = 0; i < R; i++) {
        int maxRiga = matrice[i][0];
        for (int j = 1; j < C; j++) {
            if (matrice[i][j] > maxRiga) {
                maxRiga = matrice[i][j];
            }
        }
        cout << "Riga " << i << ": " << maxRiga << endl;
    }

    cout << "\nMinimo per ciascuna colonna:" << endl;
    for (int j = 0; j < C; j++) {
        int minColonna = matrice[0][j];
        for (int i = 1; i < R; i++) {
            if (matrice[i][j] < minColonna) {
                minColonna = matrice[i][j];
            }
        }
        cout << "Colonna " << j << ": " << minColonna << endl;
    }

    int maxAssoluto = matrice[0][0];
    int minAssoluto = matrice[0][0];

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (matrice[i][j] > maxAssoluto) maxAssoluto = matrice[i][j];
            if (matrice[i][j] < minAssoluto) minAssoluto = matrice[i][j];
        }
    }

    cout << "\nMassimo assoluto: " << maxAssoluto << endl;
    cout << "Minimo assoluto: " << minAssoluto << endl;

    return 0;
}
