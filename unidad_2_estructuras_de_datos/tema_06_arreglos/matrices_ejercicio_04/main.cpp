/*Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de números
aleatorios, copiar el contenido a otra matriz y, por último, mostrarla en pantalla.*/

#include <iostream>
#include <time.h>

using namespace std;

int main(){
    int numeros[100][100], m, n,
    matrizNueva[100][100], random = 0;

    cout << "Ingrese la cantidad de filas: ";
    cin >> m;
    cout << "y de columnas: ";
    cin >> n;

    srand(time(NULL));

    //Rellena de números aleatorios a la matriz "numeros".
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            random = 1+rand()%(100);
            numeros[i][j] = random;
        }
    }

    //Copia el contenido de "numeros" a "matrizNueva".
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            matrizNueva[i][j] = numeros[i][j];
        }
    }

    //Muestra "matrizNueva" en pantalla.
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << matrizNueva[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
