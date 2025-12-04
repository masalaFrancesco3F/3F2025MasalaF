#include <iostream>
using namespace std;
int main (){
    int eta1,eta2,eta3,etamag,etamin,diff;
    cout << "Inserisci l'età dei tre fratelli :";
    cin >> eta1 >> eta2 >> eta3;
    etamag=eta1;
    if (etamag < eta2){
        etamag=eta2;
        if (etamag < eta3){
            etamag=eta3;
        }
    } else {
        if (etamag < eta3){
            etamag=eta3;
        }
    }
    etamin=eta1;
    if (etamin > eta2){
        etamin=eta2;
        if (etamin > eta3){
            etamin=eta3;
        }
    } else {
        if (etamin > eta3){
            etamin=eta3;
        }
    }
    diff = etamag - etamin;
    cout << "La differenza di eta tra il maggiore e il minore e': " << diff << " anni." << endl;
    
    return 0;
}