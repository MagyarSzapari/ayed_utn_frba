/*La calificación final de un estudiante es la media ponderada de tres notas:
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60%
y la nota de participación que cuenta el 10% restante.
Leer de la entrada estándar las tres notas de un alumno
y escribir en la salida estándar su nota final.*/

#include <iostream>

using namespace std;

int main(){
    float practica, teorica, participacion, final = 0;

    cout << "Ingrese la nota practica: " << endl;
    cin >> practica;
    cout << "Ingrese la nota teorica: " << endl;
    cin >> teorica;
    cout << "Ingrese la nota de participacion: " << endl;
    cin >> participacion;

    final = (practica*0.3) + (teorica*0.6) + (participacion*0.1);

    /*También puede hacerse de la siguiente forma:
    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10;

    final = practica + teorica + participacion;*/

    cout << "\nEl valor de la nota final es: " << final << endl;

    return 0;
}
