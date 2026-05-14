#ifndef GESTORECONTATTIABC_H
#define GESTORECONTATTIABC_H

class GestoreContattiABC {

public:

    virtual void aggiungi(const char nome[],
                          const char cognome[],
                          const char telefono[]) = 0;

    virtual int cerca(const char cognome[]) const = 0;

    virtual void elimina(const char cognome[]) = 0;

    virtual void stampa() const = 0;

    virtual ~GestoreContattiABC() {}
};

#endif