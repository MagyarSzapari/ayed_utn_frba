/*Crear una cadena que contenga la frase "Hola que tal", luego, crear otra cadena
para preguntarle al usuario su nombre; por último, añadir el nombre al final
de la primera cadena y mostrar el mensaje completo "Hola que tal (nombreDelUsuario)".*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena1[] = "Hola que tal, ",
    nombreUsuario[30], cadena2[45];

    cout << "Ingrese su nombre: ";
    cin.getline(nombreUsuario, 30, '\n');

    strcpy(cadena2, cadena1);

    strcat(cadena2, nombreUsuario);

    cout << cadena2 << endl;

    return 0;
}
