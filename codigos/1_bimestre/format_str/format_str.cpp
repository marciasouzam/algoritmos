#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;
    x = 125 * 2;
    std::cout << "Streams can take in text." << std::endl;
    std::cout << 137 << std::endl;
    std::cout << 2.71828 << std::endl;
    std::cout << x << std::endl;
    std::cout << "Here is text followed by a number: " << y << std::endl;
    return 0;
}