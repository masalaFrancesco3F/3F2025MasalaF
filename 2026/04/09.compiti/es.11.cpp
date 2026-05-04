#include <iostream>

using namespace std;

bool stringheUguali(const char a[], const char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return false;
        i++;
    }
    return a[i] == '\0' && b[i] == '\0';
}

int main() {
    int N;
    cout << "Quante persone vuoi inserire? ";
    cin >> N;

    char cognomi[100][50];
    char citta[100][50];
    char telefoni[100][20];
    int giorni[100];
    int mesi[100];

    for (int i = 0; i < N; i++) {
        cout << "\n--- Persona " << i + 1 << " ---" << endl;
        cout << "Cognome: "; cin >> cognomi[i];
        cout << "Citta': "; cin >> citta[i];
        cout << "Telefono: "; cin >> telefoni[i];
        cout << "Giorno di nascita: "; cin >> giorni[i];
        cout << "Mese di nascita (numero): "; cin >> mesi[i];
    }

    char cittaCercata[50];
    cout << "\nInserisci la citta' per filtrare i nati in agosto: ";
    cin >> cittaCercata;
    
    bool trovatoAgosto = false;
    for (int i = 0; i < N; i++) {
        if (mesi[i] == 8 && stringheUguali(citta[i], cittaCercata)) {
            cout << "- " << cognomi[i] << endl;
            trovatoAgosto = true;
        }
    }
    if (!trovatoAgosto) {
        cout << "Nessun residente a " << cittaCercata << " nato in agosto." << endl;
    }

    char telCercato[20];
    cout << "\nInserisci il numero di telefono per cercare i dati: ";
    cin >> telCercato;
    
    bool trovatoTel = false;
    for (int i = 0; i < N; i++) {
        if (stringheUguali(telefoni[i], telCercato)) {
            cout << "Cognome: " << cognomi[i] << ", Citta': " << citta[i] 
                 << ", Data nascita: " << giorni[i] << "/" << mesi[i] << endl;
            trovatoTel = true;
            break;
        }
    }
    if (!trovatoTel) {
        cout << "Numero di telefono non trovato." << endl;
    }

    char cognomeCercato[50];
    cout << "\nInserisci il cognome per trovare il telefono: ";
    cin >> cognomeCercato;
    
    bool trovatoCognome = false;
    for (int i = 0; i < N; i++) {
        if (stringheUguali(cognomi[i], cognomeCercato)) {
            cout << "Telefono di " << cognomeCercato << ": " << telefoni[i] << endl;
            trovatoCognome = true;
        }
    }
    if (!trovatoCognome) {
        cout << "Cognome non trovato." << endl;
    }

    int gOggi, mOggi;
    cout << "\nInserisci il giorno corrente: "; cin >> gOggi;
    cout << "Inserisci il mese corrente (numero): "; cin >> mOggi;
    
    bool festeggiati = false;
    for (int i = 0; i < N; i++) {
        if (giorni[i] == gOggi && mesi[i] == mOggi) {
            cout << "Buon compleanno a " << cognomi[i] << endl;
            festeggiati = true;
        }
    }
    if (!festeggiati) {
        cout << "Nessun compleanno oggi." << endl;
    }

    return 0;
}
