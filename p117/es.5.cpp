#include <iostream>
using namespace std;
int main() {
    float a,b,c;
    cout << "Inserici i valori della disequazione";
    cin >> a >> b >> c;
    if (a != 0){
        float delta = b*b - 4*a*c;
        if (delta > o) {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            cout << "I valori di x sono: " << x1 << "e" << x2;
        } 
        else if (delta == 0) {
            float x = -b / (2*a);
            cout << "La x vale:" << x;
        } 
        else {
            cout << "Non ci sono soluzioni reali.";
        }
    } 
    else {
        cout << "Non e' una equazione di secondo grado.";
    }
    return 0;
}