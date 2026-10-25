//============================================================================
// Name        : Funcion_EsPar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool esPar(int v){
  return (v%2 == 0); //Como la función es de tipo bool, retornará "true" o "false" dependiendo de si se cumple v%2 == 0.
}

int main() {

   int v;
   cout << "Ingrese un valor: " << endl;
   cin >> v;

   //bool x = esPar(v); //Esto no es necesario, es un pas extra para mayor comprensión.

   if(esPar(v)){ //Como el if funciona bajo la lógica "si esto se cumple, hago esto otro", y esPar(v) devuelve verdadero, no es
                       // necesario aclarar "esPar(v) == true", sino que se puede poner solo "esPar(v)".
      cout << "El valor ingresado es par." << endl;
   }
   else{
      cout << "El valor ingresado NO es par." << endl;
   }

   return 0;
}
