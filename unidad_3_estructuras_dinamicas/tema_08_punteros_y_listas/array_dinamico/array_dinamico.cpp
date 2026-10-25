//============================================================================
// Name        : Array_Dinamico.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   int capacidad;

	cout << "Ingrese la capacidad: ";
	cin >> capacidad; //Suponemos que ingresa 3...

	int* array = new int[capacidad]; //Puntero a int "a" es igual a new capacidad*int.
	array[0] = 123;
	array[1] = 456;
	array[2] = 789;

	int* nuevo = new int[capacidad*2]; //Le doy el doble de capacidad.
	for(int i=0; i<capacidad; i++){
	   nuevo[i] = array[i]; //Copio uno a uno los elementos del viejo al nuevo.
	}

	delete array; //Elimino el viejo de la memoria.

	array = nuevo; //Ahora "array" hace referencia al primer elemento del nuevo array.

	return 0;
}
