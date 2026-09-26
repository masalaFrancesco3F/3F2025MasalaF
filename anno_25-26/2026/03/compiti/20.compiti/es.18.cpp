#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Quanti prodotti vuoi inserire? ";
    cin >> n;

    float prezzi[n];

    for (int i = 0; i < n; i++) {
        cout << "Prezzo prodotto " << i + 1 << ": ";
        cin >> prezzi[i];

        if (prezzi[i] < 5) {
            prezzi[i] = prezzi[i] * 1.10;
        } else {
            prezzi[i] = prezzi[i] * 1.06;
        }
    }

    cout << "\nPrezzi aggiornati:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Prodotto " << i + 1 << ": " << prezzi[i] << " euro" << endl;
    }

    return 0;
}
