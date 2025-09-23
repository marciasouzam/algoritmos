#include <iostream>

int main() {
    int a, b;
    double c;
    std:: cin >> a >> b;
    // c = static_cast<double>(a/b); // 3.0
     c = static_cast<double>(a)/b; //  3.33
    // c = static_cast<double>a/(b); // 3.0
    // c = static_cast<double>(a)/static_cast<double>(b); // 3.33  
    std::cout << a << " / " << b << " = " << c << std::endl;
    return 0;
}

// teste 10.0/3.0


