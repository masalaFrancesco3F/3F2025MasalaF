#include <iostream>
#include <cmath> 
int main() {

    double num1, num2, num3;

    std::cout << "Inserisci il primo numero: ";
    std::cin >> num1;

    std::cout << "Inserisci il secondo numero: ";
    std::cin >> num2;

    std::cout << "Inserisci il terzo numero: ";
    std::cin >> num3;
    double differenza1 = num2 - num1;
    double differenza2 = num3 - num2;
    if (std::abs(differenza1 - differenza2) < 0.00001) {
        std::cout << "I numeri sono in progressione aritmetica." << std::endl;
        std::cout << "La ragione (differenza costante) e': " << differenza1 << std::endl;
    } else {
        std::cout << "I numeri NON sono in progressione aritmetica." << std::endl;
    }

    return 0;