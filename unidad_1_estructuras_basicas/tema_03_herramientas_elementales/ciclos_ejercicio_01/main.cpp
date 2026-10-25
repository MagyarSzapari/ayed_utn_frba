/*Solicitar de la entrada estándar un entero del 1 al 10 y mostrar
en la salida estándar su tabla de multiplicar.*/

#include <iostream>

using namespace std;

int main(){
    int numero;

    do{
        cout << "Ingrese un numero entero del 1 al 10: " << endl;
        cin >> numero;
    }while((numero<1) || (numero>10)); //"||" funciona como el OR lógico.

    for(int i=1; i<=20; i++){
        cout << numero << "*" << i << " = " << numero*i << endl;
    }

    return 0;
}
