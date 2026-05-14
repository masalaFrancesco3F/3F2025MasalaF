#include <iostream>

using namespace std;

#include "gestorecontattiabc.h"
#include "gestoreramordinata.h"

int main() {

    GestoreContattiABC* gestore;

    gestore = new GestoreRAMOrdinata();

    gestore->aggiungi("Mario",
                       "Rossi",
                       "111");

    gestore->aggiungi("Anna",
                       "Bianchi",
                       "222");

    gestore->aggiungi("Luca",
                       "Verdi",
                       "333");

    gestore->aggiungi("Paolo",
                       "Neri",
                       "444");

    cout << "CONTATTI:\n\n";

    gestore->stampa();

    cout << "\n";

    int posizione =
        gestore->cerca("Verdi");

    cout << "Posizione Verdi: "
         << posizione
         << endl;

    cout << "\nElimino Verdi\n\n";

    gestore->elimina("Verdi");

    gestore->stampa();

    delete gestore;

    return 0;
}