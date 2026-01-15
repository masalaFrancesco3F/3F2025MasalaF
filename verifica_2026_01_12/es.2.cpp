#include <iostream>
using namespace std;
int main(){
    const int te = 2;
    const int succo = 3;
    const int caffe = 1;
    int scelta;
    int soldi;
    cout<< "Scegli una bevanda (1:te, 2:succo 3:caffè): ";
    cin>> scelta;
    if (scelta == 1){
        cout<< "Hai scelto il tè"<< endl;
        cout<< "quanti soldi inserisci?"<< endl;
        cin>> soldi;
        if (soldi >= te){
            cout<< "Ecco la bevanda"<< endl;
        }
        else {
            cout<< "Credito insufficente"<< endl;
        }
     }
    else if (scelta == 2){
        cout<< "Hai scelto il succo"<< endl;
        cout<< "quanti soldi inserisci?"<< endl;
        cin>> soldi;
        if (soldi >= succo){
            cout<< "Ecco la bevanda"<< endl;
        }
        else {
            cout<< "Credito insufficente"<< endl;
        }
     }
     else if (scelta == 3){
        cout<< "Hai scelto il caffè"<< endl;
        cout<< "quanti soldi inserisci?"<< endl;
        cin>> soldi;
        if (soldi >= caffe){
            cout<< "Ecco la bevanda"<< endl;
        }
        else {
            cout<< "Credito insufficente"<< endl;
        }
     }
     return 0;
}
    