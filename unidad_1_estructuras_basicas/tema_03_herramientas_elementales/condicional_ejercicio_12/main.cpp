/*Hacer un menú que considere las siguientes opciones:

  Caso 1: Cubo de un numero.
  Caso 2: Numero par o impar.
  Caso 3: Salir.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int opcion, numero, resultado;

    cout << "Ingrese un numero entero: " << endl;
    cin >> numero;
    cout << "\nElija una opcion: " << endl;
    cout << "\t1. Cubo de un numero." << endl;
    cout << "\t2. Numero par o impar." << endl;
    cout << "\t3. Salir." << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion){
        case 1:
            resultado = pow(numero, 3);

            cout << "El cubo de " << numero << " es " << resultado << endl; break;

        case 2:
            if(numero%2 == 0){
                cout << "El numero ingresado es par." << endl;
            }
            else{
                cout << "El numero ingresado es impar." << endl; break;
            }

        case 3: break;
    }

    return 0;
}
