#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

int main() {
    ifstream in("numeri.txt");
    if (!in) return 1;

    int n, num;
    in >> n;

    int contPari = 0, contDispari = 0;
    double sommaPari = 0, sommaDispari = 0;
    int maxPos = -1;
    int minNeg = 0;
    bool trovatoNeg = false;

    for (int i = 0; i < n; i++) {
        in >> num;

        if (num % 2 == 0) {
            sommaPari += num;
            contPari++;
        } else {
            sommaDispari += num;
            contDispari++;
        }

        if (num > 0 && num > maxPos) {
            maxPos = num;
        }

        if (num < 0) {
            if (!trovatoNeg || num < minNeg) {
                minNeg = num;
                trovatoNeg = true;
            }
        }
    }

    if (contDispari > 0) cout << "Media dispari: " << sommaDispari / contDispari << endl;
    if (contPari > 0) cout << "Media pari: " << sommaPari / contPari << endl;
    
    if (maxPos != -1) cout << "Maggiore positivo: " << maxPos << endl;
    if (trovatoNeg) cout << "Minore negativo: " << minNeg << endl;

    return 0;
}
