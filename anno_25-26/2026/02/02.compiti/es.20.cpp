#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    int prodotto = 0;

    cout << "Inserisci il primo numero: ";
    cin >> num1;
    cout << "Inserisci il secondo numero: ";
    cin >> num2;

    for (int i = 0; i < num2; i++) {
        prodotto = prodotto + num1;
    }

    cout << "Il prodotto e': " << prodotto << endl;

    return 0;
}
