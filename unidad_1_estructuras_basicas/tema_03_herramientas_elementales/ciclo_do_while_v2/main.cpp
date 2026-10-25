#include <iostream>
#include <stdlib.h> //Trae una función que permite pausar el programa sin que se cierre el ejecutador.

using namespace std;

int main(){
    int i;

    i=10;

    cout << "Los numeros del 10 al 1 son: " << endl;

    do{
        cout << i << endl;
        i--; //Decrementa el iterador (i) de uno en uno.
    }while(i>=1);

    system("pause"); //Funciona como el "getch();".
    return 0;
}
