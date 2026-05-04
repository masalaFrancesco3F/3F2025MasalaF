#include <iostream>

using namespace std;

struct Libro {
    int codice;
    int pagine;
    double costo;
};

int main() {
    Libro libri[10];
    double costoTotale = 0;
    int pagineTotali = 0;
    int indicePiuCaro = 0;

    for (int i = 0; i < 10; i++) {
        cout << "\n--- Libro " << i + 1 << " ---" << endl;
        cout << "Codice: "; cin >> libri[i].codice;
        cout << "Pagine: "; cin >> libri[i].pagine;
        cout << "Costo: "; cin >> libri[i].costo;

        costoTotale += libri[i].costo;
        pagineTotali += libri[i].pagine;

        if (libri[i].costo > libri[indicePiuCaro].costo) {
            indicePiuCaro = i;
        }
    }

    double costoMedioPerPagina = 0;
    if (pagineTotali > 0) {
        costoMedioPerPagina = costoTotale / pagineTotali;
    }

    cout << "\nCosto medio per pagina totale: " << costoMedioPerPagina << endl;
    cout << "Codice del libro piu' caro: " << libri[indicePiuCaro].codice << endl;

    return 0;
}
