#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    int contatore = 0;
    string motivo;

    do {
        cout << "Inserisci il primo numero: ";
        cin >> num1;
        cout << "Inserisci il secondo numero: ";
        cin >> num2;
        
        contatore++;

        if (num1 == num2) {
            motivo = "I numeri sono uguali";
            break;
        } else if (num2 > num1) {
            motivo = "Il secondo numero e' maggiore del primo";
            break;
        }

    } while (true);

    cout << "\nTerminato: " << motivo << endl;
    cout << "Coppie inserite: " << contatore << endl;

    return 0;
}
