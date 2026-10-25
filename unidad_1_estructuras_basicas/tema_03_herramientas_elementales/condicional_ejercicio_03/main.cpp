//Leer un valor entero y determinar si es par o impar.

#include <iostream>

using namespace std;

int main(){
    int numero;

    cout << "Ingrese un numero entero: " << endl;
    cin >> numero;

    if(numero == 0){
        cout << "El numero es igual a cero." << endl;
    }
    else if(numero%2 == 0){
        cout << "El numero ingresado es par." << endl;
    }
    else{
        cout << "El numero ingresado es impar." << endl;
    }

    return 0;
}
