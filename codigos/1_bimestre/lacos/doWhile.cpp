#include <iostream>

int contar_divisores_doWhile(int n) {
    int d=1, qtd=1;
    do {
        if ((n%d++)==0)
            qtd++;
    } while (d!=n);
    return qtd;
}