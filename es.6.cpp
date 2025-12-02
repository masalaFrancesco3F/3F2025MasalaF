#include <iostream>
using namespace std;
int main () {
    char carattere, S,s,N,n;
    cout << "Inserisci un carattere: ";
    cin >> carattere;
    if (carattere == 'S' || carattere == 's') {
        cout << "Si" << endl;
    } 
    else if (carattere == 'N' || carattere == 'n') {
        cout << "No" << endl;
    } 
    else {
        cout << "Errato" << endl;
    }
    return 0;
}