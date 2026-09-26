#include <iostream>
using namespace std;


int main() {
    char nome1, nome2, nome3;
    int copie1, copie2, copie3;

    

    cout << "Inserisci il nome del 1° quotidiano: ";
    cin >> nome1;
    cout << "Inserisci il numero di copie vendute del 1° quotidiano: ";
    cin >> copie1;

    cout << "\nInserisci il nome del 2° quotidiano: ";
    cin >> nome2;
    cout << "Inserisci il numero di copie vendute del 2° quotidiano: ";
    cin >> copie2;

    cout << "\nInserisci il nome del 3° quotidiano: ";
    cin >> nome3;
    cout << "Inserisci il numero di copie vendute del 3° quotidiano: ";
    cin >> copie3;
    int totale_copie_vendute = copie1 + copie2 + copie3;
    double incasso_totale_edicolante = 0.0;
    double guadagno_per_copia = 0.0;
     if (totale_copie_vendute < 200) {
        guadagno_per_copia = 0.10; 
    } else if (totale_copie_vendute >= 200 && totale_copie_vendute < 300) {
        guadagno_per_copia = 0.20;
    } else {
        guadagno_per_copia = 0.30; 
    }

    incasso_totale_edicolante = totale_copie_vendute * guadagno_per_copia;

    char giornale_piu_venduto;
    int max_vendite = 0;

    if (copie1 > max_vendite) {
        max_vendite = copie1;
        giornale_piu_venduto = nome1;
    }
    if (copie2 > max_vendite) {
        max_vendite = copie2;
        giornale_piu_venduto = nome2;
    }
    if (copie3 > max_vendite) {
        max_vendite = copie3;
        giornale_piu_venduto = nome3;
    }

    cout << "\n--- Riepilogo Vendite e Incasso ---\n";
    cout << "Totale copie vendute: " << totale_copie_vendute << "\n";
    cout << "Guadagno per copia applicato: EUR " << guadagno_per_copia << "\n";
    cout << "Il giornale che ha venduto di piu' e': " << giornale_piu_venduto << " (" << max_vendite << " copie)\n";
    cout << "L'incasso totale dell'edicolante e' di: EUR " << incasso_totale_edicolante << std::endl;
    return 0;
}
