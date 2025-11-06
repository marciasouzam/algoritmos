#include <iostream>

int * increase_capacity(int *data, int &capacity, int size) {
    int* new_array = new int[capacity + 10]; // int*: armazena o endereço do primeiro elemento de um bloco de ints alocado dinamicamente no heap.
    //new int[capacity + 10]: declaração do array new_array.
    for (int i = 0; i < size; ++i)
        new_array[i] = data[i];
    delete [] data; // libera bloco antigo de memória
    capacity = capacity + 10;  // valor da capacidade é atualizado
    std::cout << capacity << std::endl; // primeiro teste (opcional)
    return new_array;
}


int * push_back(int *data, int &capacity, int &size, int value){
if (size==capacity)
    data = increase_capacity(data, capacity, size); // diminui a capacidade
    data[size++]=value;
    return data;

}

int main(){
    int *data, size=0, capacity=10,x; // data:ponteiro
    data = new int[capacity]; //
    while (std::cin >> x, x!=-1){
        data = push_back(data, capacity, size, x);
        }
/* ... */
delete [] data;
return 0;
}

// O que a função increase_capacity faz?
// Ela aumenta a capacidade do array em 10 unidades, copiando os elementos antigos para o novo array e liberando a memória do array antigo.