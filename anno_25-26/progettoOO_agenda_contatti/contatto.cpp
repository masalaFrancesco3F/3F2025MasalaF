#include "contatto.h"
#include <cstring>
#include <iostream>

using namespace std;

Contatto::Contatto() {
    cognome[0] = '\0';
    nome[0] = '\0';
    telefono[0] = '\0';
    email[0] = '\0';
}

Contatto::Contatto(const char* cognomeIn, const char* nomeIn, const char* telefonoIn, const char* emailIn) {
    imposta(cognomeIn, nomeIn, telefonoIn, emailIn);
}

void Contatto::imposta(const char* cognomeIn, const char* nomeIn, const char* telefonoIn, const char* emailIn) {
    strncpy(cognome, cognomeIn ? cognomeIn : "", MAX_TEXTO - 1);
    cognome[MAX_TEXTO - 1] = '\0';
    strncpy(nome, nomeIn ? nomeIn : "", MAX_TEXTO - 1);
    nome[MAX_TEXTO - 1] = '\0';
    strncpy(telefono, telefonoIn ? telefonoIn : "", MAX_TEXTO - 1);
    telefono[MAX_TEXTO - 1] = '\0';
    strncpy(email, emailIn ? emailIn : "", MAX_TEXTO - 1);
    email[MAX_TEXTO - 1] = '\0';
}

const char* Contatto::getCognome() const {
    return cognome;
}

const char* Contatto::getNome() const {
    return nome;
}

const char* Contatto::getTelefono() const {
    return telefono;
}

const char* Contatto::getEmail() const {
    return email;
}

int Contatto::compara(const Contatto& altro) const {
    int risultato = strcmp(cognome, altro.cognome);
    if (risultato != 0) {
        return risultato;
    }
    return strcmp(nome, altro.nome);
}

bool Contatto::corrispondeCognome(const char* cognomeRicerca) const {
    return strcmp(cognome, cognomeRicerca) == 0;
}

bool Contatto::corrispondeCognomeNome(const char* cognomeRicerca, const char* nomeRicerca) const {
    return strcmp(cognome, cognomeRicerca) == 0 && strcmp(nome, nomeRicerca) == 0;
}

bool Contatto::eUguale(const Contatto& altro) const {
    return strcmp(cognome, altro.cognome) == 0
        && strcmp(nome, altro.nome) == 0
        && strcmp(telefono, altro.telefono) == 0
        && strcmp(email, altro.email) == 0;
}

void Contatto::stampa() const {
    cout << "Cognome: " << cognome
         << ", Nome: " << nome
         << ", Telefono: " << telefono
         << ", Email: " << email
         << "\n";
}
