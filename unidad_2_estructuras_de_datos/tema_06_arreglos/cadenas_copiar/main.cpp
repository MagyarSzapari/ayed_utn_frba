//Copiar el contenido de una cadena a otra.

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char nombre1[] = "Marco",
    nombre2[20];

    strcpy(nombre2, nombre1); //"strcpy" significa "string copy".

    cout << nombre2 << endl;

    return 0;
}
