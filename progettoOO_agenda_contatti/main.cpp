#include <iostream>
#include <cstring>
#include "gestore_mirrored_ram.h"

using namespace std;

void pulisciBuffer() {
    cin.ignore(32767, '\n');
}

void leggiLinea(const char* prompt, char* buffer, int size) {
    cout << prompt;
    cin.getline(buffer, size);
    if (cin.fail()) {
        cin.clear();
        pulisciBuffer();
        buffer[0] = '\0';
    }
}

int leggiScelta() {
    int scelta = -1;
    cout << "\nMenu agenda contatti:\n";
    cout << "1) Elenca tutti i contatti\n";
    cout << "2) Cerca per cognome\n";
    cout << "3) Cerca per cognome e nome\n";
    cout << "4) Aggiungi contatto\n";
    cout << "5) Rimuovi contatto\n";
    cout << "6) Aggiorna contatto\n";
    cout << "0) Esci\n";
    cout << "Scelta: ";
    if (!(cin >> scelta)) {
        cin.clear();
        pulisciBuffer();
        return -1;
    }
    pulisciBuffer();
    return scelta;
}

void aggiungiContatto(GestoreContattiABC& gestore) {
    char cognome[MAX_TEXTO];
    char nome[MAX_TEXTO];
    char telefono[MAX_TEXTO];
    char email[MAX_TEXTO];

    leggiLinea("Cognome: ", cognome, MAX_TEXTO);
    leggiLinea("Nome: ", nome, MAX_TEXTO);
    leggiLinea("Telefono: ", telefono, MAX_TEXTO);
    leggiLinea("Email: ", email, MAX_TEXTO);

    Contatto contatto(cognome, nome, telefono, email);
    if (gestore.inserisci(contatto)) {
        cout << "Contatto aggiunto.\n";
    } else {
        cout << "Impossibile aggiungere il contatto (agenda piena o contatto duplicato).\n";
    }
}

void cercaPerCognome(const GestoreContattiABC& gestore) {
    char cognome[MAX_TEXTO];
    leggiLinea("Inserisci cognome: ", cognome, MAX_TEXTO);
    gestore.stampaPerCognome(cognome);
}

void cercaPerNomeCognome(const GestoreContattiABC& gestore) {
    char cognome[MAX_TEXTO];
    char nome[MAX_TEXTO];
    leggiLinea("Inserisci cognome: ", cognome, MAX_TEXTO);
    leggiLinea("Inserisci nome: ", nome, MAX_TEXTO);

    gestore.stampaContatto(cognome, nome);
}

void rimuoviContatto(GestoreContattiABC& gestore) {
    char cognome[MAX_TEXTO];
    char nome[MAX_TEXTO];
    leggiLinea("Cognome da rimuovere: ", cognome, MAX_TEXTO);
    leggiLinea("Nome da rimuovere: ", nome, MAX_TEXTO);

    if (gestore.rimuovi(cognome, nome)) {
        cout << "Contatto rimosso.\n";
    } else {
        cout << "Contatto non trovato.\n";
    }
}

void aggiornaContatto(GestoreContattiABC& gestore) {
    char cognome[MAX_TEXTO];
    char nome[MAX_TEXTO];
    leggiLinea("Cognome del contatto da aggiornare: ", cognome, MAX_TEXTO);
    leggiLinea("Nome del contatto da aggiornare: ", nome, MAX_TEXTO);

    char nuovoCognome[MAX_TEXTO];
    char nuovoNome[MAX_TEXTO];
    char nuovoTelefono[MAX_TEXTO];
    char nuovoEmail[MAX_TEXTO];

    leggiLinea("Nuovo cognome: ", nuovoCognome, MAX_TEXTO);
    leggiLinea("Nuovo nome: ", nuovoNome, MAX_TEXTO);
    leggiLinea("Nuovo telefono: ", nuovoTelefono, MAX_TEXTO);
    leggiLinea("Nuova email: ", nuovoEmail, MAX_TEXTO);

    Contatto aggiornato(nuovoCognome, nuovoNome, nuovoTelefono, nuovoEmail);
    if (gestore.aggiorna(cognome, nome, aggiornato)) {
        cout << "Contatto aggiornato.\n";
    } else {
        cout << "Aggiornamento impossibile. Contatto non trovato o aggiornamento duplicato.\n";
    }
}

int main() {
    GestoreMirroredRAM gestore("agenda.txt");
    bool continua = true;

    while (continua) {
        int scelta = leggiScelta();
        switch (scelta) {
            case 1:
                gestore.stampaTutti();
                break;
            case 2:
                cercaPerCognome(gestore);
                break;
            case 3:
                cercaPerNomeCognome(gestore);
                break;
            case 4:
                aggiungiContatto(gestore);
                break;
            case 5:
                rimuoviContatto(gestore);
                break;
            case 6:
                aggiornaContatto(gestore);
                break;
            case 0:
                continua = false;
                break;
            default:
                cout << "Scelta non valida. Riprova.\n";
                break;
        }
    }

    cout << "Uscita. I contatti sono stati salvati su file.\n";
    return 0;
}
