/* Escribir una función llamada multiplicar() que acepte dos números en punto
flotante como parámetros, multiplique estos dos números y despliegue el resultado. */

#include <iostream>

using namespace std;

//Prototipos de Función
void pedirDatos();

void multiplicar(float x, float y);

//Declaro variables globales.
float x, y;

int main(){
    pedirDatos();
    multiplicar(x, y);

    return 0;
}

void pedirDatos(){
    cout << "Ingrese dos numeros: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
}

void multiplicar(float x, float y){
    float multiplicacion = x*y;

    cout << "La multiplicacion es: " << multiplicacion << endl;
}
