#include <iostream>
#include <string>
using namespace std;

struct contatto {
    string nome;
    string cognome;
    string telefono;
};
void inserimento_ordinato(contatto rubrica[], int &n, contatto nuovo) {
    int i = n - 1;
    while (i >= 0 && rubrica[i].cognome > nuovo.cognome) {
        rubrica[i + 1] = rubrica[i];
        i--;
    }
    rubrica[i + 1] = nuovo;
    n++; 
}
void inizializza_contatti(contatto rubrica[], int &n) {
    n = 0; 
    inserimento_ordinato(rubrica, n, {"Luca", "Rossi", "123456"});
    inserimento_ordinato(rubrica, n, {"Maria", "Bianchi", "234567"});
    inserimento_ordinato(rubrica, n, {"Giulia", "Verdi", "345678"});
    inserimento_ordinato(rubrica, n, {"Marco", "Neri", "456789"});
    inserimento_ordinato(rubrica, n, {"Anna", "Gialli", "567890"});
}
void ricerca_binaria(contatto rubrica[], int n, string cognome_target) {
    int basso = 0;
    int alto = n - 1;
    int pos = -1;

    while (basso <= alto) {
        int medio = (basso + alto) / 2;
        if (rubrica[medio].cognome == cognome_target) {
            pos = medio;
            break; 
        }
        if (rubrica[medio].cognome < cognome_target) 
            basso = medio + 1;
        else 
            alto = medio - 1;
    }

    if (pos != -1) {
        cout << "[BINARIA] Trovato: " << rubrica[pos].nome << " " << rubrica[pos].cognome << endl;
    } else {
        cout << "[BINARIA] Contatto non trovato." << endl;
    }
}

int main() {
    const int MAX = 100;
    contatto rubrica[MAX];
    int dimensione = 0;
    inizializza_contatti(rubrica, dimensione);

    string cercato;
    cout << "STEP 20 - Ricerca Binaria per Cognome: ";
    cin >> cercato;

    ricerca_binaria(rubrica, dimensione, cercato);

    return 0;
}
