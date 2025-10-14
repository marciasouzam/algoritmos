#include <iostream>

void transpor(int M[][100], int n) {
    int aux, i, j;
    for (i = 1; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            aux = M[i][j];
            M[i][j] = M[j][i];
            M[j][i] = aux;
        }
    }
}

int main() {
    int n;
    std::cout << "Digite a ordem da matriz quadrada: ";
    std::cin >> n;
    int M[100][100];
    std::cout << "Digite os elementos da matriz:" << std::endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            std::cin >> M[i][j];

    transpor(M, n);

    std::cout << "Matriz transposta:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            std::cout << M[i][j] << " ";
        std::cout << std::endl;
    }
    return 0;
}