#include <iostream>

using namespace std;

int main() {
    string nome_classe1, nome_classe2, nome_classe3;
    int studenti1, studenti2, studenti3;

    cout << "Inserisci il nome della prima classe: ";
    cin >> nome_classe1;
    cout << "Inserisci il numero di studenti della prima classe: ";
    cin >> studenti1;

    cout << "Inserisci il nome della seconda classe: ";
    cin >> nome_classe2;
    cout << "Inserisci il numero di studenti della seconda classe: ";
    cin >> studenti2;

    cout << "Inserisci il nome della terza classe: ";
    cin >> nome_classe3;
    cout << "Inserisci il numero di studenti della terza classe: ";
    cin >> studenti3;

    string classe_max = nome_classe1;
    int studenti_max = studenti1;

    if (studenti2 > studenti_max) {
        classe_max = nome_classe2;
        studenti_max = studenti2;
    }
    if (studenti3 > studenti_max) {
        classe_max = nome_classe3;
        studenti_max = studenti3;
    }

    float media = (studenti1 + studenti2 + studenti3) / 3.0;

    int contatore_meno_20 = 0;

    cout << "\n******* ANALISI CLASSI *******" << endl;
    cout << "Classe piu' numerosa: " << classe_max << " con " << studenti_max << " studenti" << endl;
    cout << "Numero medio di allievi: " << media << endl;

    cout << "Classi con meno studenti della media: ";
    if (studenti1 < media) cout << nome_classe1 << " ";
    if (studenti2 < media) cout << nome_classe2 << " ";
    if (studenti3 < media) cout << nome_classe3 << " ";
    cout << endl;

    cout << "Classi con meno di 20 allievi: ";
    if (studenti1 < 20) {
        cout << nome_classe1 << " ";
        contatore_meno_20 = contatore_meno_20 + 1;
    }
    if (studenti2 < 20) {
        cout << nome_classe2 << " ";
        contatore_meno_20 = contatore_meno_20 + 1;
    }
    if (studenti3 < 20) {
        cout << nome_classe3 << " ";
        contatore_meno_20 = contatore_meno_20 + 1;
    }
    cout << "\nNumero totale classi con meno di 20 allievi: " << contatore_meno_20 << endl;
    cout << "******************************" << endl;

    return 0;
}
