#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Quante squadre vuoi inserire? ";
    cin >> n;

    string SQUADRE[100];
    char SERIE[100];
    int PUNTI[100];

    for (int i = 0; i < n; i++) {
        cout << "Nome squadra: ";
        cin >> SQUADRE[i];
        cout << "Serie (A/B): ";
        cin >> SERIE[i];
        cout << "Punti: ";
        cin >> PUNTI[i];
    }

    cout << "\nSquadre di serie A:" << endl;
    int maxPunti = -1;
    int indiceCampione = -1;

    for (int i = 0; i < n; i++) {
        if (SERIE[i] == 'A' || SERIE[i] == 'a') {
            cout << SQUADRE[i] << ": " << PUNTI[i] << " punti" << endl;
            if (PUNTI[i] > maxPunti) {
                maxPunti = PUNTI[i];
                indiceCampione = i;
            }
        }
    }

    string CLASSIF[100];
    int nB = 0;
    for (int i = 0; i < n; i++) {
        if (SERIE[i] == 'B' || SERIE[i] == 'b') {
            CLASSIF[nB] = SQUADRE[i];
            nB++;
        }
    }

    cout << "\nVettore CLASSIF (Squadre serie B):" << endl;
    for (int i = 0; i < nB; i++) {
        cout << "- " << CLASSIF[i] << endl;
    }

    if (indiceCampione != -1) {
        cout << "\nSquadra campione di serie A: " << SQUADRE[indiceCampione] << " con " << maxPunti << " punti" << endl;
    } else {
        cout << "\nNessuna squadra di serie A presente." << endl;
    }

    return 0;
}
