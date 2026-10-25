#include <iostream>

using namespace std;

int main(){
    int numero, dato = 5;

    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    if(numero > dato){
        cout << "El numero ingresado es mayor que 5." << endl;
    }
    else{
        cout << "El numero ingresado es menor que 5." << endl;
    }

    return 0;
}
