
#include <cstdlib>
#include <iostream>

using namespace std;

int suma(int arreglo[], int n){
    if(n == 1){
        return arreglo[0];
    } else if(n > 1){
        return suma(arreglo, n-1) + arreglo[n-1];
    }
}

int main(int argc, char** argv) {

    int arreglo[] = {1, 1, 1, 1, 6};
    
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    
    cout << "La suma del arreglo es: " << suma(arreglo, longitud) << endl;
    
    return 0;
}

