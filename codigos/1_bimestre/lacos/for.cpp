#include <iostream>

int contar_divisores_for(int n) {
    int i, qtd = 1;
    for (i=1; i<n; i++) {
    if ((n%i) == 0) {
        qtd++;
}
}

return qtd;
}