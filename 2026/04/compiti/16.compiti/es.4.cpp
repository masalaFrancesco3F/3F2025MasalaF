#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Inserisci la dimensione della matrice quadrata: ";
    cin >> N;

    int matrice[100][100];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                matrice[i][j] = 1;
            } else {
                matrice[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
