/*Hacer una estructura llamada corredor, en la cual se tendrán los siguientes
campos: Nombre, edad, sexo, club; pedir datos al usuario para un corredor, y
asignarle una categoría de competición:
- Juvenil menor o = 18 años.
- Señor menor o = 40 años.
- Veterano mayor a 40 años.
Posteriormente imprimir todos los datos del corredor, incluida su categoría
de competición. */

#include <iostream>
#include <string.h>

using namespace std;

struct Corredor{
    char nombre[20];
    int edad;
    char sexo[20];
    char club[10];
}corredor1;

int main(){
    char categoria[20];

    cout << "Nombre: ";
    cin.getline(corredor1.nombre, 20, '\n');
    cout << "Edad: ";
    cin >> corredor1.edad;
    cin.clear(); //Limpia el residuo.
    cin.ignore(50,'\n'); //Ignora caracteres basura.
    cout << "Sexo: ";
    cin.getline(corredor1.sexo, 20, '\n');
    cout << "Club: ";
    cin.getline(corredor1.club, 10, '\n');

    if(corredor1.edad <= 18){
        strcpy(categoria, "Juvenil");
    }
    else if(corredor1.edad <= 40){
        strcpy(categoria, "Senior");
    }
    else{
        strcpy(categoria, "Veterano");
    }

    cout << "\n\n---Datos del Corredor---" << endl;
    cout << "Nombre: " << corredor1.nombre << endl;
    cout << "Edad: " << corredor1.edad << endl;
    cout << "Sexo: " << corredor1.sexo << endl;
    cout << "Club: " << corredor1.club << endl;
    cout << "Categoria: " << categoria << endl;

    return 0;
}
