#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Quanti nomi vuoi inserire? ";
    cin >> n;

    string NOMI[100];

    for (int i = 0; i < n; i++) {
        cout << "Inserisci nome " << i + 1 << ": ";
        cin >> NOMI[i];
    }

    string primo = NOMI[0];
    string ultimo = NOMI[0];

    for (int i = 1; i < n; i++) {
        if (NOMI[i] < primo) {
            primo = NOMI[i];
        }
        if (NOMI[i] > ultimo) {
            ultimo = NOMI[i];
        }
    }

    cout << "Il primo in ordine alfabetico e': " << primo << endl;
    cout << "L'ultimo in ordine alfabetico e': " << ultimo << endl;

    return 0;
}
