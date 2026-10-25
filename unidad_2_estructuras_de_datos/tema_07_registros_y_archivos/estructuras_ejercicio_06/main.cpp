/*Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para
"n" alumnos, y calcular cuál de todos tiene el mejor promedio, e imprimir
sus datos. */

#include <iostream>

using namespace std;

struct Promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno{
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio promedioVariable;
}alumnos[100];

int main(){
    int cantidadAlumnos, i=0, posicion = 0;
    float promedioAlumno[100], mayorPromedio = 0;

    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidadAlumnos;

    for(i=0; i<cantidadAlumnos; i++){
        cin.clear(); cin.ignore(50, '\n');
        cout << "Ingrese su nombre: ";
        cin.getline(alumnos[i].nombre, 20, '\n');
        cin.clear(); cin.ignore(50, '\n');
        cout << "Ingrese su sexo: ";
        cin.getline(alumnos[i].sexo, 10, '\n');
        cin.clear(); cin.ignore(50, '\n');
        cout << "\nIngrese su edad: ";
        cin >> alumnos[i].edad;
        cin.clear(); cin.ignore(50, '\n');

        cout << "\n---Notas del Alumno---" << endl;
        cout << "Nota 1: "; cin >> alumnos[i].promedioVariable.nota1;
        cin.clear(); cin.ignore(50, '\n');
        cout << "Nota 2: "; cin >> alumnos[i].promedioVariable.nota2;
        cin.clear(); cin.ignore(50, '\n');
        cout << "Nota 3: "; cin >> alumnos[i].promedioVariable.nota3;
        cin.clear(); cin.ignore(50, '\n');
    }

    for(i=0; i<cantidadAlumnos; i++){
        promedioAlumno[i] = (alumnos[i].promedioVariable.nota1 +
        alumnos[i].promedioVariable.nota2 + alumnos[i].promedioVariable.nota3)/3;

        if(promedioAlumno[i] > mayorPromedio){
            mayorPromedio = promedioAlumno[i];
            posicion = i;
        }
    }

    cout << "\n---Datos del Alumno---" << endl;
    cout << "Nombre: " << alumnos[posicion].nombre << endl;
    cout << "Sexo: " << alumnos[posicion].sexo << endl;
    cout << "Edad: " << alumnos[posicion].edad << endl;
    cout << "Promedio: " << promedioAlumno[posicion] << endl;

    return 0;
}
