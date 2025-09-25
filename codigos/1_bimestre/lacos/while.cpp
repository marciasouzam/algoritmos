#include <iostream>

int contar_divisores(int n) {
    int d=1, qtd=1;
    while (d!=n)
        if ((n%d)==0)
            qtd++;

    return qtd;
}