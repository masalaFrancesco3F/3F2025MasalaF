#include <iostream>

using namespace std;

int main() {
    int x, y;
    double potenza = 1.0;

    cout << "Inserisci la base (X): ";
    cin >> x;
    cout << "Inserisci l'esponente (Y): ";
    cin >> y;

    for (int i = 0; i < y; i++) {
        potenza = potenza * x;
    }

    cout << "Il risultato di " << x << "^" << y << " e': " << potenza << endl;

    return 0;
}
