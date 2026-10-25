/* Al pasar por referencia lo que se está haciendo es enviar, en lugar
de el valor de la variable, su dirección en la memoria de la computadora. */

#include <iostream>

using namespace std;

void valorNuevo(int&, int&);

int main(){
    int numero1, numero2;

    cout << "Ingrese los numeros: ";
    cin >> numero1;
    cout << "y: ";
    cin >> numero2;

    valorNuevo(numero1, numero2);

    cout << "\nEl nuevo valor del primer numero es: " << numero1 << endl;
    cout << "El nuevo valor del segundo numero es: " << numero2 << endl;

    return 0;
}

void valorNuevo(int& numerox, int& numeroy){
    cout << "\nEl valor del primer numero es: " << numerox << endl;
    cout << "El valor del segundo numero es: " << numeroy << endl;

    //Cambio los valores de los números.
    numerox = 17;
    numeroy = 35;
}
