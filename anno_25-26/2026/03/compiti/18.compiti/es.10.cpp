#include <iostream>
using namespace std;
int main() {

    int n;
    float voti[100];
    int cont_insufficienti = 0;
    float somma = 0;

    
    cout << "Quanti voti vuoi inserire? ";
    cin >> n;

    
    for(int i = 0; i < n; i++){
        cout << "Voto " << i+1 << ": ";
        cin >> voti[i];
        somma += voti[i];   
    }
    cout << "\nVoti insufficienti:\n";
    for(int i = 0; i < n; i++){
        if(voti[i] < 6){
            cout << voti[i] << " ";
            cont_insufficienti++;
        }
    }
    float media = somma / n;

    
    cout << "\nNumero voti insufficienti: " << cont_insufficienti << endl;
    cout << "Media: " << media << endl;

    return 0;
}