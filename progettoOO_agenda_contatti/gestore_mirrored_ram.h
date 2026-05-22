#ifndef GESTORE_MIRRORED_RAM_H
#define GESTORE_MIRRORED_RAM_H

#include "gestore_ram_ordinata.h"

class GestoreMirroredRAM : public GestoreRAMOrdinata {
private:
    char nomeFile[128];
    void creaContattiPredefiniti();

public:
    explicit GestoreMirroredRAM(const char* percorsoFile, int capacita = MAX_CONTATTI);
    virtual ~GestoreMirroredRAM();

    void carica() override;
    void salva() const override;
};

#endif // GESTORE_MIRRORED_RAM_H
