#include <iostream>
using namespace std;
int main () {
    int eta;
    cout << "Inserisci la tua età: ";
    cin >> eta;
    if (eta <= 14)
        cout << "Puoi guidare solo gli scooter da 50cc.";
    else if (eta >= 15 && eta <= 17)
        cout << "Puoi guidare moto fino a 125cc.";
    else if (eta >= 18 && eta <= 20)
        cout << "Puoi guidare auto con un massimo di 95 cavalli.";
    else
        cout << "Puoi guidare qualsiasi veicolo.";
        
}