/*Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar
todo su contenido hacia otro arreglo de caracteres.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena1[300],
    cadena2[300];

    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(cadena1, 300, '\n');

    strcpy(cadena2, cadena1);

    cout << cadena2 << endl;

    return 0;
}
