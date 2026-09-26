#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Inserisci la lunghezza dei tre lati: " << std::endl;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "I numeri inseriti possono formare un triangolo." << endl;
    } else {
        cout << "I numeri inseriti NON possono formare un triangolo." << endl;
    }

    return 0;
}
