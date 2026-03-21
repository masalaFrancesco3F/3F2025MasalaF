#include <iostream>

using namespace std;

int main() {
    char V1[20];
    char V2[5];

    cout << "Inserisci i 20 caratteri per V1:" << endl;
    for (int i = 0; i < 20; i++) {
        cin >> V1[i];
    }

    cout << "Inserisci i 5 caratteri per V2:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> V2[i];
    }

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 5; j++) {
            if (V1[i] == V2[j]) {
                V1[i] = '*';
            }
        }
    }

    cout << "\nVettore V1 modificato:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << V1[i] << " ";
    }

    return 0;
}
