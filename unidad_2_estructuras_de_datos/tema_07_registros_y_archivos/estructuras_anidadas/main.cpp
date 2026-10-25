/*Estructura Anidada: refiere, al igual que con los ciclos, a una estructura
que se encuentra adentro de otra.

Ejemplo:
struct Info_direccion{
	char direccion[30]:
	char ciudad[20];
	char provincia[20];
};

struct Empleado{
	char nombre[20];
	struct Info_direccion direccionEmpleado;
	double salario;
};		*/

#include <iostream>

using namespace std;

struct Info_direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct Empleado{
	char nombre[20];
	struct Info_direccion direccionEmpleado;
	double salario;
}empleados[2]; //Tengo 2 variables de tipo "Empleado".

int main(){

    for(int i=0; i<2; i++){
        cout << "Ingrese su nombre: ";
        cin.getline(empleados[i].nombre, 20, '\n');
        cout << "Ingrese su direccion: ";
        cin.getline(empleados[i].direccionEmpleado.direccion, 30, '\n');
        cout << "Ingrese su ciudad: ";
        cin.getline(empleados[i].direccionEmpleado.ciudad, 20, '\n');
        cout << "Ingrese su provincia: ";
        cin.getline(empleados[i].direccionEmpleado.provincia, 20, '\n');
        cout << "Ingrese su salario: ";
        cin >> empleados[i].salario;
        cout << "\n\n";
        cin.ignore(256,'\n'); //Vacia el "buffer" y permite ingresar más datos.
    }

    for(int i=0; i<2; i++){
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Direccion: " << empleados[i].direccionEmpleado.direccion << endl;
        cout << "Ciudad: " << empleados[i].direccionEmpleado.ciudad << endl;
        cout << "Provincia: " << empleados[i].direccionEmpleado.provincia << endl;
        cout << "Salario: " << empleados[i].salario << endl;
        cout << "\n";
    }

    return 0;
}
