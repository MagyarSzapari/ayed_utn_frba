//============================================================================
// Name        : Ejemplos_Funciones_de_Archivos.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

   //Abro el archivo para escritura.
   FILE* f = fopen("demochar.zzz", "w+b"); //"w+b" viene de "write binary". El archivo "demochar.zzz" no existe, por
                                                                 // lo que lo crea en el mismo lugar en el que está compilando.

   //Voy a grabar el valor de c.
   char c = 'A';
   fwrite(&c, sizeof(char), 1, f);  //El & se utiliza como operador de dirección, y permite obtener la dirección de memoria
                                                 // de la variable en cuestión. El 1 indica cuántos caracteres quiero grabar.

   //Grabo otro valor.
   c = 'B';
   fwrite(&c, sizeof(char), 1, f);

   //Grabo otro valor.
   c = 'C';
   fwrite(&c, sizeof(char), 1, f);

   //Grabo otro valor más.
   c = 'D';
   fwrite(&c, sizeof(char), 1, f);

   //Cierro el archivo.
   fclose(f);

   //Abro el archivo para lectura.
   f = fopen("demochar.zzz", "r+b"); //"r+b" viene de "read binary".

   //Buena práctica:
   if(f == NULL){
      cout << "Ocurrio un error." << endl;
   }

   //Leo el primer carácter.
   fread(&c, sizeof(char), 1, f);

   //Mientras que no llegue el fin.
   while(!feof(f)){
      //Muestro el carácter que leí.
      cout << c << endl;

      //Leo el siguiente carácter.
      fread(&c, sizeof(char), 1, f);
   }

   //Cierro el archivo.
   fclose(f);

	return 0;
}
