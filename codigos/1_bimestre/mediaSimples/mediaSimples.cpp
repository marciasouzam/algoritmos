#include <iostream>
#include <iomanip> // biblioteca para manipulação de entrada e saída

int main() {
    int a, b;
    double media;
    std::cin >> a >> b;
    media = (a+b)/2.0; 
    std:: cout << std:: fixed << std::setprecision(2)
                << media << std::endl;
    return 0;
}