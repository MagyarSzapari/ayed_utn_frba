//Calcular el siguiente del cociente entre a y b.

#include <iostream>

using namespace std;

int main(){
    float a, b, expresion = 0;

    cout << "Ingrese el valor de a: " << endl;
    cin >> a;
    cout << "Ingrese el valor de b: " << endl;
    cin >> b;

    expresion = (a / b) + 1;

    cout << "\nEl resultado de la expresion es: " << expresion << endl;

    return 0;
}
