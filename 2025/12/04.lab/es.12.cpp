#include <iostream>
using namespace std;
#include <algorithm>
int main (){
    int eta1,eta2,eta3;
    cout << "Inserisci l'età dei tre fratelli :";
    cin >> eta1 >> eta2 >> eta3;
      int eta_maggiore = max({eta1, eta2, eta3});
    int eta_minore   = min({eta1, eta2, eta3});
    int differenza_assoluta = eta_maggiore - eta_minore;
    cout << "La differenza di eta tra il maggiore e il minore e': " << differenza_assoluta << " anni." << endl;
    
    return 0;
}