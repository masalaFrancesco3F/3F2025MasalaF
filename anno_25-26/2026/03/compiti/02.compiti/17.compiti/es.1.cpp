#include <iostream>
using namespace std;

int main() {

    int N, indice;

    cout << "Dimensione vettore: ";
    cin >> N;

    int v[N];
    for(int i=0; i<N; i++){
        cout << "Elemento " << i << ": ";
        cin >> v[i];
    }
    cout << "Inserisci indice da raddoppiare: ";
    cin >> indice;
    if(indice >= 0 && indice < N){
        v[indice] = v[indice] * 2;
    }
    cout << "Vettore risultante:\n";
    for(int i=0; i<N; i++){
        cout << v[i] << " ";
    }

    return 0;
}