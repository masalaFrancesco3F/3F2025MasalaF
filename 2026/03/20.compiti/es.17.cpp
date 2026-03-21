#include <iostream>

using namespace std;

int main() {
    int v1[100];
    int v2[10];
    int seme = 42;

    for (int i = 0; i < 10; i++) {
        v2[i] = 0;
    }

    for (int i = 0; i < 100; i++) {
        seme = (seme * 1103515245 + 12345) & 0x7fffffff;
        v1[i] = (seme % 100) + 1;

        int indice = v1[i] / 10;
        if (indice > 9) {
            indice = 9;
        }
        v2[indice]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << "Indice " << i << ": " << v2[i] << endl;
    }

    return 0;
}
