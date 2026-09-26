#include "gestore_mirrored_ram.h"
#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

GestoreMirroredRAM::GestoreMirroredRAM(const char* percorsoFile, int capacita)
    : GestoreRAMOrdinata(capacita) {
    strncpy(nomeFile, percorsoFile ? percorsoFile : "agenda.txt", sizeof(nomeFile) - 1);
    nomeFile[sizeof(nomeFile) - 1] = '\0';

    ifstream input(nomeFile);
    if (!input) {
        creaContattiPredefiniti();
        salva();
        return;
    }
    input.close();
    carica();
}

GestoreMirroredRAM::~GestoreMirroredRAM() {
    salva();
}

void GestoreMirroredRAM::creaContattiPredefiniti() {
    Contatto predefiniti[10] = {
        Contatto("Bianchi", "Lucia", "3399876543", "lucia.bianchi@example.it"),
        Contatto("Conti", "Elena", "3337778889", "elena.conti@example.it"),
        Contatto("Costa", "Marco", "3456677889", "marco.costa@example.it"),
        Contatto("Ferrari", "Paolo", "3485566778", "paolo.ferrari@example.it"),
        Contatto("Gallo", "Sara", "3294455667", "sara.gallo@example.it"),
        Contatto("Marini", "Giulia", "3482233445", "giulia.marini@example.it"),
        Contatto("Romano", "Stefano", "3395566442", "stefano.romano@example.it"),
        Contatto("Rossi", "Mario", "3331234567", "mario.rossi@example.it"),
        Contatto("Russo", "Luca", "3209988776", "luca.russo@example.it"),
        Contatto("Verdi", "Anna", "3471112233", "anna.verdi@example.it")
    };

    for (int i = 0; i < 10; ++i) {
        inserisci(predefiniti[i]);
    }
}

void GestoreMirroredRAM::carica() {
    ifstream input(nomeFile);
    if (!input) {
        return;
    }

    char line[256];
    while (input.getline(line, sizeof(line))) {
        if (line[0] == '\0') {
            continue;
        }

        char* parte = strtok(line, ";");
        if (!parte) {
            continue;
        }
        char cognome[MAX_TEXTO];
        strncpy(cognome, parte, MAX_TEXTO - 1);
        cognome[MAX_TEXTO - 1] = '\0';

        parte = strtok(nullptr, ";");
        if (!parte) {
            continue;
        }
        char nome[MAX_TEXTO];
        strncpy(nome, parte, MAX_TEXTO - 1);
        nome[MAX_TEXTO - 1] = '\0';

        parte = strtok(nullptr, ";");
        if (!parte) {
            continue;
        }
        char telefono[MAX_TEXTO];
        strncpy(telefono, parte, MAX_TEXTO - 1);
        telefono[MAX_TEXTO - 1] = '\0';

        parte = strtok(nullptr, ";");
        if (!parte) {
            continue;
        }
        char email[MAX_TEXTO];
        strncpy(email, parte, MAX_TEXTO - 1);
        email[MAX_TEXTO - 1] = '\0';

        Contatto contatto(cognome, nome, telefono, email);
        inserisci(contatto);
    }
}

void GestoreMirroredRAM::salva() const {
    ofstream output(nomeFile, ios::trunc);
    if (!output) {
        cerr << "Errore: impossibile aprire il file " << nomeFile << " per la scrittura.\n";
        return;
    }

    for (int i = 0; i < quanti; ++i) {
        output << contatti[i].getCognome() << ";"
               << contatti[i].getNome() << ";"
               << contatti[i].getTelefono() << ";"
               << contatti[i].getEmail() << "\n";
    }
}
