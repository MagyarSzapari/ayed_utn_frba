/*Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y
otro real, convertirlos a sus respectivos valores y sumarlos.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    char cadena1[21],
    cadena2[21];
    int entero;
    float real,
    suma = 0;

    cout << "Ingrese un numero entero: ";
    cin.getline(cadena1, 21, '\n');
    cout << "Ingrese un numero real: ";
    cin.getline(cadena2, 21, '\n');

    entero = atoi(cadena1);
    real = atof(cadena2);
    suma = entero + real;

    cout << "La suma de los numeros ingresados es: " << suma << endl;

    return 0;
}
