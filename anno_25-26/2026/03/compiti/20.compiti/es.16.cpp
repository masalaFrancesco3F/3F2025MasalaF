#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;

    int numeri[n];
    int pari[n], dispari[n];
    int p = 0; 
    int d = 0;

    cout << "Inserisci i " << n << " numeri:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numeri[i];
        
        if (numeri[i] % 2 == 0) {
            pari[p] = numeri[i];
            p++;
        } else {
            dispari[d] = numeri[i];
            d++;
        }
    }

    cout << "\nVettore PARI: ";
    for (int i = 0; i < p; i++) {
        cout << pari[i] << " ";
    }

    cout << "\nVettore DISPARI: ";
    for (int i = 0; i < d; i++) {
        cout << dispari[i] << " ";
    }

    return 0;
}
