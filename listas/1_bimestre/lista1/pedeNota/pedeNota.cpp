#include <iostream>

int main() {
    double nota;
        while (true) {
            std::cout << "Digite a nota: " << std::endl;
            std::cin >> nota;
            if (nota >= 0 && nota <= 10) {
                break; 
            } else {
            std::cout << "Nota inválida. Digite uma nota válida" << std::endl; }
                }
        return 0;
}