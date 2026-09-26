#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Quanti film vuoi inserire? ";
    cin >> n;

    string TITOLO[100];
    string REGISTA[100];
    double INCASSO[100];

    for (int i = 0; i < n; i++) {
        cout << "Film " << i + 1 << " - Titolo: ";
        cin >> TITOLO[i];
        cout << "Regista: ";
        cin >> REGISTA[i];
        cout << "Incasso: ";
        cin >> INCASSO[i];
    }

    string regScelto;
    cout << "\nInserisci il nome di un regista per vedere i suoi film: ";
    cin >> regScelto;

    double sommaIncassi = 0;
    int conteggioFilmReg = 0;

    cout << "Film diretti da " << regScelto << ":" << endl;
    for (int i = 0; i < n; i++) {
        if (REGISTA[i] == regScelto) {
            cout << "- " << TITOLO[i] << endl;
            sommaIncassi += INCASSO[i];
            conteggioFilmReg++;
        }
    }

    if (conteggioFilmReg > 0) {
        cout << "Media incassi di " << regScelto << ": " << sommaIncassi / conteggioFilmReg << endl;
    } else {
        cout << "Nessun film trovato per questo regista." << endl;
    }

    double maxIncasso = INCASSO[0];
    int posMax = 0;
    for (int i = 1; i < n; i++) {
        if (INCASSO[i] > maxIncasso) {
            maxIncasso = INCASSO[i];
            posMax = i;
        }
    }

    cout << "\nFilm con maggiore incasso:" << endl;
    cout << "Titolo: " << TITOLO[posMax] << " | Regista: " << REGISTA[posMax] << " (" << maxIncasso << ")" << endl;

    return 0;
}
