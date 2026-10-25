//Medir la longitud de una cadena de caracteres (string).

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra[] = "Hola Mundo";
    int longitud = 0;

    longitud = strlen(palabra);

    cout << "La longitud de la cadena es: " << longitud << endl;

    return 0;
}
