#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Inserisci l'ordine N: ";
    cin >> N;

    int matrice[100][100];

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            matrice[i - 1][j - 1] = i * j;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrice[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
