#include <iostream>

using namespace std;

int main() {
    double vendite[5];
    double totale = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Inserisci vendite reparto " << i + 1 << ": ";
        cin >> vendite[i];
        totale += vendite[i];
    }

    cout << "\nTotale vendite giornata: " << totale << endl << endl;

    for (int i = 0; i < 5; i++) {
        double percentuale = 0;
        if (totale > 0) {
            percentuale = (vendite[i] / totale) * 100;
        }
        cout << "Reparto " << i + 1 << ": " << vendite[i] << " (" << percentuale << "%)" << endl;
    }

    return 0;
}
