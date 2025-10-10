#include <iostream>

int main() {
    int paisA = 80000, paisB = 200000;
    int anos = 0;

    while (paisA < paisB) {
        paisA = paisA + (paisA * 0.03); // 3% = 0.03
        paisB =  paisB + (paisB * 0.015); // 1.5% = 0.015
        anos++;
    }

    std::cout << "Serão necessários " << anos << " anos." << std::endl;

return 0; 
}
