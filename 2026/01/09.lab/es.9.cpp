#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "indica quanti numeri vuoi stampare" << endl;
    cin >> n;
    if (n < 0) {
        cout << "numero non valido" << endl;
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        i = i * 2;
        cout << i << endl;
    }
    return 0;
}