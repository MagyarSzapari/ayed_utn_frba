/* Escribir una función nombrada cambio() que tenga un parámetro en número
entero y seis parámetros de referencia en número entero nombrados cien,
cincuenta, veinte, diez, cinco y uno, respectivamente. La función tiene que
considerar el valor entero transmitido como una cantidad en dólares y
convertir el valor en el número menor de billetes equivalentes. */

#include <iostream>

using namespace std;

void cambio(int, int&, int&, int&, int&, int&, int&);

int main(){
    int dolares, cien = 0, cincuenta = 0, veinte = 0,
    diez = 0, cinco = 0, uno = 0;

    cout << "Ingrese la cantidad de dolares: ";
    cin >> dolares;

    cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);

    cout << "\n---Cambio a entregar---" << endl;
    cout << "Cien: " << cien << endl;
    cout << "Cincuenta: " << cincuenta << endl;
    cout << "Veinte: " << veinte << endl;
    cout << "Diez: " << diez << endl;
    cout << "Cinco: " << cinco << endl;
    cout << "Uno: " << uno << endl;

    return 0;
}

void cambio(int dolares, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    cien = dolares/100;
    dolares %= 100;
    cincuenta = dolares/50;
    dolares %= 50;
    veinte = dolares/20;
    dolares %= 20;
    diez = dolares/10;
    dolares %= 10;
    cinco = dolares/5;
    uno = dolares%5;
}
