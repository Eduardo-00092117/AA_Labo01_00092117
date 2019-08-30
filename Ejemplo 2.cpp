
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int sucesion(int n){
    if(n == 0){
        return 0;
    } else if(n == 1){
        return 1;
    } else if(n >= 2){
        return sucesion(n-1) + sucesion(n-2);
    }
}

int main(int argc, char** argv) {
    
    cout << "En la posición 3 de la sucesion de fibonacci es: " << sucesion(3) << endl;
    
    return 0;
}

