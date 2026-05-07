#include <iostream>

using namespace std;

int main() {
    int matrice[10][10];
    int conteggioZeri = 0;
    int seed = 42;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            seed = seed * 1664525 + 1013904223;
            matrice[i][j] = seed % 10;
            if (matrice[i][j] == 0) {
                conteggioZeri++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Numero di zeri presenti: " << conteggioZeri << endl;

    return 0;
}
