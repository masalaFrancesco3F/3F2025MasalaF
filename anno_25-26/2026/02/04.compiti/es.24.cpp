#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("Risultati.txt");
    
    int iscritti, votanti, nulle, bianche;
    int totIscritti = 0, totVotanti = 0, totNulle = 0, totBianche = 0;

    if (!file) {
        cout << "Errore: impossibile aprire il file Risultati.txt" << endl;
        return 1;
    }

    while (file >> iscritti >> votanti >> nulle >> bianche) {
        totIscritti += iscritti;
        totVotanti += votanti;
        totNulle += nulle;
        totBianche += bianche;
    }

    file.close();

    if (totIscritti > 0 && totVotanti > 0) {
        double percVotanti = (double)totVotanti / totIscritti * 100;
        double percNulle = (double)totNulle / totVotanti * 100;
        double percBianche = (double)totBianche / totVotanti * 100;

        cout << "Percentuale votanti: " << percVotanti << "%" << endl;
        cout << "Percentuale schede nulle (sui votanti): " << percNulle << "%" << endl;
        cout << "Percentuale schede bianche (sui votanti): " << percBianche << "%" << endl;
    } else {
        cout << "Dati insufficienti per il calcolo." << endl;
    }

    return 0;
}
