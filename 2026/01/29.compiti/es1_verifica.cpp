#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Inserisci numeri tra 2 e 20 (fuori range per terminare):" << endl;

    while (cin >> n && n >= 2 && n <= 20) {
        cout << "Multipli di " << n << " minori di 100: ";
        for (int i = n; i < 100; i += n) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
