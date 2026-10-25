/*Hacer una estructura llamada "Alumno", en la cual se tendrán los siguientes campos:
Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cuál de los 3
tiene el mejor promedio y posteriormente imprimir los datos del alumno. */

#include <iostream>

using namespace std;

struct Alumno{
    char nombre[20];
    int edad;
    int promedio;
}alumno[3];

int main(){
    int mayor = 0, posicion = 0;

    for(int i=0; i<3; i++){
        cout << "Nombre: ";
        cin.getline(alumno[i].nombre, 20, '\n');
        cin.clear(); cin.ignore(50,'\n');
        cout << "Edad: ";
        cin >> alumno[i].edad;
        cin.clear(); cin.ignore(50,'\n');
        cout << "\nPromedio: ";
        cin >> alumno[i].promedio;
        cin.clear(); cin.ignore(50,'\n');
		cout << "\n";

		if(alumno[i].promedio > mayor){
            mayor = alumno[i].promedio;
            posicion = i;
		}
    }

    cout << "El promedio mas alto es:" << endl;
    cout << "Nombre: " << alumno[posicion].nombre << endl;
    cout << "Edad: " << alumno[posicion].edad << endl;
    cout << "Promedio: " << alumno[posicion].promedio << endl;

    return 0;
}
