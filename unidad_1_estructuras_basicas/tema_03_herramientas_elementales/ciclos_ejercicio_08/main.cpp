//Calcular el valor de: 1+3+5+...+2n-1.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n, suma = 0;

    cout << "Ingrese el numero de elementos 'n': ";
    cin >> n;

    for(int i = 1; i<=((2*n)-1); i+=2){
        suma += i;
    }

    cout << "\nLa suma de los elementos es: " << suma << endl;

    getch();
    return 0;
}
