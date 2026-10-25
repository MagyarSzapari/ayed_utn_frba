/*Calcule la descomposición en factores primos de un número entero.
Por ejemplo: 20 = 2*2*5.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numero;

    cout << "Ingrese el numero que desea descomponer: "; cin >> numero;

    cout << "Al descomponerlo en factores primos queda: ";
    for(int i=2; numero>1; i++){
        while(numero%i == 0){
            cout << i << "  ";
            numero /= i;
        }
    }

    cout << "\n";

    getch();
    return 0;
}
