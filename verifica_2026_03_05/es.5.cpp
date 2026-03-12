#include <iostream>
using namespace std;
void non_picchi(int v[], int n) {
    cout << "I non-picchi nell'array sono: ";
    for (int i = 0; i < n; ++i) {
        if ((i == 0 || v[i] <= v[i - 1]) && (i == n - 1 || v[i] <= v[i + 1])) {
            cout << v[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    int dati[] = {1, 3, 2, 5, 4, 6, 7, 8, 9, 10};

    int n = sizeof(dati) / sizeof(dati[0]);

    non_picchi(dati, n);

    return 0;
}