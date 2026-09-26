#include <iostream>

using namespace std;

bool stringheUguali18(const char a[], const char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return false;
        i++;
    }
    return a[i] == '\0' && b[i] == '\0';
}

void copiaStringa18(char destinazione[], const char sorgente[]) {
    int i = 0;
    while (sorgente[i] != '\0') {
        destinazione[i] = sorgente[i];
        i++;
    }
    destinazione[i] = '\0';
}

int main() {
    int N;
    cout << "Inserisci numero studenti: ";
    cin >> N;

    char nomi[100][100];
    int voti[100];

    for (int i = 0; i < N; i++) {
        cout << "Nome studente " << i + 1 << ": ";
        cin >> nomi[i];
        cout << "Voto studente (0 se assente): ";
        cin >> voti[i];
    }

    double sommaVoti = 0;
    int presenti = 0;
    int assenti = 0;
    int indiceMax = -1;

    for (int i = 0; i < N; i++) {
        if (voti[i] == 0) {
            assenti++;
        } else {
            sommaVoti += voti[i];
            presenti++;
            if (indiceMax == -1 || voti[i] > voti[indiceMax]) {
                indiceMax = i;
            }
        }
    }

    if (presenti > 0) {
        cout << "\nMedia dei voti dei presenti: " << sommaVoti / presenti << endl;
    } else {
        cout << "\nNessuno studente presente." << endl;
    }

    if (indiceMax != -1) {
        cout << "Studente con il voto massimo: " << nomi[indiceMax] << " (" << voti[indiceMax] << ")" << endl;
    }

    cout << "\nElenco insufficienti (esclusi gli assenti):" << endl;
    for (int i = 0; i < N; i++) {
        if (voti[i] > 0 && voti[i] < 6) {
            cout << "- " << nomi[i] << endl;
        }
    }

    cout << "Percentuale studenti assenti: " << (double)assenti / N * 100 << "%" << endl;

    return 0;
}
