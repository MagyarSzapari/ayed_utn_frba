/*Determinar si una matriz es simétrica o no. Una matriz es simétrica
si es cuadrada y si es igual a su matriz transpuesta.*/

#include <iostream>

using namespace std;

int main(){
    int numeros[100][100], m, n;
    char flag = 'V'; //Esto es una bandera (flag) declarada como "Verdadera".

    cout << "Ingrese la cantidad de filas: ";
    cin >> m;
    cout << "y de columnas: ";
    cin >> n;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << "Ingrese un numero [" << i << "][" << j << "]: ";
            cin >> numeros[i][j];
        }
    }

    if(m == n){ //Si la matriz es cuadrada...
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(numeros[i][j] != numeros[j][i]){
                    flag = 'F'; //Si la matriz NO es traspuesta, la flag es "Falsa".
                    break;
                }
            }
        }
    }

    if((flag == 'F') || (m != n)){ //Si la flag es "Falsa" o la matriz NO es cuadrada...
        cout << "\nLa matriz NO es simetrica.";
    }
    else{
        cout << "\nLa matriz es simetrica.";
    }

    return 0;
}
