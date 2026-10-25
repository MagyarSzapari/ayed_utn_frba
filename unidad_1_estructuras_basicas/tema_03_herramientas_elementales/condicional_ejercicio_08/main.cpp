/*Leer de la entrada estándar tres números, luego, leer un cuarto número e
indicar si el mismo coincide con los anteriores tres. */

#include <iostream>

using namespace std;

int main(){
    float numero1, numero2, numero3, numero4;

    cout << "Ingrese tres numeros: " << endl;
    cin >> numero1 >> numero2 >> numero3;
    cout << "\nIngrese otro numero: " << endl;
    cin >> numero4;

    if((numero4!=numero1) && (numero4!=numero2) && (numero4!=numero3)){
        cout << "\nEl numero ingresado es distinto de los ingresados previamente." << endl;
    }
    else if(numero4 == numero1){
        cout << "El numero ingresado es igual al numero:  " << numero1 << endl;
    }
    else if(numero4 == numero2){
        cout << "El numero ingresado es igual al numero: " << numero2 << endl;
    }
    else{
        cout << "El numero ingresado es igual al numero: " << numero3 << endl;
    }

    return 0;
}
