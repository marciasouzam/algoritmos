#include <iostream>

int main() {
    int a = 20;
    int *p;
    p = &a;
    std::cout << "Valor de *p: " << *p << std::endl;
    *p = 50;
    std:: cout << "Valor de a: " << a << std::endl;
    return 0;
}
    