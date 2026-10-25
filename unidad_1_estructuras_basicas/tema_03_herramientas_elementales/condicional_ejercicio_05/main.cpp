/* Leer de la entrada estándar un carácter e indicar en la salida estándar
si se trata de una vocal minúscula o no. */

#include <iostream>

using namespace std;

int main(){
    char caracter;

    cout << "Ingrese un caracter: " << endl;
    cin >> caracter;

    switch(caracter){
        case 'a': //No es necesario poner el comando para todos los casos porque es igual para todas.
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout << caracter << " es una vocal minuscula."; break;
        default: cout << caracter <<" NO es una vocal minuscula."; break;
    }

    return 0;
}
