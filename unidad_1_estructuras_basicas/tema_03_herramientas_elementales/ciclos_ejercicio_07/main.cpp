//Calcular el valor de la suma 1+2+3+...+n.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n, suma = 0;

    cout << "Ingrese el numero de elementos 'n': ";
    cin >> n;

    for(int i = 1; i<=n; i++){
        suma += i;
    }

    cout << "\nLa suma de los elementos es: " << suma << endl;

    getch();
    return 0;
}
