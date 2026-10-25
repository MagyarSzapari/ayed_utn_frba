/*Pedir su nombre al usuario en MAYÚSCULA. Si su nombre empieza por la letra
A, convertir su nombre a minúsculas; caso contrario, no convertirlo.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char nombreUsuario[30];

    cout << "Ingrese su nombre en MAYUSCULAS: ";
    cin.getline(nombreUsuario, 30, '\n');

    if(nombreUsuario[0] == 'A'){
        strlwr(nombreUsuario);
        cout << nombreUsuario << endl;
    }
    else{
        cout << nombreUsuario << endl;
    }

    return 0;
}
