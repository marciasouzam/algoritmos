#include <iostream>

int soma_elementos(int n[], int comprimento) {
    int total = 0;
    for (int i = 0; i < comprimento; ++i) {
        total += n[i];
    }
    return total;
}

int main() {
    int comprimento;
    std::cout << "Digite o comprimento da lista" << std::endl;
    std::cin >> comprimento;
    int n[comprimento];

    std::cout << "Digite os números que irão compor a lista" << std::endl;
    for (int i=0; i<comprimento; i++) {
        std::cin >> n[i];
        }

    int soma = soma_elementos(n, comprimento);
    std::cout << "A soma dos elementos é " << soma << std::endl;
    return 0;

}