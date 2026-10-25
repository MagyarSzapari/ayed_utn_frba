/*Pedir al usuario que ingrese 2 cadenas de caracteres, e indicar si ambas cadenas
son iguales; en caso de NO serlo, indicar cuál es mayor alfabéticamente. */

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena1[300],
    cadena2[300];

    cout << "Ingrese una primera cadena de caracteres: ";
    cin.getline(cadena1, 300, '\n');
    cout << "Ingrese una segunda cadena de caracteres: ";
    cin.getline(cadena2, 300, '\n');

    if(strcmp(cadena1, cadena2) == 0){
        cout << "Las cadenas ingresadas son iguales." << endl;
    }
    else if(strcmp(cadena1, cadena2) == 1){
        cout << "La primera cadena de caracteres es mayor alfabeticamente." << endl;
        }
    else{
        cout << "La segunda cadena de caracteres es mayor alfabeticamente." << endl;
        }

    return 0;
}
