#include <iostream>
using namespace std;
int main() {
    const float pk=1.20;
    float kmi,kmf,kmp,pf;
    char persona [20];
    cout<< "inserisci il nome del cliente";
    cin>>persona;
    cout<< "inserisci i km iniziali";
    cin>>kmi;
    cout<< "inserisci i km finali";
    cin>>kmf;
    kmp=kmf-kmi;
    pf=kmp*pk;
    cout<<"il cliente "<<persona<<" ha percorso "<<kmp<<" km e deve pagare "<<pf<<" euro";
    return 0;
}