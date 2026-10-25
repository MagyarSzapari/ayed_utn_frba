//============================================================================
// Name        : Argumentos_en_Linea_de_Comandos.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Le paso al main el int argc, que es "argument counter" o "cantidad de argumentos".
//También le paso char** argv, que es un "array de strings"
int main(int argc, char** argv) {
   //La posición cero imprimirá el nombre del programa; luego, vendrán los argumentos del usuario.
	for(int i=0; i < argc; i++){
	   string s = argv[i];
	   cout << s << endl;
	}

	return 0;
}
