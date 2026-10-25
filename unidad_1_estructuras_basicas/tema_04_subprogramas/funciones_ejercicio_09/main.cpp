/* Escribir una función nombrada tiempo() que tenga un parámetro en número
entero llamado totalSegundos y tres parámetros de referencia enteros nombrados
horas, minutos y segundos. La función es convertir el número de segundos
transmitido en un número equivalente de horas, minutos y segundos. */

#include <iostream>

using namespace std;

void convertirTiempo(int, int&, int&, int&);

int main(){
    int totalSegundos, horas, minutos, segundos;

    cout << "Ingrese el numero total de segundos: ";
    cin >> totalSegundos;

    convertirTiempo(totalSegundos, horas, minutos, segundos);

    cout << "\n---Tiempo ingresado---" << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;

    return 0;
}

void convertirTiempo(int totalSegundos, int& horas, int& minutos, int& segundos){
    horas = totalSegundos/3600; //3600 = cantidad de segundos en una hora.
    totalSegundos %= 3600;
    minutos = totalSegundos/60; //60 = cantidad de segundos en un minuto.
    segundos = totalSegundos%60;
}
