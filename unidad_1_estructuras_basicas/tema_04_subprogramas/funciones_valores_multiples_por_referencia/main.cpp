/* Aclaración: Es una técnica que funciona, pero en realidad la función no
está retornando valores múltiples, sino que está actualizando los registros
de memoria de variables que ya se habían declarado. Para devolver
verdaderamente múltiples valores en C++ (con "return") se deben emplear
arrays o structs. */

#include <iostream>

using namespace std;

void calcular(int, int, int&, int&);

int main(){
    int numero1, numero2, suma = 0, producto = 0;

    cout << "Ingrese dos numeros: ";
    cin >> numero1;
    cout << "y: ";
    cin >> numero2;

    calcular(numero1, numero2, suma, producto);

    cout << "\nEl valor de la suma es: " << suma << endl;
    cout << "El valor del producto es: " << producto << endl;

    return 0;
}

void calcular (int numero1, int numero2, int& suma, int& producto){
    suma = numero1 + numero2;
    producto = numero1*numero2;
}
