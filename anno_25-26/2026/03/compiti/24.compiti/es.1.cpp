#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Numero studenti: ";
    cin >> n;

    string COGNOMI[100];

    for (int i = 0; i < n; i++) {
        cout << "Inserisci cognome " << i + 1 << ": ";
        cin >> COGNOMI[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (COGNOMI[j] > COGNOMI[j + 1]) {
                string temp = COGNOMI[j];
                COGNOMI[j] = COGNOMI[j + 1];
                COGNOMI[j + 1] = temp;
            }
        }
    }

    cout << "\nElenco in ordine alfabetico:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << COGNOMI[i] << endl;
    }

    return 0;
}
