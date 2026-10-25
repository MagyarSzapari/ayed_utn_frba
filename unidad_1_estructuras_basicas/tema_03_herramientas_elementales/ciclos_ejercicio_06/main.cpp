//Calcular x^y, siendo, x e y enteros positivos, sin utilizar la función "pow".

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x, y, potencia = 1;

    do{
        cout << "Introduzca valores enteros positivos para calcular x^y." << endl;
        cout << "x: "; cin >> x;
        cout << "y: "; cin >> y;
    }while((x<=0) || (y<=0));

    for(int i=1; i<=y; i++){
        potencia *= x;
    }

    cout << "\nEl resultado es: " << potencia << endl;

    getch();
    return 0;
}
