/*Convertir dos cadenas de minúsculas a MAYÚSCULAS. Compararlas y
decir si son iguales o no*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena1[50],
    cadena2[50];

    cout << "Ingrese una cadena: ";
    cin.getline(cadena1, 50, '\n');
    cout << "Ingrese otra cadena: ";
    cin.getline(cadena2, 50, '\n');

    strupr(cadena1);
    strupr(cadena2);

    if(strcmp(cadena1, cadena2) == 0){
        cout << "Las cadenas " << cadena1 << " y " << cadena2 << " son iguales." << endl;
    }
    else{
        cout << "Las cadenas " << cadena1 << " y " << cadena2 << " NO son iguales." << endl;
    }

    return 0;
}
