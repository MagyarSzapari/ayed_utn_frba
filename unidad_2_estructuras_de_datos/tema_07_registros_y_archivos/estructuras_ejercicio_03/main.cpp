/*lea un arreglo de estructuras los datos de N empleados de la empresa
y que imprima los datos del empleado con mayor y menor salario. */

#include <iostream>

using namespace std;

struct Empleado{
    char nombre[20];
    float sueldo;
}empleado[100];

int main(){
    int numeroEmpleados, posicionMayor = 0, posicionMenor = 0;
    float mayorSueldo = 0, menorSueldo = 999999.99;

    cout << "Ingrese el numero de empleados: ";
    cin >> numeroEmpleados;

    for(int i=0; i<numeroEmpleados; i++){
        cin.clear(); cin.ignore(50,'\n');
        cout << "\n" << i+1 << ". Ingrese su nombre: ";
        cin.getline(empleado[i].nombre, 20, '\n');
        cin.clear(); cin.ignore(50,'\n');
        cout << i+1 << ". Ingrese su salario: ";
        cin >> empleado[i].sueldo;

        //Empleado de Mayor Sueldo.
        if(empleado[i].sueldo > mayorSueldo){
            mayorSueldo = empleado[i].sueldo;
            posicionMayor = i;
        }

        //Empleado de Menor Sueldo.
        if(empleado[i].sueldo < menorSueldo){
            menorSueldo = empleado[i].sueldo;
            posicionMenor = i;
        }

        cout << "\n";
    }

    cout << "\n---Datos del Empleado con Mayor Sueldo---\n";
    cout << "Nombre: " << empleado[posicionMayor].nombre << endl;
    cout << "Sueldo: " << empleado[posicionMayor].sueldo << endl;

    cout << "\n---Datos del Empleado con Menor Sueldo---\n";
    cout << "Nombre: " << empleado[posicionMenor].nombre << endl;
    cout << "Sueldo: " << empleado[posicionMenor].sueldo << endl;

    return 0;
}
