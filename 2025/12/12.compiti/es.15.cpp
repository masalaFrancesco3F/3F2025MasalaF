#include <iostream>

using namespace std;

int main() {
    float tariffa_biglietto;
    float peso_bagaglio;
    float supplemento = 0;
    float prezzo_totale;

    cout << "Inserisci la tariffa del biglietto: ";
    cin >> tariffa_biglietto;
    cout << "Inserisci il peso del bagaglio in kg: ";
    cin >> peso_bagaglio;

    if (peso_bagaglio > 20) {
        float kg_eccedenti = peso_bagaglio - 20;
        float costo_per_kg = (tariffa_biglietto * 2) / 100;
        supplemento = kg_eccedenti * costo_per_kg;
    }

    prezzo_totale = tariffa_biglietto + supplemento;

    cout << "\n******* DETTAGLIO COSTI *******" << endl;
    cout << "Tariffa base: " << tariffa_biglietto << " Euro" << endl;
    cout << "Peso bagaglio: " << peso_bagaglio << " kg" << endl;
    
    if (supplemento > 0) {
        cout << "Supplemento bagaglio: " << supplemento << " Euro" << endl;
    } else {
        cout << "Supplemento bagaglio: 0 Euro (entro il limite)" << endl;
    }
    
    cout << "*******************************" << endl;
    cout << "PREZZO TOTALE: " << prezzo_totale << " Euro" << endl;
    cout << "*******************************" << endl;

    return 0;
}
