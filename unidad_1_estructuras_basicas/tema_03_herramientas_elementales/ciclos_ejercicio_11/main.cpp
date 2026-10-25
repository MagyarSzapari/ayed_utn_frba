//Calcular el valor de 2^1+2^2+2^3+...+2^n.

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
    int numero, suma = 0, potenciacion = 0;

    cout << "Ingrese la cantidad de potencias que desea sumar: ";
    cin >> numero;

    for(int i = 1; i<=numero; i++){
        potenciacion = pow(2, i);
        suma += potenciacion;
    }

    cout << "\nLa suma de las potencias de 2 pedidas es: " << suma << endl;

    getch();
    return 0;
}
