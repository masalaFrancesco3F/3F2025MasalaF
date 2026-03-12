#include <iostream>
using namespace std;
void fattoriale(int n) {
    int risultato;
    for (int i = 1; i <= n; ++i) {
        risultato = n * (n-1);
    }
    cout << "Il fattoriale di " << n << " è: " << risultato << endl;
}
int main() {
    int n;
    cout << "Inserisci un numero di cui calcolare il fattoriale: ";
    cin >> n;
    fattoriale(n);

    return 0;
}