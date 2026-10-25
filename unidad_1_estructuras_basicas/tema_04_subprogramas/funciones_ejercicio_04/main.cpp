/* Escribir un programa en C++ que devuelva la parte fraccionaria de cualquier
número introducido por el usuario. Por ejemplo, si se introduce el número
256.879, debería desplegarse el número 0.879. */

#include <iostream>

using namespace std;

//Prototipo de Funciones.
void pedirDatos();

float mantisa(float x);

//Declaracion global de variables.
float x;

int main(){
    pedirDatos();

    cout << "\nLa mantisa del numero es: " << mantisa(x) << endl;

    return 0;
}

//Definición de Funciones.
void pedirDatos(){
    cout << "Ingrese un numero: ";
    cin >> x;
}

float mantisa(float x){
    int y = x;
    float mantisaNumero = 0;
    mantisaNumero = x - y;

    return mantisaNumero;
}
