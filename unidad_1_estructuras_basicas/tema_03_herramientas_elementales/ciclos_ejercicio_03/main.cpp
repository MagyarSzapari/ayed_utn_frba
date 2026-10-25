/*Calcular y mostrar en la salida estándar la suma de los cuadrados
de los diez (10) primeros enteros mayores que cero (0).*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int suma = 0, cuadrado;

    for(int i=1; i<=10; i++){
        cuadrado = i * i;
        suma += cuadrado; //Es lo mismo que poner suma = suma + cuadrado.
    }

    cout << "La suma de los cuadrados de los diez primeros enteros mayores que cero es: "
    << suma << endl;

    getch();
    return 0;
}
