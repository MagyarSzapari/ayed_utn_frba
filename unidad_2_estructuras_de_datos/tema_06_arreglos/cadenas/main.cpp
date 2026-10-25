#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char nombre[] = "Marco"; //Forma Nro. 1 de escribir cadenas.
    char nombre2[] = {'M','a','r','c','o'}; //Forma Nro. 2.
    char nombre3[30];

    cout << nombre << endl;
    cout << nombre2 << endl;

    cout << "Ingrese su nombre: ";
    cin.getline(nombre3, 30, '\n'); //Mejor forma de almacenar cadenas.
    cout << nombre3;

    return 0;
}
