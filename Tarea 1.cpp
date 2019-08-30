
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

string mostrarMatriz(int matriz[3][3] = {}, string titulo = ""){
    string cadena = titulo + ": " + "[ ";
    int col = 0;
    int fil = 0;
    cout << "------------------------------------------" << endl;
    while(col <= 2 && fil <= 2){
        if(col == 0){
            cadena += "{";
            cadena += to_string(matriz[col][fil]) + ", ";
        } else if (col == 2){
            cadena += to_string(matriz[col][fil]);
            cadena += "} ";
        } else{
            cadena += to_string(matriz[col][fil]) + ", ";
        }
        if(col == 2){
          ++fil;
          col = -1;
        }
        ++col;
    }
    cadena += "]";
    cout << cadena << endl;
}

void suma(int col = 0, int matriz[3][3] = {}, int matriz2[3][3] = {}, int matriz3[3][3] = {}){
    if(col <= 2){
       for(int i = 0; i <= 2; i++){
         matriz3[col][i] = matriz[col][i] + matriz2[col][i];
       };
       ++col;
       suma(col, matriz, matriz2, matriz3);
    } else{
        mostrarMatriz(matriz3, "Matriz C");
    } 
}

int main(int argc, char** argv) {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz3[3][3] = {};
    
    mostrarMatriz(matriz, "Matriz A");
    mostrarMatriz(matriz2, "Matriz B");
    
    suma(0, matriz, matriz2, matriz3);
    
    return 0;
}

