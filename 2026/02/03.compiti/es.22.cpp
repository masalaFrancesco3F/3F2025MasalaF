#include <iostream>

using namespace std;

int main() {
    int dividendo, divisore;
    int quoziente = 0;
    int resto;

    cout << "Inserisci il dividendo: ";
    cin >> dividendo;
    cout << "Inserisci il divisore: ";
    cin >> divisore;

    resto = dividendo;

    while (resto >= divisore) {
        resto = resto - divisore;
        quoziente = quoziente + 1;
    }

    cout << "Quoziente: " << quoziente << endl;
    cout << "Resto: " << resto << endl;

    return 0;
}
