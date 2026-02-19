#include <iostream>
using namespace std;
int fattoriale(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    }
    return n * fattoriale(n - 1); 
}