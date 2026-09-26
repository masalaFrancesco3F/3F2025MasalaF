#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream in("Clienti.txt");
    
    if (!in) {
        return 1;
    }

    int n;
    in >> n;

    int tessera, tesseraMin;
    double spesa, totale = 0, spesaMin;

    for (int i = 0; i < n; i++) {
        in >> tessera >> spesa;
        
        totale += spesa;

        if (i == 0 || spesa < spesaMin) {
            spesaMin = spesa;
            tesseraMin = tessera;
        }
    }

    in.close();

    cout << "Incasso totale: " << totale << endl;
    cout << "Tessera spesa minore: " << tesseraMin << endl;

    return 0;
}
