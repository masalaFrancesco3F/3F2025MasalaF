#include <iostream>
using namespace std;
int main () {
    const int quota_fissa = 100;
    const int una_settimana = 600;
    const int due_settimane = 1100;
    int supplemento_lenzuola = 20;
    int nsettimane;
    int costo_totale;
    cout << "Quante settimane vuoi soggiornare ?";
    cin >> nsettimane;
    cout << "vuoi un supplemento di lenzuola ? (1=si, 0=no)";
    cin >> supplemento_lenzuola;
    if (supplemento_lenzuola == 1){
        costo_totale=quota_fissa + una_settimana + supplemento_lenzuola;
    }
    else {
        if (nsettimane == 1){
            costo_totale=quota_fissa + una_settimana;
        } 
        else {
            costo_totale=quota_fissa + due_settimane;
        }
    }
    cout << "Il costo totale del soggiorno e' di: " << costo_totale << " euro.";
    return 0;
}