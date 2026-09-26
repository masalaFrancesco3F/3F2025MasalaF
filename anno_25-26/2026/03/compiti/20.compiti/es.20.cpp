#include <iostream>

using namespace std;

int main() {
    float temp[30];
    float somma = 0, media;
    int giornoMin = 0, giornoMax = 0, giornoScostamento = 0;

    for (int i = 0; i < 30; i++) {
        cout << "Temperatura giorno " << i + 1 << ": ";
        cin >> temp[i];
        somma += temp[i];

        if (temp[i] < temp[giornoMin]) giornoMin = i;
        if (temp[i] > temp[giornoMax]) giornoMax = i;
    }

    media = somma / 30;

    float maxScostamento = 0;
    for (int i = 0; i < 30; i++) {
        float scostamento = temp[i] - media;
        if (scostamento < 0) scostamento = -scostamento; 

        if (scostamento > maxScostamento) {
            maxScostamento = scostamento;
            giornoScostamento = i;
        }
    }

    cout << "\nMedia temperature: " << media << endl;
    cout << "Temperatura minima: giorno " << giornoMin + 1 << endl;
    cout << "Temperatura massima: giorno " << giornoMax + 1 << endl;
    cout << "Maggior scostamento dalla media: giorno " << giornoScostamento + 1 << endl;

    return 0;
}
