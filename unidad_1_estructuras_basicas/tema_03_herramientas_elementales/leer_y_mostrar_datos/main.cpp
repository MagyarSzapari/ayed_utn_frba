/*Leer de la entrada estándar los siguientes datos del usuario:

    Edad: dato de tipo entero;
    Sexo: dato de tipo caracter;
    Altura en metros: dato de tipo real;

Luego, mostrar los datos en la salida estándar.*/

#include <iostream>

using namespace std;

int main(){
    int edad;
    char sexo[10]; //El "[10]" especifica un máximo de hasta 10 caracteres.
    float altura;

    cout << "Ingrese su edad: " << endl;
    cin >> edad;
    cout << "\nIngrese su sexo: " << endl;
    cin >> sexo;
    cout << "\nIngrese su altura en metros: " << endl;
    cin >> altura;

    cout << "\nLos datos del usuario son: " << endl;
    cout << edad << endl << sexo << endl << altura << endl;

    return 0;
}
