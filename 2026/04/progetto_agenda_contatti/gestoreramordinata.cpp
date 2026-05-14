#include <iostream>
#include <cstring>

using namespace std;

#include "gestoreramordinata.h"

GestoreRAMOrdinata::GestoreRAMOrdinata() {

    numeroContatti = 0;
}

void GestoreRAMOrdinata::aggiungi(const char nome[],
                                  const char cognome[],
                                  const char telefono[]) {

    if(numeroContatti >= MAX) {
        return;
    }

    int posizione = 0;

    while(posizione < numeroContatti &&
          strcmp(vettore[posizione].getCognome(),
                 cognome) < 0) {

        posizione++;
    }

    for(int i = numeroContatti;
        i > posizione;
        i--) {

        vettore[i] = vettore[i - 1];
    }

    vettore[posizione] =
        Contatto(nome, cognome, telefono);

    numeroContatti++;
}

int GestoreRAMOrdinata::cerca(const char cognome[]) const {

    int sinistra = 0;
    int destra = numeroContatti - 1;

    while(sinistra <= destra) {

        int centro = (sinistra + destra) / 2;

        int confronto =
            strcmp(vettore[centro].getCognome(),
                   cognome);

        if(confronto == 0) {
            return centro;
        }

        if(confronto < 0) {
            sinistra = centro + 1;
        }
        else {
            destra = centro - 1;
        }
    }

    return -1;
}

void GestoreRAMOrdinata::elimina(const char cognome[]) {

    int posizione = cerca(cognome);

    if(posizione == -1) {
        return;
    }

    for(int i = posizione;
        i < numeroContatti - 1;
        i++) {

        vettore[i] = vettore[i + 1];
    }

    numeroContatti--;
}

void GestoreRAMOrdinata::stampa() const {

    for(int i = 0;
        i < numeroContatti;
        i++) {

        vettore[i].stampa();
    }
}