#include <iostream>

using namespace std;

struct Iscritto {
    char nome[100];
    double acconto;
    double saldo;
    bool pagato;
};

bool stringheUguali19(const char a[], const char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return false;
        i++;
    }
    return a[i] == '\0' && b[i] == '\0';
}

int main() {
    int N;
    cout << "Numero iscritti: ";
    cin >> N;

    Iscritto iscritti[100];

    for (int i = 0; i < N; i++) {
        cout << "Nome iscritto " << i + 1 << ": ";
        cin >> iscritti[i].nome;
        iscritti[i].acconto = 0;
        iscritti[i].saldo = 0;
        iscritti[i].pagato = false;
    }

    int scelta = 1;
    while (scelta != 0) {
        cout << "\n1. Registra pagamento\n2. Stampa debitori\n0. Esci\nScelta: ";
        cin >> scelta;

        if (scelta == 1) {
            char nomeCercato[100];
            cout << "Inserisci nome iscritto: ";
            cin >> nomeCercato;

            bool trovato = false;
            for (int i = 0; i < N; i++) {
                if (stringheUguali19(iscritti[i].nome, nomeCercato)) {
                    trovato = true;
                    int tipo;
                    cout << "1. Acconto\n2. Saldo\nScelta: ";
                    cin >> tipo;
                    if (tipo == 1) {
                        cout << "Importo acconto: ";
                        cin >> iscritti[i].acconto;
                    } else if (tipo == 2) {
                        cout << "Importo saldo: ";
                        cin >> iscritti[i].saldo;
                        iscritti[i].pagato = true;
                    }
                    break;
                }
            }
            if (!trovato) cout << "Iscritto non trovato." << endl;
        } else if (scelta == 2) {
            cout << "\nIscritti che devono ancora versare il saldo:" << endl;
            for (int i = 0; i < N; i++) {
                if (!iscritti[i].pagato) {
                    cout << "- " << iscritti[i].nome << endl;
                }
            }
        }
    }

    return 0;
}
