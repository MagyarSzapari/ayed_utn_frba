//Leer dos números y determinar cuál es el mayor.

#include <iostream>

using namespace std;

int main(){
    int numero1, numero2;

    cout << "Ingrese dos numeros enteros: " << endl;
    cin >> numero1 >> numero2;

    if(numero1 == numero2){
        cout << "Ambos numeros son iguales." << endl;
    }
    else if(numero1>numero2){
        cout << "El numero " << numero1 << " es mayor que " << numero2 << endl;
    }
    else{
        cout << "El numero " << numero2 << " es mayor que " << numero1 << endl;
    }

    return 0;
}
