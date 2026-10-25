//Calcular la suma de dos matrices cuadradas de 3x3.

#include <iostream>

using namespace std;

int main(){
    int numeros1[3][3],
    numeros2[3][3],
    numeros3[3][3];

    cout << "Matriz 1: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << "Ingrese un numero [" << i << "][" << j << "]: ";
            cin >> numeros1[i][j];
        }
    }

    cout << "\nMatriz 2: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << "Ingrese un numero [" << i << "][" << j << "]: ";
            cin >> numeros2[i][j];
        }
    }

    cout << "\nMatriz Suma: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            numeros3[i][j] = numeros1[i][j] + numeros2[i][j];
            cout << numeros3[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
