#include <iostream>
using namespace std;
void ricercanumero(int v[], int n, int x){
    for (int i = 0; i < n; ++i) {
        if (v[i] == x) {
            cout << 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}
int main() {
    int dati[] = {2,5,3,7,11,13,17,19};
    int n = sizeof(dati) / sizeof(dati[0]);
    int x;

    cout << "Inserisci un numero da cercare: ";
    cin >> x;

    ricercanumero(dati, n, x);

    return 0;
}