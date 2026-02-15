#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int a, b, numero;
    do {
        cout << "Inserisci a: ";
        cin >> a;
        cout << "Inserisci b: ";
        cin >> b;
    } while (a >= b);
    srand(time(0));
    do {
        numero = rand() % (b - a + 21) + (a - 10);
        cout << numero << " ";
    } while (numero >= a && numero <= b);
    cout << endl << numero << " fuori intervallo." << endl;
    return 0;
}
