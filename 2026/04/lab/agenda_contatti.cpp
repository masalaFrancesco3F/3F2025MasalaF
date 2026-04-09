#include <iostream>
#include <string>
using namespace std;

struct contatto{
    string nome;
    string cognome;
    string telefono;
};

 void inizializza_contatti(contatto rubrica[], int n){
    n = 10;
    rubrica[0] = {"Luca", "Rossi", "123456"};
    rubrica[1] = {"Maria", "Bianchi", "234567"};
    rubrica[2] = {"Giulia", "Verdi", "345678"};
    rubrica[3] = {"Marco", "Neri", "456789"};
    rubrica[4] = {"Anna", "Gialli", "567890"};
    rubrica[5] = {"Paolo", "Blu", "678901"};
    rubrica[6] = {"Sara", "Ferrari", "789012"};
    rubrica[7] = {"Davide", "Esposito", "890123"};
    rubrica[8] = {"Elena", "Romano", "901234"};
    rubrica[9] = {"Francesco", "Conti", "012345"};
}

void stampa_contatti(contatto rubrica[], int n){
    for (int i = 0; i < n; i++){
        cout << "Nome: " << rubrica[i].nome << ", Cognome: " << rubrica[i].cognome << ", Telefono: " << rubrica[i].telefono << endl;
    }
}

void ricerca_contatto(contatto rubrica[], int n, string nome){
    for (int i = 0; i < n; i++){
        if (rubrica[i].nome == nome){
            cout << "Contatto trovato: " << rubrica[i].nome << ", Cognome: " << rubrica[i].cognome << ", Telefono: " << rubrica[i].telefono << endl;
            return;
        }
    }
    cout << "Contatto non trovato." << endl;
}

int main() {
    const int n = 10;
    contatto rubrica[n];
    
    inizializza_contatti(rubrica, n);
    stampa_contatti(rubrica, n);
    string nome, cognome;
    cout << "Inserisci il nome e il cognome del contatto da cercare: ";
    cin >> nome >> cognome;
    ricerca_contatto(rubrica, n, nome);
    
    return 0;
}
