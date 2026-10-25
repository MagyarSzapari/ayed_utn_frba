//Leer un número y comprobar si es positivo o negativo.

#include <iostream>

using namespace std;

int main(){
    float numero;

    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    if(numero == 0){
        cout << "El numero es igual a cero." << endl;
    }
    else if(numero > 0){
        cout << "El numero ingresado es positivo." << endl;
    }
    else{
        cout << "El numero ingresado es negativo." << endl;
    }

    return 0;
}
