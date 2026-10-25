//Leer la nota final de 4 alumnos y luego calcular el promedio entre las 4 notas.

#include <iostream>

using namespace std;

int main(){
    int alumno1, alumno2, alumno3, alumno4, promedio;

    cout << "Ingrese las notas de los 4 alumnos: " << endl;
    cin >> alumno1;
    cin >> alumno2;
    cin >> alumno3;
    cin >> alumno4;

    promedio = (alumno1 + alumno2 + alumno3 + alumno4)/4;

    cout << "\nEl promedio de las notas ingresadas es: " << promedio << endl;

    return 0;
}
