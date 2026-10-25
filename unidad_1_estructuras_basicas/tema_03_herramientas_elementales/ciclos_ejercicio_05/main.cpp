/*Leer valores enteros hasta que se introduzca un valor en el rango
de 20 a 30, incluidos, o se introduzca el valor 0. El programa debe
entregar la suma de los valores mayores a 0 introducidos.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numero, suma = 0;

    do{
        cout << "Ingrese un numero entero: " << endl;
        cin >> numero;

        if(numero>0){
            suma += numero;
        }

    }while(((numero<20) || (numero>30)) && (numero!=0));

    cout << "\nLa suma de los valores enteros mayores a cero introducidos es: " << suma << endl;

    getch();
    return 0;
}
