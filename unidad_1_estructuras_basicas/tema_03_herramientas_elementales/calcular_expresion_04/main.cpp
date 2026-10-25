/*Calcular la suma de a y el cociente entre
b y la diferencia entre c y d.*/

#include <iostream>

using namespace std;

int main(){
    float a, b, c, d, expresion = 0;

    cout << "Ingrese los valores de a, b, c y d: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    expresion = a + (b/(c - d));

    cout << "\nEl resultado de la expresion es: " << expresion << endl;

    return 0;
}
