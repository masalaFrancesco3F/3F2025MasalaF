#include <iostream>
using namespace std;

struct studente {
    int voto;
    string nome;
};
int main () {
    studente voto [5];
    for (int i=0; i<5; i++) {
        cout << "Inserisci il nome dello studente: ";
        cin >> voto[i].nome;
        cout << "Inserisci il voto dello studente: ";
        cin >> voto[i].voto;

    }
    int indice_max = 0;
    for (int i=1; i<5; i++) {
        if (voto[i].voto > voto[indice_max].voto) {
            indice_max = i;
        }
    }
    cout << "Lo studente con il voto più alto è: " << voto[indice_max].nome << " con un voto di " << voto[indice_max].voto << endl;
    return 0;
}