/*Solicitar al usuario que piense un número entero entre el 1 y el 100. El programa debe
generar un numero aleatorio en ese mismo rango [1-100], e indicarle al usuario
si el numero que ingresó es menor o mayor al numero aleatorio, así hasta que
lo adivine. Por último, mostrarle el número de intentos.*/

#include <iostream>
#include <conio.h>
#include <time.h> //Incluye una funcion para generar un número aleatorio.

using namespace std;

int main(){
    int numero, dato, contador_de_intentos = 0;

    srand(time(NULL)); //Generar un número aleatorio.
    dato = 1 + rand()%(100); //Generador del número aleatorio.

    do{
        cout << "Ingrese un numero: "; cin >> numero;

        if(numero>dato){
            cout << "\nIngrese un numero menor." << "\n" << endl;
        }

        if(numero<dato){
            cout << "\nIngrese un numero mayor." << "\n" << endl;
        }

        contador_de_intentos++;

    }while(numero != dato);

    cout << "\nFelicidades! Adivinaste el numero."
    << "\nNumero de intentos: " << contador_de_intentos << endl;

    getch();
    return 0;
}
