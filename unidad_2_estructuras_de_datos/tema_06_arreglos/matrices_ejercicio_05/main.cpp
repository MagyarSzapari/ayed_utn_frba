/*Leer una matriz de 3x3 y crear su matriz traspuesta. La matriz traspuesta
es aquella en la que la columna i era la fila i de la matriz original.*/


#include <iostream>

using namespace std;

int main(){
    int numeros[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << "Ingrese un numero [" << i << "][" << j << "]: ";
            cin >> numeros[i][j];
        }
    }

    cout << "\nMatriz Original:\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << numeros[i][j];
        }
        cout << "\n";
    }

    cout << "\nMatriz Traspuesta:\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << numeros[j][i];
        }
        cout << "\n";
    }

    return 0;
}
