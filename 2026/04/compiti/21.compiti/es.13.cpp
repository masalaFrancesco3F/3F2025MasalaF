#include <iostream>

using namespace std;

bool stringheUguali(const char a[], const char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return false;
        i++;
    }
    return a[i] == '\0' && b[i] == '\0';
}

int main() {
    int N;
    cout << "Inserisci il numero di esami (max 30): ";
    cin >> N;

    if (N > 30) {
        N = 30;
    }

    char nomi[30][50];
    int voti[30];

    for (int i = 0; i < N; i++) {
        cout << "Inserisci nome esame " << i + 1 << ": ";
        cin >> nomi[i];
        cout << "Inserisci voto esame " << i + 1 << ": ";
        cin >> voti[i];
    }

    char cerca[50];
    cout << "\nInserisci il nome dell'esame da cercare: ";
    cin >> cerca;

    bool trovato = false;
    for (int i = 0; i < N; i++) {
        if (stringheUguali(nomi[i], cerca)) {
            cout << "Voto conseguito: " << voti[i] << endl;
            trovato = true;
            break;
        }
    }

    if (!trovato) {
        cout << "Esame non presente." << endl;
    }

    return 0;
}
