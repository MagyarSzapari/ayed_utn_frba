/* Escribir una función llamada alCuadrado() que calcule el cuadrado del
valor que se le transmite y despliegue el resultado. La función deberá ser
capaz de elevar al cuadrado números flotantes. */

#include <iostream>

using namespace std;

//Prototipos de función.
void pedirDatos();

void alCuadrado(float x);

//Declaración global de variables.
float x;

int main(){
    pedirDatos();
    alCuadrado(x);

    return 0;
}

//Definición de función.
void pedirDatos(){
    cout << "Ingrese un numero: ";
    cin >> x;
}

void alCuadrado(float x){
    x *= x;

    cout << "\nEl cuadrado del numero ingresado es: " << x << endl;
}
