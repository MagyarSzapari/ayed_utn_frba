/*Intercambiar el valor de 2 variables utilizando paso
de parámetros por referencia. */

#include <iostream>

using namespace std;

void intercambio(int&, int&);

int main(){
    int numero1 = 17, numero2 = 35;

    cout << "El numero 1 es: " << numero1 << endl;
    cout << "El numero 2 es: " << numero2 << endl;

    intercambio(numero1, numero2);

    cout << "\nEl nuevo valor del numero 1 es: " << numero1;
    cout << "\nEl nuevo valor del numero 2 es: " << numero2 << endl;

    return 0;
}

void intercambio(int& numero1, int& numero2){
    int auxiliar;

    auxiliar = numero1;
    numero1 = numero2;
    numero2 = auxiliar;
}
