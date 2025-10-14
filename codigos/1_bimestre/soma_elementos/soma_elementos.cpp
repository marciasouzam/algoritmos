#include <iostream>

int main() {
    int n, i, j, sum;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> n;
    int a[n];
    std::cout << "Digite os elementos do vetor:" << std::endl;
    for (i = 0; i < n; i++)
        std::cin >> a[i];

 for (i = 0; i < n; i++) {
    for (j = 1, sum = a[0]; j <= i; j++)
        sum += a[j];
    std::cout << "A soma do sub-vetores de 0 até " << i << " é " << sum << std::endl;
}
   
return 0;
}