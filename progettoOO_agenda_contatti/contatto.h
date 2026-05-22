#ifndef CONTATTO_H
#define CONTATTO_H

const int MAX_TEXTO = 64;

class Contatto {
private:
    char cognome[MAX_TEXTO];
    char nome[MAX_TEXTO];
    char telefono[MAX_TEXTO];
    char email[MAX_TEXTO];

public:
    Contatto();
    Contatto(const char* cognome, const char* nome, const char* telefono, const char* email);

    void imposta(const char* cognome, const char* nome, const char* telefono, const char* email);
    const char* getCognome() const;
    const char* getNome() const;
    const char* getTelefono() const;
    const char* getEmail() const;

    int compara(const Contatto& altro) const;
    bool corrispondeCognome(const char* cognomeRicerca) const;
    bool corrispondeCognomeNome(const char* cognomeRicerca, const char* nomeRicerca) const;
    bool eUguale(const Contatto& altro) const;
    void stampa() const;
};

#endif // CONTATTO_H
