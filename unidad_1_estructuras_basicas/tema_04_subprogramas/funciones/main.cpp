/* Función: una función realiza una tarea concreta y puede ser diseñada,
implementada y depurada de manera independiente al resto del código.

Definición de Funciones:
tipo nombre(tipo variable_1, tipo variable_2, ..., tipo variable_n){
	conjunto_de_instrucciones;
}

Ejemplos de Funciones:
int numeroMaximo(int x, int y)
double intercambio(double x, double y)
void desplegar(float x, float y)

El siguiente programa encuentra el mayor de 2 números.  */

#include <iostream>

using namespace std;

//Cabecera y Definición de Función
int encontrarMaximo(int x, int y){
    int numeroMaximo;

    if(x>y){
        numeroMaximo = x;
    }
    else{
        numeroMaximo = y;
    }
}

int main(){
    int x, y;

    cout << "Ingrese dos numeros: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    cout << "El mayor de los dos numeros es: " << encontrarMaximo(x, y) << endl;

    return 0;
}
