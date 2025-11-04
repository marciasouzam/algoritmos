#include <iostream>
// Exemplo: imprime endereços de variáveis
int main() {
	int a = 10, b = 20;
	int c;
	c = (a + b) / 2;
	std::cout << "O endereco de a e "
				  << reinterpret_cast<unsigned long long>(&a)
			  << " (" << &a << ")" << std::endl;
	std::cout << "O endereco de b e "
				  << reinterpret_cast<unsigned long long>(&b)
			  << " (" << &b << ")" << std::endl;
	std::cout << "O endereco de c e "
				  << reinterpret_cast<unsigned long long>(&c)
			  << " (" << &c << ")" << std::endl;

	return 0;
}
