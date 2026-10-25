//Calcular el valor de 1*2*3*...*n (factorial).

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numero, factorial = 1;

    cout << "Ingrese el numero cuyo factorial desea averiguar: ";
    cin >> numero;

    for(int i = 1; i<=numero; i++){
        factorial *= i;
    }

    cout << "\nEl factorial del numero introducido es: " << factorial << endl;

    getch();
    return 0;
}
