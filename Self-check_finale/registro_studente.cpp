#include <iostream>
#include <cstring>
using namespace std;
struct Studente {
    char nome[20];
    char cognome[20];
    float voto;
};

void stampa_elenco(Studente studenti[], int n) {
    cout << "ELENCO COMPLETO STUDENTI" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << studenti[i].nome << " " << studenti[i].cognome << " Voto: " << studenti[i].voto << endl;
    }
}

int calcolo_media (Studente studenti[], int n) {
    int somma = 0;
    for (int i = 0; i < n; i++) {
        somma += studenti[i].voto;
    }
    return somma / n;
}

int voto_sufficente (Studente studenti[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (studenti[i].voto >= 6) {
            count++;
        }
    }
    return count;
}

int voto_piu_alto (Studente studenti[], int n) {
    float max_voto = studenti[0].voto;
    for (int i = 1; i < n; i++) {
        if (studenti[i].voto > max_voto) {
            max_voto = studenti[i].voto;
            cout << "Il voto più alto è: " << studenti[i].voto << " dello studente " << studenti[i].nome << " " << studenti[i].cognome << endl;
           
        }
    }
    return max_voto;
}

int ricerca_studente (Studente studenti[], int n, char ricerca_cognome[]){
    for (int i = 0; i < n; i++) {
        if (strcmp (studenti[i].cognome, ricerca_cognome)== 0) {
            cout << "Studente trovato: " << studenti[i].nome << " " << studenti[i].cognome << " Voto: " << studenti[i].voto << endl;
            return i;
        }
    } 
    cout << "studente non trovato" << endl;
    return -1;
}

int main () {
    int n;
    cout << "Quanti studenti vuoi inserire? (max 10)";
    cin >> n;
    if (n > 10) {
        cout << "Il numero massimo di studenti è 10." << endl;
        return 1;
    }
    else {
        Studente studenti[10];
        for (int i = 0; i < n; i++) {
            cout << "Inserisci nome, cognome e voto dello studente " << i + 1 << ": ";
            cin >> studenti[i].nome >> studenti[i].cognome >> studenti[i].voto;
        }
        stampa_elenco(studenti, n);
        cout << "La media dei voti è: " << calcolo_media(studenti, n) << endl;
        cout << "Il numero di studenti con voto sufficiente è: " << voto_sufficente(studenti, n) << endl;
        cout << "Il voto più alto è: " << voto_piu_alto(studenti, n) << endl;
        char ricerca_cognome[20];
        cout << "Inserisci il cognome dello studente da cercare: ";
        cin >> ricerca_cognome;
        int indice = ricerca_studente(studenti, n, ricerca_cognome);
    }
}
