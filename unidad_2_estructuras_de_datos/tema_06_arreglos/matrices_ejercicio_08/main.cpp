//Calcular el producto de dos matrices cuadradas de 3x3.

#include <iostream>

using namespace std;

int main(){
    int matriz1[3][3],
    matriz2[3][3],
    matriz3[3][3];

    cout << "Matriz 1: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << "Ingrese un numero [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "\nMatriz 2: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << "Ingrese un numero [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matriz3[i][j] = 0;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                matriz3[i][j] += matriz1[i][k]*matriz2[k][j];
            }
        }
    }

    cout << "\nMatriz 1:" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matriz1[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nMatriz 2:" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matriz2[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nMatriz Producto:" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matriz3[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
