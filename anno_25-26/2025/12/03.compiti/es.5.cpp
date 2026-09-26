#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float a, b, c, delta, x, x1, x2;
    cin >> a,b,c ;
    if (a == 0){
        cout << "l'equazione non è di secondo grado";
    }
    else {
        delta = b*b-4*a*c;
    }
    if (delta > 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        cout << x1,x2;
    }
    else if (delta=0){
        x = -b/(2*a);
        cout << x;
    }
    else {
        cout << "l'equazione non ha radici reali";

    }
    return 0;
}