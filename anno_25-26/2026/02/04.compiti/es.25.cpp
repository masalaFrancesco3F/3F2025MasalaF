#include <iostream>

using namespace std;

int main() {
    double pagaGiornaliera = 10.0;
    double totaleStipendio = 0.0;
    int giorni = 22;

    for (int i = 1; i <= giorni; i++) {
        totaleStipendio = totaleStipendio + pagaGiornaliera;
        pagaGiornaliera = pagaGiornaliera * 2;
    }

    cout << "Lo stipendio totale dopo " << giorni << " giorni e': " << totaleStipendio << " Euro" << endl;

    return 0;
}
