#include <iostream>

using namespace std;

int main() {
    int R, C;
    cout << "Inserisci numero righe: ";
    cin >> R;
    cout << "Inserisci numero colonne: ";
    cin >> C;

    int matrice[100][100];

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matrice[i][j];
        }
    }

    for (int i = 0; i < R - 1; i += 2) {
        for (int j = 0; j < C; j++) {
            int temp = matrice[i][j];
            matrice[i][j] = matrice[i + 1][j];
            matrice[i + 1][j] = temp;
        }
    }

    cout << "\nMatrice dopo lo scambio:" << endl;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << matrice[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
