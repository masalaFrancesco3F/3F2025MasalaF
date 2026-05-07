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
            if (i % 2 == 0) {
                matrice[i][j] = 1;
            } else {
                matrice[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
