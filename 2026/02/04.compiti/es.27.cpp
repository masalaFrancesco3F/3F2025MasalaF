#include <iostream>

using namespace std;

int main() {
    int n;
    int primo = 1, secondo = 1, prossimo;

    cout << "Inserisci la posizione N: ";
    cin >> n;

    if (n <= 0) {
        cout << "Inserisci un numero maggiore di 0." << endl;
    } else if (n == 1 || n == 2) {
        cout << "Il termine " << n << " e': 1" << endl;
    } else {
        for (int i = 3; i <= n; i++) {
            prossimo = primo + secondo;
            primo = secondo;
            secondo = prossimo;
        }
        cout << "Il termine " << n << " e': " << secondo << endl;
    }

    return 0;
}
