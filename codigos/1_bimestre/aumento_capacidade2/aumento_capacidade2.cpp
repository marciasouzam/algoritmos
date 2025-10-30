#include <iostream>

int * increase_capacity(int * data, int &capacity, int size){
    int* new_array = new int[capacity+10];
    for (int i=0 ; i<size ; ++i)
    new_array[i] = data[i];
    int* old_array = data;
    delete [] old_array;
    capacity = capacity + 10;
    std::cout << capacity << std::endl; // primeiro teste
    return new_array;

}

int main(){
    int *data,size=0,capacity=10,x;
    data = new int[capacity];
    while (std::cin >> x, x!=-1){ // encerramento do programa ao digitar -1 funciona corretamente
        if (size==capacity)
            data = increase_capacity(data, capacity, size);
        data[size++]=x;
        std::cout << capacity << std::endl; // primeiro teste
}
/* ... */
delete [] data;
return 0;
}

// o codigo está funcionando corretamente: ao digitar o 11° número, a capacidade aumenta de 10 para 20, e assim por diante.