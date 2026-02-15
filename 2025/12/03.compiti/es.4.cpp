#include <iostream>
using namespace std;
int main (){
    int minuti, risposta;
    cout << "inserisci i minuti da convertire";
    cin >> minuti;
    cout << "vuoi convertirlo in ore(1) o in secondi(2)";
    cin >> risposta;
    if (risposta = 1){
        int secondi = minuti*60;
        cout << secondi;
    }
    else {
        int ore = minuti/60;
        cout << ore;
    }
    return 0;
}