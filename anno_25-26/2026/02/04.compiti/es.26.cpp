#include <iostream>

using namespace std;

int main() {
    int n;
    int quadrato = 0;
    int dispariCorrente = 1;

    cout << "Inserisci il numero N: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        quadrato = quadrato + dispariCorrente;
        dispariCorrente = dispariCorrente + 2;
    }

    cout << "Il quadrato di " << n << " e': " << quadrato << endl;

    return 0;
}
