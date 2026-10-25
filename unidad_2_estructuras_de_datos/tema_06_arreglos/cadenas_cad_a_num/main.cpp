//Transformar una cadena en números.

#include <iostream>
#include <stdlib.h> //Para usar atoi() y atof().

using namespace std;

int main(){
    char cadena1[21],
    cadena2[21];
    int entero;
    float real;

    cout << "Ingrese un numero entero: ";
    cin.getline(cadena1, 21, '\n');
    cout << "Ingrese un numero real: ";
    cin.getline(cadena2, 21, '\n');

    entero = atoi(cadena1);
    cout << entero << endl;

    real = atof(cadena2);
    cout << real << endl;

    return 0;
}
