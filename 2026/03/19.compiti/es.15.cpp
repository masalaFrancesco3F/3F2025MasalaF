#include <iostream>
#include <string>
using namespace std;
int main() {
    int n1, n2;
    
    cout << "Quanti nomi nel primo vettore? ";
    cin >> n1;
    string a1[n1];

    
    for (int i = 0; i < n1; i++) {
        cout << "Nome atleta " << i + 1 << " del primo vettore: ";
        cin >> a1[i];
    }

    cout << "Quanti nomi nel secondo vettore? ";
    cin >> n2;
    string a2[n2];

 
    for (int i = 0; i < n2; i++) {
        cout << "Nome atleta " << i + 1 << " del secondo vettore: ";
        cin >> a2[i];
    }

    string nome;
    bool inA1 = false, inA2 = false;

    cout << "Inserisci il nome da cercare: ";
    cin >> nome;

   
    for (int i = 0; i < n1; i++) {
        if (a1[i] == nome) {
            inA1 = true;
        }
    }

    
    for (int i = 0; i < n2; i++) {
        if (a2[i] == nome) {
            inA2 = true;
        }
    }

    
    if (inA1 && inA2)
        cout << "Il nome compare in entrambi i vettori." << endl;
    else if (inA1)
        cout << "Il nome compare solo nel primo vettore." << endl;
    else if (inA2)
        cout << "Il nome compare solo nel secondo vettore." << endl;
    else
        cout << "Il nome non compare in nessuno dei due vettori." << endl;

    return 0;
}