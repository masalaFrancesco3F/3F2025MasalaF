#include <iostream>

using namespace std;

int main() {
    int h_entrata, m_entrata;
    int h_uscita, m_uscita;
    
    cout << "Inserisci ora entrata (es. 14 30): ";
    cin >> h_entrata >> m_entrata;
    cout << "Inserisci ora uscita (es. 16 15): ";
    cin >> h_uscita >> m_uscita;

    int tot_min_entrata = (h_entrata * 60) + m_entrata;
    int tot_min_uscita = (h_uscita * 60) + m_uscita;
    int durata_minuti = tot_min_uscita - tot_min_entrata;

    if (durata_minuti < 0) {
        cout << "Errore: l'uscita precede l'entrata!" << endl;
        return 1;
    }

    int ore_sosta = durata_minuti / 60;
    int minuti_restanti = durata_minuti % 60;

    int ore_da_pagare = ore_sosta;
    if (minuti_restanti > 0) {
        ore_da_pagare = ore_da_pagare + 1;
    }

    float costo = 0;
    if (ore_da_pagare > 0) {
        costo = 2;
        if (ore_da_pagare > 1) {
            costo = costo + (ore_da_pagare - 1) * 1;
        }
    }

    cout << "\n******* SCONTRINO PARCHEGGIO *******" << endl;
    
    cout << "Entrata: " << h_entrata << ":";
    if (m_entrata < 10) cout << "0";
    cout << m_entrata << endl;

    cout << "Uscita:  " << h_uscita << ":";
    if (m_uscita < 10) cout << "0";
    cout << m_uscita << endl;

    cout << "Durata:  " << ore_sosta << "h " << minuti_restanti << "m" << endl;
    cout << "************************************" << endl;
    cout << "TOTALE:  " << costo << " Euro" << endl;
    cout << "************************************" << endl;

    return 0;
}
