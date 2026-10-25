/* Escribir una función nombrada calcularAnios() que tenga un parámetro entero
que represente el número total de días desde la fecha 1/1/2000 y parámetros
de referencia nombrados año, mes y día. La función es calcular el año, mes y
día actual para el número dado de días que se le transmitan. Usando las
referencias, la función deberá alterar en forma directa los argumentos
respectivos en la función que llama. Para este problema suponga que cada año
tiene 365 días y cada mes tiene 30 días. */

#include <iostream>

using namespace std;

void calcularAnios(int, int&, int&, int&);

int main(){
    int diasIngresados, anios = 2000,
    meses = 1, dias = 1;

    cout << "Ingrese la cantidad de dias: ";
    cin >> diasIngresados;

    calcularAnios(diasIngresados, anios, meses, dias);

    cout << "\n---Fecha actual---" << endl;
    cout << dias << "/" << meses << "/" << anios << endl;

    return 0;
}

void calcularAnios(int diasIngresados, int& anios, int& meses, int& dias){
    anios = (diasIngresados/365) + 2000;
    diasIngresados %= 365;
    meses = (diasIngresados/30) + 1;
    dias = (diasIngresados%30) + 1;
}
