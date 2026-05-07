#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;

    int v[n];

    
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> v[i];
    }

    cout << "Numeri primi:" << endl;

    for (int i = 0; i < n; i++) {
        int divisori = 0;

        if (v[i] > 1) {
            for (int j = 1; j <= v[i]; j++) {
                if (v[i] % j == 0) {
                    divisori++;
                }
            }

            if (divisori == 2) {
                cout << v[i] << " ";
            }
        }
    }

    return 0;
}