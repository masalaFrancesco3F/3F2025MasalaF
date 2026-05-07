#include <iostream>
using namespace std;

int main(){

    int N, cont = 0;
    char v[100], c;

    cout << "Quanti caratteri inserire? ";
    cin >> N;
    for(int i=0; i<N; i++){
        cout << "Carattere " << i+1 << ": ";
        cin >> v[i];
    }
    cout << "Carattere da cercare: ";
    cin >> c;
    for(int i=0; i<N; i++){
        if(v[i] == c){
            cont++;
        }
    }

    cout << "Il carattere compare " << cont << " volte";

    return 0;
}