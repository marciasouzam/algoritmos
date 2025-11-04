#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
 cout << "Número de argumentos: " << argc << endl;

 for (int i = 0; i < argc; i++) {
    cout << "Argumento " << i << ": " << argv[i] << endl;
}

   return 0;
}


// caso teste: ./<> 4 5 6 7 8 9 10
// stack: main, cout, for, int i;
// argc e argv[i]: heap