//Realizar la serie de Finobacci: 1 1 2 3 5 8 13 ... n.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numero, x = 0, y = 1, z = 1;

    cout << "Ingrese el numero de elementos: ";
    cin >> numero;

    cout <<"La sucesion es: ";

    for(int i=1; i<=numero; i++){
        z = x + y;
        cout << z << "  ";
        x = y;
        y = z;
    }

    getch();
    return 0;
}
