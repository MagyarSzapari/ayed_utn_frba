/*Hacer una matriz de tipo entera de 2x2, llenarla de números
y, luego, copiar todo su contenido hacia otra matriz.*/

#include <iostream>

using namespace std;

int main(){
    int numeros[2][2] = {{1,2} , {3,4}},
    matrizNueva[2][2];

    //Pasa el contenido de una matriz a otra.
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            matrizNueva[i][j] = numeros[i][j];
        }
    }

    //Muestra el contenido de la nueva matriz.
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << matrizNueva[i][j];
        }
        cout << "\n";
    }

    return 0;
}
