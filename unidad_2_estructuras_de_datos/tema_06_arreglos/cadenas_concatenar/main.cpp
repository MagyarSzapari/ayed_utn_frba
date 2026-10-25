//Añadir o concatenar una cadena con otra.

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena1[] = "Esto es una cadena",
    cadena2[] = " de ejemplo.",
    cadena3[30];

    strcpy(cadena3, cadena1);

    strcat(cadena3, cadena2); //"strcat" significa "string concatenate".

    cout << cadena3 << endl;

    return 0;
}
