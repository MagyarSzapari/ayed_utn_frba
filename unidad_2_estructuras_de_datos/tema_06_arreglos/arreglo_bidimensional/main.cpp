/*Una matriz es un vector de vectores, también llamadas arrays bidimensionales.

Una matriz se define así: tipo nombre[nfilas][ncolumnas];
    Ejemplos:

    int numeros[2][3];
    char letras[3][2];

Se pueden agregar elementos así:

    int numeros[2][3] = {1,2,3 , 4,5,6};

O de la siguiente forma:

    int numeros[2][3] = {{1,2,3} , {4,5,6}};

Si quiero llamar a un elemento:
    numeros[0][1];  -> sería "2".
Donde 0 es la posición en la fila, y 1 la posición en la columna.

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){


    cout << "Hello world!" << endl;

    getch();
    return 0;
}
