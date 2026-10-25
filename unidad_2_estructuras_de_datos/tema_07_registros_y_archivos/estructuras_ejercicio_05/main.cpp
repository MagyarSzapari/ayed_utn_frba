/* Hacer 2 estructuras: una llamada "Promedio", que tendrá los siguientes
campos: nota1, nota2, nota3; y otra llamada "Alumno", que tendrá los
siguientes miembros: nombre, sexo, edad; hacer que la estructura promedio
esté anidada en la estructura alumno, luego pedir todos los datos para un
alumno, luego calcular su promedio, y por ultimo imprimir todos sus datos
incluidos el promedio. */

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
}alumno1;

int main(){
    float promedioAlumno;

    cout << "Ingrese su nombre: ";
    cin.getline(alumno1.nombre, 20, '\n');
    cin.clear(); cin.ignore(50, '\n');
    cout << "Ingrese su sexo: ";
    cin.getline(alumno1.sexo, 10, '\n');
    cin.clear(); cin.ignore(50, '\n');
    cout << "\nIngrese su edad: ";
    cin >> alumno1.edad;
    cin.clear(); cin.ignore(50, '\n');

    cout << "\n---Notas del Alumno---" << endl;
    cout << "Nota 1: "; cin >> alumno1.promedioVariable.nota1;
    cin.clear(); cin.ignore(50, '\n');
    cout << "Nota 2: "; cin >> alumno1.promedioVariable.nota2;
    cin.clear(); cin.ignore(50, '\n');
    cout << "Nota 3: "; cin >> alumno1.promedioVariable.nota3;
    cin.clear(); cin.ignore(50, '\n');

    promedioAlumno = (alumno1.promedioVariable.nota1 + alumno1.promedioVariable.nota2 +
                              alumno1.promedioVariable.nota3)/3;

    cout << "\n---Datos del Alumno---" << endl;
    cout << "Nombre: " << alumno1.nombre << endl;
    cout << "Sexo: " << alumno1.sexo << endl;
    cout << "Edad: " << alumno1.edad << endl;
    cout << "Promedio: " << promedioAlumno << endl;

    return 0;
}
