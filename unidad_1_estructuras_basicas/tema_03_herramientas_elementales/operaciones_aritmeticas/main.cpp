#include <iostream>

using namespace std;

int main(){
    int num1, num2, suma = 0, diferencia = 0,
    producto = 0, cociente = 0, resto = 0;

    cout << "Ingrese un numero entero: " << endl;
    cin >> num1;
    cout << "Ingrese otro numero entero: " << endl;
    cin >> num2;

    suma = num1 + num2;
    diferencia = num1 - num2;
    producto = num1 * num2;
    cociente = num1 / num2;
    resto = num1 % num2;

    cout << "\nLa suma es: " << suma << endl;
    cout << "La diferencia es: " << diferencia << endl;
    cout << "El producto es: " << producto << endl;
    cout << "El cociente es: " << cociente << endl;
    cout << "El resto es: " << resto << endl;

    return 0;
}
