//Calcular el valor de 1!+2!+3!+...+n! (suma de factoriales).

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numero, factorial = 1, suma = 0;

    cout << "Ingrese la cantidad de factoriales que desea sumar: ";
    cin >> numero;

    for(int i = 1; i<=numero; i++){
        factorial *= i;
        suma += factorial;
    }

    cout << "\nLa suma de los factoriales es: " << suma << endl;

    getch();
    return 0;
}
