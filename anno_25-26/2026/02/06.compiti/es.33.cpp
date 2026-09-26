#include <iostream>

using namespace std;

int main() {
    int n, m;
    double abitantiProvincia;
    double abitantiTotaliTutteRegioni = 0;
    char nomeRegione[50];

    do {
        cout << "Inserisci il numero di regioni (N > 0): ";
        cin >> n;
    } while (n <= 0);

    for (int i = 0; i < n; i++) {
        double abitantiRegione = 0;

        cout << "\nNome della regione: ";
        cin >> nomeRegione;

        do {
            cout << "Numero di province (M > 0): ";
            cin >> m;
        } while (m <= 0);

        for (int j = 0; j < m; j++) {
            cout << "Abitanti provincia " << j + 1 << ": ";
            cin >> abitantiProvincia;
            abitantiRegione += abitantiProvincia;
        }

        cout << "Totale abitanti regione " << nomeRegione << ": " << abitantiRegione << endl;
        abitantiTotaliTutteRegioni += abitantiRegione;
    }

    cout << "\nTotale complessivo abitanti: " << abitantiTotaliTutteRegioni << endl;

    return 0;
}
