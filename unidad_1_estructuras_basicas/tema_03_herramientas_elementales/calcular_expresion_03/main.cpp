/*Calcular el cociente entre la suma de a y el cociente entre b y c,
y la suma de d y el cociente entre e y f. */

#include <iostream>

using namespace std;

int main(){
    float a, b, c, d, e, f, expresion = 0;

    cout << "Ingrese los valores de a, b, c, d, e y f: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;

    expresion = (a + (b/c))/(d + (e/f));

    cout << "\nEl valor de la expresion es: " << expresion << endl;

    return 0;
}
