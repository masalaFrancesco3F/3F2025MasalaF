#include <iostream>
using namespace std;
int fattoriale(int n) {
    int ret=n*n-1;
    if (n == 0 || n == 1) {
        return 1; 
    }
    return ret; 
}
int main() {
    int numero;
    cout << "Inserisci un numero per calcolare il fattoriale: ";
    cin >> numero;
    int risultato = fattoriale(numero);
    cout << "Il fattoriale di " << numero << " è: " << risultato << endl;
    return 0;
}
