#include <iostream>

using namespace std;

#include "contatti.h"


Contatto::Contatto() {

    copiaStringa(nome, "");
    copiaStringa(cognome, "");
    copiaStringa(telefono, "");
}

Contatto::Contatto(const char n[],
                   const char c[],
                   const char t[]) {

    copiaStringa(nome, n);
    copiaStringa(cognome, c);
    copiaStringa(telefono, t);
}

void Contatto::setNome(const char n[]) {

    copiaStringa(nome, n);
}

void Contatto::setCognome(const char c[]) {

    copiaStringa(cognome, c);
}

void Contatto::setTelefono(const char t[]) {

    copiaStringa(telefono, t);
}

const char* Contatto::getNome() const {

    return nome;
}

const char* Contatto::getCognome() const {

    return cognome;
}

const char* Contatto::getTelefono() const {

    return telefono;
}

void Contatto::stampa() const {

    cout << nome << " "
         << cognome << " - "
         << telefono
         << endl;
}