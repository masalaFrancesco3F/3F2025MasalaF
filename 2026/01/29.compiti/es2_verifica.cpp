#include <iostream>
using namespace std;

int main() {
    int n;
    double numero, massimo, somma = 0;

    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;

    if (n <= 0) return 0;

    for (int i = 0; i < n; i++) {
        cout << "Inserisci numero: ";
        cin >> numero;
        somma += numero;

        if (i == 0 || numero > massimo) {
            massimo = numero;
        }
    }

    double percentuale = (massimo / somma) * 100;
    cout << "Il massimo e': " << massimo << endl;
    cout << "Rappresenta il " << percentuale << "% della somma totale." << endl;

    return 0;
}
