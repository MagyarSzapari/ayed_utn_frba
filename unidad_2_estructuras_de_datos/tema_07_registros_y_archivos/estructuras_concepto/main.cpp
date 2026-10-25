/*Estructura: es una colección de uno o más tipos de elementos denominados
"campos", cada uno de los cuales puede ser un tipo de dato diferente.

Supongamos que se desea almacenar los datos de una colección de discos compactos
(CD) de música. Estos datos pueden ser:
-Título;
-Artista;
-Número de Canciones;
-Precio;
-Fecha de Compra.

Se inicializaría de la siguiente forma:

struct Coleccion_CD{
	char titulo[30];
	char artista[25];
	int numeroCanciones;
	float precio;
	char fechaCompra[20];
};

Por lo tanto, su forma básica de declaración sería:
struct nombre{
	tipo1 campo1;
	tipo2 campo2;
	tipo_n campo_n;
};

Cada estructura tiene variables, y existen dos formas de declararlas en las
estructuras:
1. struct Coleccion_CD{
	char titulo[30];
	char artista[25];
	int numeroCanciones;
	float precio;
	char fechaCompra[20];
};

int main(){
	struct Coleccion_CD CD1, CD2, CD3;
}

2. struct Coleccion_CD{
	char titulo[30];
	char artista[25];
	int numeroCanciones;
	float precio;
	char fechaCompra[20];
}CD1, CD2, CD3;		*/

#include <iostream>

using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}
persona1 = {"Marco", 18},
persona2;

int main(){

    cout << "Ingrese su nombre: ";
    cin.getline(persona2.nombre, 20, '\n');
    cout << "Ingrese su edad: ";
    cin >> persona2.edad;

    cout << "\nNombre1: " << persona1.nombre << endl;
    cout << "Edad1: " << persona1.edad << endl;

    cout << "\nNombre2: " << persona2.nombre << endl;
    cout << "Edad2: " << persona2.edad << endl;

    return 0;
}
