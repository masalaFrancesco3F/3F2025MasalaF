#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Quante città vuoi inserire? ";
    cin >> n;

    string CITTA[100];
    int ABITANTI[100];

    for (int i = 0; i < n; i++) {
        cout << "Città " << i + 1 << ": ";
        cin >> CITTA[i];
        cout << "Abitanti: ";
        cin >> ABITANTI[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ABITANTI[j] > ABITANTI[j + 1]) {
                int tempA = ABITANTI[j];
                ABITANTI[j] = ABITANTI[j + 1];
                ABITANTI[j + 1] = tempA;
                
                string tempC = CITTA[j];
                CITTA[j] = CITTA[j + 1];
                CITTA[j + 1] = tempC;
            }
        }
    }

    cout << "\nElenco ordinato per abitanti:" << endl;
    for (int i = 0; i < n; i++) {
        cout << CITTA[i] << ": " << ABITANTI[i] << endl;
    }

    string nuovaCitta;
    int nuoviAbitanti;
    cout << "\nInserisci nuova città: ";
    cin >> nuovaCitta;
    cout << "Inserisci abitanti: ";
    cin >> nuoviAbitanti;

    int pos = n;
    for (int i = 0; i < n; i++) {
        if (nuoviAbitanti < ABITANTI[i]) {
            pos = i;
            break;
        }
    }

    for (int i = n; i > pos; i--) {
        CITTA[i] = CITTA[i - 1];
        ABITANTI[i] = ABITANTI[i - 1];
    }
    CITTA[pos] = nuovaCitta;
    ABITANTI[pos] = nuoviAbitanti;
    n++;

    cout << "\nDopo inserimento:" << endl;
    for (int i = 0; i < n; i++) {
        cout << CITTA[i] << ": " << ABITANTI[i] << endl;
    }

    for (int i = 0; i < n - 1; i++) {
        CITTA[i] = CITTA[i + 1];
        ABITANTI[i] = ABITANTI[i + 1];
    }
    n--;

    cout << "\nDopo eliminazione minima:" << endl;
    for (int i = 0; i < n; i++) {
        cout << CITTA[i] << ": " << ABITANTI[i] << endl;
    }

    string CITTA1[100];
    int n1 = 0;
    for (int i = 1; i < n; i += 2) {
        CITTA1[n1] = CITTA[i];
        n1++;
    }

    for (int i = 0; i < n1 - 1; i++) {
        for (int j = 0; j < n1 - i - 1; j++) {
            if (CITTA1[j] > CITTA1[j + 1]) {
                string temp = CITTA1[j];
                CITTA1[j] = CITTA1[j + 1];
                CITTA1[j + 1] = temp;
            }
        }
    }

    cout << "\nCITTA1 (posizioni dispari ordinate):" << endl;
    for (int i = 0; i < n1; i++) {
        cout << CITTA1[i] << endl;
    }

    return 0;
}
