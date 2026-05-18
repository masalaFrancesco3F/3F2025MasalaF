#include "gestore_ram_ordinata.h"
#include <cstring>
#include <iostream>

using namespace std;

GestoreRAMOrdinata::GestoreRAMOrdinata(int capacitaIn)
    : GestoreContattiABC(capacitaIn), quanti(0) {
    if (capacita > MAX_CONTATTI) {
        capacita = MAX_CONTATTI;
    }
}

GestoreRAMOrdinata::~GestoreRAMOrdinata() {
}

int GestoreRAMOrdinata::trovaPosizioneInserimento(const Contatto& contatto) const {
    int pos = 0;
    while (pos < quanti && contatto.compara(contatti[pos]) > 0) {
        pos++;
    }
    return pos;
}

bool GestoreRAMOrdinata::inserisci(const Contatto& contatto) {
    if (quanti >= capacita) {
        return false;
    }

    int pos = trovaPosizioneInserimento(contatto);
    if (pos < quanti && contatti[pos].eUguale(contatto)) {
        return false;
    }

    for (int i = quanti; i > pos; --i) {
        contatti[i] = contatti[i - 1];
    }
    contatti[pos] = contatto;
    quanti++;
    return true;
}

int GestoreRAMOrdinata::ricercaBinariaNome(const char* cognome, const char* nome) const {
    int sin = 0;
    int des = quanti - 1;

    while (sin <= des) {
        int medio = (sin + des) / 2;
        Contatto temp;
        temp.imposta(cognome, nome, "", "");
        int cmp = contatti[medio].compara(temp);
        if (cmp == 0) {
            return medio;
        }
        if (cmp < 0) {
            sin = medio + 1;
        } else {
            des = medio - 1;
        }
    }
    return -1;
}

int GestoreRAMOrdinata::ricercaBinariaCognome(const char* cognome) const {
    int sin = 0;
    int des = quanti - 1;

    while (sin <= des) {
        int medio = (sin + des) / 2;
        int cmp = strcmp(contatti[medio].getCognome(), cognome);
        if (cmp == 0) {
            return medio;
        }
        if (cmp < 0) {
            sin = medio + 1;
        } else {
            des = medio - 1;
        }
    }
    return -1;
}

bool GestoreRAMOrdinata::rimuovi(const char* cognome, const char* nome) {
    int pos = ricerca(cognome, nome);
    if (pos < 0) {
        return false;
    }

    for (int i = pos; i < quanti - 1; ++i) {
        contatti[i] = contatti[i + 1];
    }
    quanti--;
    return true;
}

bool GestoreRAMOrdinata::aggiorna(const char* cognome, const char* nome, const Contatto& contatto) {
    int posVecchio = ricerca(cognome, nome);
    if (posVecchio < 0) {
        return false;
    }

    if (strcmp(cognome, contatto.getCognome()) != 0 || strcmp(nome, contatto.getNome()) != 0) {
        int posDuplicato = ricerca(contatto.getCognome(), contatto.getNome());
        if (posDuplicato >= 0) {
            return false;
        }
    }

    rimuovi(cognome, nome);
    return inserisci(contatto);
}

int GestoreRAMOrdinata::ricerca(const char* cognome, const char* nome) const {
    return ricercaBinariaNome(cognome, nome);
}

int GestoreRAMOrdinata::ricerca(const char* cognome) const {
    int pos = ricercaBinariaCognome(cognome);
    if (pos < 0) {
        return -1;
    }
    while (pos > 0 && strcmp(contatti[pos - 1].getCognome(), cognome) == 0) {
        pos--;
    }
    return pos;
}

void GestoreRAMOrdinata::stampaPerCognome(const char* cognome) const {
    int pos = ricerca(cognome);
    if (pos < 0) {
        cout << "Nessun contatto trovato con cognome '" << cognome << "'.\n";
        return;
    }

    cout << "Contatti con cognome '" << cognome << "':\n";
    while (pos < quanti && strcmp(contatti[pos].getCognome(), cognome) == 0) {
        contatti[pos].stampa();
        pos++;
    }
}

void GestoreRAMOrdinata::stampaContatto(const char* cognome, const char* nome) const {
    int pos = ricerca(cognome, nome);
    if (pos < 0) {
        cout << "Contatto non trovato.\n";
        return;
    }
    contatti[pos].stampa();
}

void GestoreRAMOrdinata::stampaTutti() const {
    if (quanti == 0) {
        cout << "Agenda vuota.\n";
        return;
    }
    cout << "Elenco contatti (" << quanti << "):\n";
    for (int i = 0; i < quanti; ++i) {
        contatti[i].stampa();
    }
}
