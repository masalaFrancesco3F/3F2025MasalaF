#include <iostream>

using namespace std;

int confrontaStringhe(const char a[], const char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] < b[i]) return -1;
        if (a[i] > b[i]) return 1;
        i++;
    }
    if (a[i] == '\0' && b[i] == '\0') return 0;
    return (a[i] == '\0') ? -1 : 1;
}

void copiaStringa(char destinazione[], const char sorgente[]) {
    int i = 0;
    while (sorgente[i] != '\0') {
        destinazione[i] = sorgente[i];
        i++;
    }
    destinazione[i] = '\0';
}

int main() {
    char nomi[10][50];
    double prezzi[10];

    for (int i = 0; i < 10; i++) {
        cout << "Nome bevanda " << i + 1 << ": ";
        cin >> nomi[i];
        cout << "Prezzo bevanda " << i + 1 << ": ";
        cin >> prezzi[i];
    }

    char nomiTemp[10][50];
    double prezziTemp[10];

    for (int i = 0; i < 10; i++) {
        copiaStringa(nomiTemp[i], nomi[i]);
        prezziTemp[i] = prezzi[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (confrontaStringhe(nomiTemp[j], nomiTemp[j + 1]) > 0) {
                char tNome[50];
                copiaStringa(tNome, nomiTemp[j]);
                copiaStringa(nomiTemp[j], nomiTemp[j + 1]);
                copiaStringa(nomiTemp[j + 1], tNome);

                double tPrezzo = prezziTemp[j];
                prezziTemp[j] = prezziTemp[j + 1];
                prezziTemp[j + 1] = tPrezzo;
            }
        }
    }

    cout << "\nListino ordinato per Nome:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << nomiTemp[i] << " - " << prezziTemp[i] << " euro" << endl;
    }

    for (int i = 0; i < 10; i++) {
        copiaStringa(nomiTemp[i], nomi[i]);
        prezziTemp[i] = prezzi[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (prezziTemp[j] > prezziTemp[j + 1]) {
                char tNome[50];
                copiaStringa(tNome, nomiTemp[j]);
                copiaStringa(nomiTemp[j], nomiTemp[j + 1]);
                copiaStringa(nomiTemp[j + 1], tNome);

                double tPrezzo = prezziTemp[j];
                prezziTemp[j] = prezziTemp[j + 1];
                prezziTemp[j + 1] = tPrezzo;
            }
        }
    }

    cout << "\nListino ordinato per Prezzo:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << nomiTemp[i] << " - " << prezziTemp[i] << " euro" << endl;
    }

    return 0;
}
