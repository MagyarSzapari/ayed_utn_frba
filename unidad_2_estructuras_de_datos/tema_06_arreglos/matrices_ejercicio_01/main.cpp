/*Rellenar una matriz pidiendo al usuario el número de filas y
columnas, posteriormente mostrar la matriz en pantalla.*/

#include <iostream>

using namespace std;

int main(){
    int numeros[100][100], m, n; //m == filas, n == columnas.

    cout << "Ingrese el numero de filas: ";
    cin >> m;
    cout << "Ingrese el numero de columnas: ";
    cin >> n;

    //Almacena elementos en la matriz.
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << "Ingrese un numero para [" << i << "][" << j << "]: ";
            cin >> numeros[i][j];
        }
    }

    //Muestra la matriz.
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << numeros[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
