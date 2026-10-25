#include <iostream>
#include <conio.h> //Incluye una función para que el ejecutador no se cierre solo.

using namespace std;

int main(){
    int i;

    i=10;

    cout << "Los numeros del 10 al 1 son: " << endl;

    while(i>=1){
     cout << i << endl;
     i--;
    }

    getch(); //Función que cierra el ejecutador solo cuando le damos a una tecla.
    return 0;
}
