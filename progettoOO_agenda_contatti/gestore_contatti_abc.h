#ifndef GESTORE_CONTATTI_ABC_H
#define GESTORE_CONTATTI_ABC_H

#include "contatto.h"

class GestoreContattiABC {
protected:
    int capacita;

public:
    explicit GestoreContattiABC(int capacita)
        : capacita(capacita) {}
    virtual ~GestoreContattiABC() {}

    virtual bool inserisci(const Contatto& contatto) = 0;
    virtual bool rimuovi(const char* cognome, const char* nome) = 0;
    virtual bool aggiorna(const char* cognome, const char* nome, const Contatto& contatto) = 0;
    virtual int ricerca(const char* cognome, const char* nome) const = 0;
    virtual int ricerca(const char* cognome) const = 0;
    virtual void stampaPerCognome(const char* cognome) const = 0;
    virtual void stampaContatto(const char* cognome, const char* nome) const = 0;
    virtual void stampaTutti() const = 0;
    virtual void carica() = 0;
    virtual void salva() const = 0;
};

#endif // GESTORE_CONTATTI_ABC_H
