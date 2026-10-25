//Calcular el valor de  1-2+3-4+5-6...n

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numero, suma_primera = 0, suma_segunda = 0, resta = 0;

    cout << "Ingrese la cantidad de numeros que desea para calcular: ";
    cin >> numero;

    for(int i=1; i<=numero; i+=2){
        suma_primera += i;
    }

    for(int j=2; j<=numero; j+=2){
        suma_segunda += j;
    }

    resta = suma_primera - suma_segunda;

    cout << "\nEl valor buscado es: " << resta << endl;

    getch();
    return 0;
}
