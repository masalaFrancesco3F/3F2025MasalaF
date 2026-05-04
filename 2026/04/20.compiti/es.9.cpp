#include <iostream>

using namespace std;

int main() {
    int R, C;
    cout << "Inserisci numero righe: ";
    cin >> R;
    cout << "Inserisci numero colonne: ";
    cin >> C;

    int A[100][100];
    int B[100][100];
    int Somma[100][100];

    cout << "\nInserimento matrice A:" << endl;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "\nInserimento matrice B:" << endl;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            Somma[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nMatrice Somma:" << endl;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << Somma[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
