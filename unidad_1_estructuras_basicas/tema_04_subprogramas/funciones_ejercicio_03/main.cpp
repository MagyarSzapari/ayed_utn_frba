/* Escribir una función nombrada funcionPotencia() que eleve un número entero
que se le transmita a una potencia en número entero positivo y despliegue el
resultado. El número entero positivo deberá ser el segundo valor transmitido
a la función. */

#include <iostream>

using namespace std;

//Prototipos de Función.
void pedirDatos();

void funcionPotencia(int x, int y);

//Declaración global de variables.
int x, y;

int main(){
    pedirDatos();
    funcionPotencia(x, y);

    return 0;
}

//Declaración de Función.
void pedirDatos(){
    cout << "Ingrese un numero (base): ";
    cin >> x;
    cout << "y el exponente: ";
    cin >> y;
}

void funcionPotencia(int x, int y){
    long resultado = 1;

    for(int i=1; i<=y; i++){ //Potencias sin agregar bibliotecas extra.
        resultado *= x;
    }

    cout << "\nEl resultado es: " << resultado << endl;
}
