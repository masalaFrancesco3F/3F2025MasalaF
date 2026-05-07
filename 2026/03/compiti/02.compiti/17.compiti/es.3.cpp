#include <iostream>
using namespace std;

int main(){

    int N;
    bool ordinato = true;

    cout << "Numero elementi: ";
    cin >> N;

    int v[N];
    for(int i=0; i<N; i++){
        cin >> v[i];
    }
    for(int i=1; i<N; i++){
        if(v[i] < v[i-1]){
            ordinato = false;
        }
    }
    if(ordinato)
        cout << "Array ordinato";
    else
        cout << "Array NON ordinato";

    return 0;
}