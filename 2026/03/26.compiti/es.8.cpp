#include <iostream>

using namespace std;

struct Libro {
    string TIT;
    string AUT;
    int NCOPIE;
};

void prestito(Libro catalogo[], int dimensione, string titolo) {
    for (int i = 0; i < dimensione; i++) {
        if (catalogo[i].TIT == titolo) {
            if (catalogo[i].NCOPIE > 0) {
                catalogo[i].NCOPIE--;
                cout << "Prestito effettuato. Copie rimaste: " << catalogo[i].NCOPIE << endl;
            } else {
                cout << "Libro non disponibile." << endl;
            }
            return;
        }
    }
    cout << "Titolo non trovato." << endl;
}

void restituzione(Libro catalogo[], int dimensione, string titolo) {
    for (int i = 0; i < dimensione; i++) {
        if (catalogo[i].TIT == titolo) {
            catalogo[i].NCOPIE++;
            cout << "Restituzione effettuata. Copie totali: " << catalogo[i].NCOPIE << endl;
            return;
        }
    }
    cout << "Titolo non trovato." << endl;
}

void stampaPerAutore(Libro catalogo[], int dimensione, string autore) {
    bool trovato = false;
    cout << "\nLibri di " << autore << ":" << endl;
    for (int i = 0; i < dimensione; i++) {
        if (catalogo[i].AUT == autore) {
            cout << "- " << catalogo[i].TIT << " (" << catalogo[i].NCOPIE << " copie)" << endl;
            trovato = true;
        }
    }
    if (!trovato) cout << "Nessun libro trovato per questo autore." << endl;
}

int main() {
    const int MAX = 3;
    Libro catalogo[MAX] = {
        {"1984", "Orwell", 2},
        {"Il Nome della Rosa", "Eco", 1},
        {"Baudolino", "Eco", 0}
    };

    string t1, t2, aut;

    cout << "Inserisci titolo per prestito: ";
    getline(cin, t1);
    prestito(catalogo, MAX, t1);

    cout << "Inserisci titolo per restituzione: ";
    getline(cin, t2);
    restituzione(catalogo, MAX, t2);

    cout << "Inserisci autore per ricerca: ";
    getline(cin, aut);
    stampaPerAutore(catalogo, MAX, aut);

    return 0;
}
