#include <iostream>
using namespace std;
int main(){
    int num;
    cout<< "inserisci un numero tra 1 e 5 :";
    cin>> num;
    if (num >= 1 && num <= 5){
        if (num == 5){
            cout<< "Eccellente"<< endl;
        }
        else if (num == 4){
            cout<< "Buono"<< endl;
        }
        else if (num == 3){
            cout<< "Sufficente"<< endl;
        }
        else if (num == 2){
            cout<< "Insufficente"<< endl;
        }
        else if (num == 1){
            cout<< "Gravemente insufficente"<< endl;
        }
    }
    else {
        cout<< "Errore: valore non valido"<< endl;
    }
}

