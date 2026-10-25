/* Definir una estructura que sirva para representar a una persona. La
estructura debe contener dos campos: el nombre de la persona y un valor de
tipo lógico que indica si la persona tiene algún tipo de discapacidad.
Realizar un programa que, dado un vector de personas, rellene dos nuevos
vectores: uno que contenga las personas que no tienen ninguna discapacidad y
otro que contenga las personas con discapacidad. */

#include <iostream>

using namespace std;

struct Persona{
    char nombre[30];
    bool discapacidad;
}personas[50], noDiscapacitados[50], discapacitados[50];

int main(){
    int cantidadPersonas = 0, i = 0, j = 0, k = 0;

    cout << "Ingrese la cantidad de personas (no mas de 50): ";
    cin >> cantidadPersonas;

    for(i=0; i<cantidadPersonas; i++){
        cin.clear(); cin.ignore(50, '\n');
        cout << "Nombre: "; cin.getline(personas[i].nombre, 30, '\n');
        cin.clear(); cin.ignore(50, '\n');
        cout << "Discapacidad (Ingrese 1 si es afirmativo, y 0 si es negativo): ";
        cin >> personas[i].discapacidad;
        cin.clear(); cin.ignore(50, '\n');

        if(personas[i].discapacidad == 1){
            strcpy(discapacitados[j].nombre, personas[i].nombre);
            //Lo de arriba copia el nombre del discapacitado en su nuevo vector.
            j++;
        }
        else{
            strcpy(noDiscapacitados[k].nombre, personas[i].nombre);
            //Lo mismo de antes, para alguien que no está discapacitado.
            k++;
        }

        cout << "\n";
    }

    cout << "\n---Personas con Discapacidad---" << endl;
    for(i=0; i<cantidadPersonas; i++){
        cout << discapacitados[i].nombre << endl;
    }

    cout << "\n---Personas sin Discapacidad---" << endl;
    for(i=0; i<cantidadPersonas; i++){
        cout << noDiscapacitados[i].nombre << endl;
    }

    return 0;
}
