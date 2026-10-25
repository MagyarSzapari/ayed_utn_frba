/*Leer de la entrada estándar un vector de números y mostrar en
la salida estándar los números del vector con sus índices asociados.*/

#include <iostream>

using namespace std;

int main(){
    int numeros[100], n;

    cout << "Ingrese el numero de elementos del arreglo: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "Ingrese un numero: ";
        cin >> numeros[i]; //Guarda todos los elementos del vector.
    }

    //El siguiente "for" muestra los elementos con sus respectivos índices.
    for(int i=0; i<n; i++){
        cout << i << " -> " << numeros[i] << endl;
    }

    return 0;
}
