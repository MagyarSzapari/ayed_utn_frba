//Intercambiar los valores de dos variables.

#include <iostream>

using namespace std;

int main(){
    int x, y, aux;

    cout << "Ingrese los valores de x e y: " << endl;
    cin >> x;
    cin >> y;

    aux = x;
    x = y;
    y = aux;

    cout << "\nEl nuevo valor de x es: " << x << endl;
    cout << "\nEl nuevo valor de y es: " << y << endl;

    return 0;
}
