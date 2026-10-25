/*En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:
 a)Alumnos que aprobaron todos los exámenes.
 b)Alumnos que aprobaron al menos un examen.
 c)Alumnos que aprobaron únicamente el último examen.

Leer los datos y calcular las estadísticas. */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int examen1, examen2, examen3, aprobaron_todos = 0,
    aprobaron_al_menos_uno = 0, aprobaron_ultimo = 0;

    for(int i=1; i<=5; i++){
        cout << "Ingrese la nota del primer examen: "; cin >> examen1;
        cout << "Ingrese la nota del segundo examen: "; cin >> examen2;
        cout << "Ingrese la nota del tercer examen: "; cin >> examen3;
        cout << "\n";

        if((examen1>=6) && (examen2>=6) && (examen3>=6)){
        aprobaron_todos++;
        }

        if((examen1>=6) || (examen2>=6) || (examen3>=6)){
        aprobaron_al_menos_uno++;
        }

        if((examen1<=6) && (examen2<=6) && (examen3>=6)){
        aprobaron_ultimo++;
        }
    }

    cout << "\na)Alumnos que aprobaron todos los examenes: " << aprobaron_todos;
    cout << "\nb)Alumnos que aprobaron al menos un examen: " << aprobaron_al_menos_uno;
    cout << "\nc)Alumnos que aprobaron únicamente el ultimo examen: " << aprobaron_ultimo;

    getch();
    return 0;
}
