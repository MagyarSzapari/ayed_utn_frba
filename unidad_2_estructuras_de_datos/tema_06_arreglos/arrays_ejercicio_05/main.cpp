/*Leer de la entrada estándar un vector de enteros y
determinar el mayor elemento del vector.*/

#include <iostream>

using namespace std;

int main(){
    int numeros[100], n, mayor = -2147483648;

    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << i+1 << ". Ingrese un numero: ";
        cin >> numeros[i];

        if(numeros[i] > mayor){
            mayor = numeros[i];
        }
    }

    cout << "\nEl mayor elemento del arreglo es: " << mayor << endl;

    return 0;
}
