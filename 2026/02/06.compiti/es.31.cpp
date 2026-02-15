#include <iostream>

using namespace std;

int main() {
    int nGiorni;
    int giorno, giornoSettimana, copie;
    int copieMax = -1, giornoMax = 0;
    int totCopie = 0;
    int totDomeniche = 0, contaDomeniche = 0;

    cout << "Quanti giorni ha il mese? ";
    cin >> nGiorni;

    for (int i = 0; i < nGiorni; i++) {
        cout << "Giorno (numero), Giorno Settimana (1=Lun, 7=Dom), Copie: ";
        cin >> giorno >> giornoSettimana >> copie;

        totCopie += copie;

        if (copie > copieMax) {
            copieMax = copie;
            giornoMax = giorno;
        }

        if (giornoSettimana == 7) {
            totDomeniche += copie;
            contaDomeniche++;
        }
    }

    cout << "Giorno max: " << giornoMax << " con " << copieMax << " copie" << endl;
    cout << "Media totale: " << (double)totCopie / nGiorni << endl;

    if (contaDomeniche > 0) {
        cout << "Media domeniche: " << (double)totDomeniche / contaDomeniche << endl;
    }

    return 0;
}
