/*Calcular el valor que toma la funcion "raiz cuadrada de x sobre la
diferencia entre y al cuadrado y 1" para unos valores dados de x e y.*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float x, y, funcion;

    cout << "Ingrese los valores de x e y: " << endl;
    cin >> x;
    cin >> y;

    funcion = (sqrt(x)/(pow(y, 2) - 1));

    cout << "\nEl valor de la funcion es: " << funcion << endl;

    return 0;
}
