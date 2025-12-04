#include <iostream>
using namespace std;
int main () {
    float a,b,x;
    cout << "Inserisci il valore dei due numeri:";
    cin >> a >> b;
    if (a > 0) {
        x= b/a;
        cout << "Il valore della x è: " << x;
     } else {
        if (a == 0){
            cout << "L'equazione ha infinite soluzioni:";
        } else {
            cout << "L'equazione non ha soluzioni:";
        }
     }


        

}