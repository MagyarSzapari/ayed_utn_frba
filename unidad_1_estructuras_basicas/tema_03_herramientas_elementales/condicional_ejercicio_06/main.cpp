/* Leer de la entrada estándar un carácter e indicar en la salida estándar si el carácter
es una vocal minúscula, una vocal mayúscula o si no es una vocal. */

#include <iostream>

using namespace std;

int main(){
    char caracter;

    cout << "Ingrese un caracter: " << endl;
    cin >> caracter;

    switch(caracter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout << caracter << " es una vocal minuscula." << endl; break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout << caracter << " es una vocal mayuscula." << endl; break;
        default: cout << caracter << " NO es una vocal." << endl; break;
    }

    return 0;
}
