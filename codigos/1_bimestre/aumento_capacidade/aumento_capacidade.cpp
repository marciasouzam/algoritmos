#include <iostream>

int main() {
    int *data, size = 0, capacity = 5, x;
    data = new int[capacity];

    while ((std::cin >> x) && x != -1) {
        if (size == capacity) {
            int* new_array = new int[capacity + 5];
            for (int i = 0; i < size; ++i)
                new_array[i] = data[i];
            int* old_array = data;
            data = new_array;
            delete[] old_array;
            capacity += 5;
        }
        data[size++] = x;
    }

    // opcional: imprime os valores lidos
   // for (int i = 0; i < size; ++i)
       // std::cout << data[i] << (i + 1 == size ? '\n' : ' ');

    delete[] data;
    return 0;
}


// o usuario digita valores ate digitar -1. Enquanto o size for igual capacity, ela atualiza a variavel size;
// testar novamente em casa; 