#include <iostream>

int maior_array(int a[], int tamanho) {
    int maior = a[0];
    for (int i = 1; i < tamanho; ++i) {
        if (a[i] > maior) {
            maior = a[i];
            }
    }
    return maior;
}

int maior_array2(int a[], int tamanho) {
    int maior = a[0];
    for (int i = 1; i < tamanho; ++i) {
        if (a[i] > maior) 
            maior = a[i];
        if (i == 20) {
            a[i] = 100; }
        }
    return maior;
}


int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) 
        std::cin >> a[i];
    int maior = maior_array(a, n);
    int maior2 = maior_array2(a, n);
    std::cout << maior << std::endl;
    std::cout << maior2 << std::endl;

    for (int i = 0; i < n; ++i) 
        std::cout << a[i] << std::endl;
    
    return 0;
}