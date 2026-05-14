#include "utility.h"

void copiaStringa(char destinazione[], const char sorgente[]) {

    int i = 0;

    while(sorgente[i] != '\0') {

        destinazione[i] = sorgente[i];
        i++;
    }

    destinazione[i] = '\0';
}

int lunghezzaStringa(const char testo[]) {

    int i = 0;

    while(testo[i] != '\0') {
        i++;
    }

    return i;
}