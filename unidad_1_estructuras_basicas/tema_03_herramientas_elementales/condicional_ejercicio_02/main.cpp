//Leer tres números y determinar cuál es el mayor.

#include <iostream>

using namespace std;

int main(){
    int numero1, numero2, numero3;

    cout << "Ingrese tres numeros enteros: " << endl;
    cin >> numero1 >> numero2 >> numero3;

    if((numero1 == numero2) && (numero1 == numero3)){  // "&&" funciona como el AND lógico.
        cout << "Los tres numeros son iguales." << endl;
    }
    else if((numero1>numero2) && (numero1>numero3)){
        cout << "El numero mayor es: " << numero1 << endl;
    }
    else if ((numero2>numero1) && (numero2>numero3)){
        cout << "El numero mayor es: " << numero2 << endl;
    }
    else{
        cout << "El numero mayor es: " << numero3 << endl;
    }

    return 0;
}
