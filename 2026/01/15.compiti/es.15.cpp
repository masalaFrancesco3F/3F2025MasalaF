#include <iostream>

using namespace std;

int main() {
    int codice, codiceMax = 0;
    double prezzo, prezzoMax = -1;

    do {
        cout << "Inserisci codice (0 per terminare): ";
        cin >> codice;

        if (codice != 0) {
            cout << "Inserisci prezzo: ";
            cin >> prezzo;

            if (prezzo > prezzoMax) {
                prezzoMax = prezzo;
                codiceMax = codice;
            }
        }
    } while (codice != 0);

    if (codiceMax != 0) {
        cout << "Prodotto piu' costoso: Codice " << codiceMax << " con prezzo " << prezzoMax << endl;
    } else {
        cout << "Nessun prodotto inserito." << endl;
    }

    return 0;
}
