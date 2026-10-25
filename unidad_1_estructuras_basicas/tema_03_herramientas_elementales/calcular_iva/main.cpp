/*Leer de la entrada estándar el precio de un producto y mostrar
en la salida estándar el precio del producto al aplicarle el IVA*/

#include <iostream>

using namespace std;

int main(){
    float precio = 0, porcentajeIVA = 0.21;

    cout << "Ingrese el precio del producto: " << endl;
    cin >> precio;

    precio = precio + (precio * porcentajeIVA);

    cout << "\nEl valor del precio con IVA es: " << precio << endl;

    return 0;
}
