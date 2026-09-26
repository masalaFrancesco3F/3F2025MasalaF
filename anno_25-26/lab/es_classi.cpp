#include <iostream>
#include <string>
using namespace std;

class Dipendente {
private:
    string nome;
    string cognome;

protected:
    Dipendente(const string& n, const string& c) : nome(n), cognome(c) {}

public:
    virtual ~Dipendente() {}
    
    void presentazione() const {
        cout << "Sono " << nome << " " << cognome << ".\n";
        saluta();
        cout << "Ruolo: " << ruolo() << "\n";
        cout << "Stipendio: " << calcolaStipendio() << " euro\n";
    }
    
    virtual void saluta() const {
        cout << "Buongiorno, lavoro qui." << "\n";
    }

    virtual string ruolo() const {
        return "Dipendente";
    }

    virtual double calcolaStipendio() const {
        return 0;
    }
};

class Programmatore : public Dipendente {
public:
    Programmatore(const string& n, const string& c) : Dipendente(n, c) {}

    void saluta() const override {
        cout << "Ciao, sono un programmatore e scrivo codice." << "\n";
    }

    string ruolo() const override {
        return "Programmatore";
    }

    double calcolaStipendio() const override {
        return 2600;
    }
};

int main() {
    Programmatore p("Luca", "Rossi");
    p.presentazione();
    return 0;
}
