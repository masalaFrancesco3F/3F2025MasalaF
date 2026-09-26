#include <iostream>

using namespace std;

int main() {
    int n;
    int coppie = 0;

    cout << "Quante coppie vuoi inserire? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num1, num2;
        
        cout << "Inserisci il primo numero: ";
        cin >> num1;
        cout << "Inserisci il secondo numero: ";
        cin >> num2;

        if (num1 == num2) {
             coppie = coppie + 1;
        }
    }

    cout << "I numeri erano uguali " << coppie << " volte." << endl;

    return 0;
}
