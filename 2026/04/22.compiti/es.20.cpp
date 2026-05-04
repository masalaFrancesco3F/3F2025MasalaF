#include <iostream>

using namespace std;

struct Agente {
    char nominativo[100];
    char indirizzo[100];
};

void calcolaFatturatoAnnuo(Agente agenti[], double fatturato[][12], int N) {
    for (int i = 0; i < N; i++) {
        double totale = 0;
        for (int j = 0; j < 12; j++) {
            totale += fatturato[i][j];
        }
        cout << "Agente: " << agenti[i].nominativo << " | Indirizzo: " << agenti[i].indirizzo << " | Fatturato Annuo: " << totale << endl;
    }
}

void trovaMigliorAgente(Agente agenti[], double fatturato[][12], int N) {
    int indiceMax = 0;
    double maxFatturato = 0;

    for (int i = 0; i < N; i++) {
        double totale = 0;
        for (int j = 0; j < 12; j++) {
            totale += fatturato[i][j];
        }
        if (totale > maxFatturato) {
            maxFatturato = totale;
            indiceMax = i;
        }
    }
    cout << "Agente piu' redditizio: " << agenti[indiceMax].nominativo << " con " << maxFatturato << endl;
}

void calcolaTotaleMese(double fatturato[][12], int N) {
    for (int j = 0; j < 12; j++) {
        double totaleMese = 0;
        for (int i = 0; i < N; i++) {
            totaleMese += fatturato[i][j];
        }
        cout << "Mese " << j + 1 << ": Totale rete vendita = " << totaleMese << endl;
    }
}

int main() {
    int N = 20;
    Agente agenti[20];
    double fatturato[20][12];

    for (int i = 0; i < N; i++) {
        cout << "Inserisci nominativo agente " << i + 1 << ": ";
        cin >> agenti[i].nominativo;
        cout << "Inserisci indirizzo agente " << i + 1 << ": ";
        cin >> agenti[i].indirizzo;
        for (int j = 0; j < 12; j++) {
            cout << "Fatturato mese " << j + 1 << ": ";
            cin >> fatturato[i][j];
        }
    }

    int scelta = 1;
    while (scelta != 0) {
        cout << "\n--- MENU ---\n1. Stampa fatturato annuo per agente\n2. Trova agente migliore\n3. Stampa totale per mese\n0. Esci\nScelta: ";
        cin >> scelta;

        if (scelta == 1) calcolaFatturatoAnnuo(agenti, fatturato, N);
        else if (scelta == 2) trovaMigliorAgente(agenti, fatturato, N);
        else if (scelta == 3) calcolaTotaleMese(fatturato, N);
    }

    return 0;
}
