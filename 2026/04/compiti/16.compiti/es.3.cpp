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
            matrice[i][j] = i + j;
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << matrice[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
