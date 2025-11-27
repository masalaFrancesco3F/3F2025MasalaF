#include <iostream>
using namespace std;
int main() {
    double tariffa,peso,prezzotot;
    cout << "inserisci la tariffa al kg: ";
    cin >> tariffa;
    cout << "inserisci il peso del pacco in kg: ";
    cin >> peso;
    if (peso <= 20){
        cout << "il prezzo totale è: " << tariffa << "euro";
    }else {
        peso = peso - 20;
        prezzotot= tariffa + (peso * 0,02);
        cout << "il prezzo totale è: " << prezzotot << " euro";
    }
    
}