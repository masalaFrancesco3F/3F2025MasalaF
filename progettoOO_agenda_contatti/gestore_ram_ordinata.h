#ifndef GESTORE_RAM_ORDINATA_H
#define GESTORE_RAM_ORDINATA_H

#include "gestore_contatti_abc.h"

class GestoreRAMOrdinata : public GestoreContattiABC {
public:
    static const int MAX_CONTATTI = 100;

protected:
    Contatto contatti[MAX_CONTATTI];
    int quanti;

    int trovaPosizioneInserimento(const Contatto& contatto) const;
    int ricercaBinariaNome(const char* cognome, const char* nome) const;
    int ricercaBinariaCognome(const char* cognome) const;

public:
    explicit GestoreRAMOrdinata(int capacita = MAX_CONTATTI);
    virtual ~GestoreRAMOrdinata();

    bool inserisci(const Contatto& contatto) override;
    bool rimuovi(const char* cognome, const char* nome) override;
    bool aggiorna(const char* cognome, const char* nome, const Contatto& contatto) override;
    int ricerca(const char* cognome, const char* nome) const override;
    int ricerca(const char* cognome) const override;
    void stampaPerCognome(const char* cognome) const override;
    void stampaContatto(const char* cognome, const char* nome) const override;
    void stampaTutti() const override;
};

#endif 
