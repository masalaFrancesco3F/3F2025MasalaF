#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Numero dipendenti: ";
    cin >> n;

    string CodiceFiscale[100];
    double Stipendio[100];
    double somma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Codice Fiscale: ";
        cin >> CodiceFiscale[i];
        cout << "Stipendio: ";
        cin >> Stipendio[i];
        somma += Stipendio[i];
    }

    double media = somma / n;
    string SOTTO_MEDIA[100];
    int nSotto = 0;

    for (int i = 0; i < n; i++) {
        if (Stipendio[i] < media) {
            SOTTO_MEDIA[nSotto] = CodiceFiscale[i];
            nSotto++;
        }
    }

    for (int i = 0; i < nSotto - 1; i++) {
        for (int j = 0; j < nSotto - i - 1; j++) {
            if (SOTTO_MEDIA[j] > SOTTO_MEDIA[j + 1]) {
                string temp = SOTTO_MEDIA[j];
                SOTTO_MEDIA[j] = SOTTO_MEDIA[j + 1];
                SOTTO_MEDIA[j + 1] = temp;
            }
        }
    }

    cout << "\nDipendenti con stipendio sotto la media (" << media << "):" << endl;
    for (int i = 0; i < nSotto; i++) {
        cout << SOTTO_MEDIA[i] << endl;
    }

    return 0;
}
