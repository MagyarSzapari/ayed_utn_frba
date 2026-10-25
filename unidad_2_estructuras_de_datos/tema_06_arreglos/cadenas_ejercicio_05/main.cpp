//Determinar si una palabra es políndroma o capicúa.

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena1[50],
    cadena2[50];

    cout << "Ingrese una palabra (menos de 50 caracteres):  ";
    cin.getline(cadena1, 50, '\n');

    strcpy(cadena2, cadena1);

    strrev(cadena2);

    if(strcmp(cadena1, cadena2) == 0){
        cout << "La palabra ingresada es polindroma o capicua." << endl;
    }
    else{
        cout << "La palabra ingresada NO es polindroma o capicua." << endl;
    }

    return 0;
}
