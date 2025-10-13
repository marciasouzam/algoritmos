#include <iostream>

int main() {
    double paisA, paisB, taxaA, taxaB;
    int anos = 0;

    std::cout << "Digite a população do país A: " << std::endl;
    std::cin >> paisA;
    
    std::cout << "Digite a população do país B: " << std::endl;
    std::cin >> paisB;

    std::cout << "Digite a taxa de crescimento do país A em porcentagem, mas sem o %" << std::endl;
    std::cin >> taxaA;

    std::cout << "Digite a taxa de crescimento do país B em porcentagem, mas sem o % " << std::endl;
    std::cin >> taxaB;

    double taxaAConvertida = taxaA / 100;
    double taxaBConvertida = taxaB / 100;

    while (paisA < paisB) {
        paisA = paisA + (paisA * taxaAConvertida); 
        paisB =  paisB + (paisB * taxaBConvertida); 
        anos++;
    }

    std::cout << "Serão necessários " << anos << " anos." << std::endl;

return 0; 
}