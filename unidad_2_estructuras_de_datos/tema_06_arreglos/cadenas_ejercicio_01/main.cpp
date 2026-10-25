/*Pedir al usuario que ingrese una cadena de caracteres, luego, verificar
la longitud de la cadena, y si esta supera los 10 caracteres, mostrarla en
pantalla; caso contrario, no mostrarla*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra[300];
    int longitud = 0;

    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(palabra, 300, '\n');

    longitud = strlen(palabra);

    if(longitud > 10){
        cout << "La longitud de la cadena es: " << longitud << endl;
    }

    return 0;
}
