#include <iostream>

using namespace std;

int main() {
    int attuale, precedente;
    int differenza, nuovaDifferenza;
    int contatore = 0;
    bool costante = true;

    cout << "Inserisci il primo numero (999 per terminare): ";
    cin >> precedente;

    if (precedente != 999) {
        contatore++;
        cout << "Inserisci il prossimo numero: ";
        cin >> attuale;

        if (attuale != 999) {
            contatore++;
            differenza = attuale - precedente;

            while (true) {
                precedente = attuale;
                cout << "Inserisci il prossimo numero: ";
                cin >> attuale;

                if (attuale == 999) break;

                contatore++;
                nuovaDifferenza = attuale - precedente;

                if (nuovaDifferenza != differenza) {
                    costante = false;
                }
            }
        }
    }

    cout << "\nNumeri inseriti: " << contatore << endl;
    if (contatore >= 2 && costante) {
        cout << "La differenza e' costante." << endl;
    } else if (contatore >= 2) {
        cout << "La differenza NON e' costante." << endl;
    } else {
        cout << "Sequenza troppo corta per verificare la differenza." << endl;
    }

    return 0;
}
