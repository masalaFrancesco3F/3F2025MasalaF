#include <iostream>

int main() {
    int numero;
    std::cout << "Inserisci un numero: ";
    std::cin >> numero;
   if (numero <= -5 || numero >= 10) {
        std::cout << "Il dato e' fuori dall'intervallo." << std::endl;
    } else {
        std::cout << "OK" << std::endl;
    }

    return 0; 
}