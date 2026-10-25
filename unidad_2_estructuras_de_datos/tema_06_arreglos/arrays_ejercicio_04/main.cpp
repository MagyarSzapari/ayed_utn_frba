/*Definir un vector de números y mostrar, en la salida estándar,
el vector en órden inverso del último al primer elemento.*/

#include <iostream>

using namespace std;

int main(){
    int numeros[100], n;

    cout << "Ingrese la cantidad de elementos del array: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }

    //El siguiente "for" muestra en orden inverso los elementos del array.
    for(int i=n-1; i>=0; i--){
        cout << numeros[i] << endl;
    }

    return 0;
}
