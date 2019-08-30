#include <cstdlib>
#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int elevacion(int num, int potencia, int numE = 1){
    if(potencia == 0){
        return 1;
    } else{
        return num * elevacion(num, potencia-1);
    }
}

int main(int argc, char** argv) {
    
    cout << "El resultado es: " << elevacion(3, 4) << endl; 
    
    return 0;
}
