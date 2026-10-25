//============================================================================
// Name        : Cadenas_de_Caracteres.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int longitud(string s){
   int i=0;
   while(s[i]!='\0'){
      i++;
   }

   return i;
}

int main() {
	string s1 = "Hola";
	string s2 = "Ho\0la";
	string s3 = "Ho\nla";
	string s4 = "Ho\"la";
	string s5 = "Ho\tla";
	string s6 = "Ho\rla";
	string s7 = "Ho\\la";

	//Imprimir todas las cadenas.
   cout << s1 << endl;
   cout << s2 << endl;
   cout << s3 << endl;
   cout << s4 << endl;
   cout << s5 << endl;
   cout << s6 << endl;
   cout << s7 << endl;

   //Imprimir todos los caracteres de la primera cadena.
   int i = 0;
   while(i <4){ //Si quiero imprimir el carácter \0, agrego =.
      cout << (char) s1[i] << endl; //Se debe castear como (char) para evitar "overload of endl".
      i++;
   }

   cout << "-------------------" << endl;

   //Misma estructura que antes, pero utilizando for.
   for(i = 0; s1[i]!='\0'; i++){ //Si yo dejo vacía la primera parte del for, no se ingresa, por lo que no se ejecuta (funciona como un if).
      cout << (char) s1[i] << endl; //Se debe castear como (char) para evitar "overload of endl".
   }

   //Mido la "longitud" de la cadena con una función.
   cout << "\nLongitud de la cadena: " << longitud(s1) << endl;

   //Concatenar cadenas.
   string s8 = ", como te va?";
   string s9 = s1+s8; //Operador + permite concatenar cadenas.

   cout << s9 << endl;

   return 0;
}
