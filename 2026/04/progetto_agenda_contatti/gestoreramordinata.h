#ifndef GESTORERAMORDINATA_H
#define GESTORERAMORDINATA_H

#include "gestorecontattiabc.h"
#include "contatto.h"

class GestoreRAMOrdinata :
    public GestoreContattiABC {

private:

    static const int MAX = 100;

    Contatto vettore[MAX];

    int numeroContatti;

public:

    GestoreRAMOrdinata();

    void aggiungi(const char nome[],
                  const char cognome[],
                  const char telefono[]);

    int cerca(const char cognome[]) const;

    void elimina(const char cognome[]);

    void stampa() const;
};

#endif