#include <iostream>
using namespace std;
int main (){
    int vento,i;
    for (i=0; i<5; i++){
        cout << "Inserisci la velocità del vento in km/h: ";
        cin>> vento;
        if (vento > 70)
            cout << "Vento forte" << endl;
        else if (vento > 0 && vento <= 70)
            cout << "Vento moderato" << endl;
        else 
            cout << "Assenza di vento" << endl;
     }
}