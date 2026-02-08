#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Inserisci N: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
