
#include <cstdlib>
#include <iostream>

using namespace std;

int numMenor(int num [], int sizeArray, int position, int numM = 0){
    int menor = numM;
    if(position < 0){
        return numM;
    } else{
        for(int i = 0; i < sizeArray; i++){
            if(num[i] <= menor){
                menor = num[i];
            }
        }
        return numMenor(num, sizeArray-1, position-1, menor);
    }
}

int main(int argc, char** argv) {
    int arreglo[] = {0, 1, 23, 2, -1, 123, 23};
    
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    
    cout << "El numero menor del arreglo es: " << numMenor(arreglo, longitud, longitud-1, arreglo[longitud-1]) << endl;
    
    return 0;
}

