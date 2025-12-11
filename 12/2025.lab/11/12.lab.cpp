#include <iostream>
using namespace std;
int main() {
    int numero_mese,numero_giorno;
    cin>>numero_mese;
    cin>>numero_giorno;
    const int giorni_febbraio=28;
    const int giorni_marzo=31;
    const int giorni_aprile=30;
    if (numero_mese == 2); {
        if (numero_giorno <= giorni_febbraio) {
            cout<<"data valida";
        } else {
            cout<<"data non valida";
        }
    } if (numero_mese == 3); {
        if (numero_giorno <= giorni_marzo) {
            cout<<"data valida";
        } else {
            cout<<"data non valida";
        }
    } if (numero_mese == 4); {
        if (numero_giorno <= giorni_aprile) {
            cout<<"data valida";
        } else {
            cout<<"data non valida";
        }
    }
}