/* Solicitar una edad (entero) e indicar en la salida estándar si la
edad introducida se encuentra en el rango de 18 a 25 - [18; 25]. */

#include <iostream>

using namespace std;

int main(){
    int edad;

    cout << "Ingrese su edad: " << endl;
    cin >> edad;

    if((edad>=18) && (edad<=25)){
        cout << "Su edad se encuentra en el rango de 18 a 25." << endl;
    }
    else {
        cout << "Su edad no se encuentra en el rango de 18 a 25." << endl;
    }

    return 0;
}
