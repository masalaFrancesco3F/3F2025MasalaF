#include <iostream>
using namespace std;
int stipendio (int giorno, int paga, int paga_prima = 10){
    cout << "insersci la paga del primo giorno: ";
    cin >> paga_prima;
    cout << "inserisci il numero di giorni: ";
    cin >> giorno;
    for (int i=1; i <= giorno; i++){
       paga= paga_prima * 2; 
    }
    cout << "il tuo stipendio è: " << paga;
    return paga;
}

int main(){
    int giorno, paga, paga_prima;
    stipendio(giorno, paga, paga_prima);
    return 0;
}