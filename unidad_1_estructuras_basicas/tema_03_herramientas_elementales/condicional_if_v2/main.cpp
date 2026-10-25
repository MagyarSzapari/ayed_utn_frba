#include <iostream>

using namespace std;

int main(){
    int numero, dato = 5;

    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    if(numero != dato){
        cout << "No encontraste el numero secreto." << endl;
    }
    else{
        cout << "Encontraste el numero secreto: " << numero << endl;
    }

    return 0;
}
