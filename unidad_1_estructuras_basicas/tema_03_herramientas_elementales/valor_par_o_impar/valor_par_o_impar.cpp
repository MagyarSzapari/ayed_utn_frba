//============================================================================
// Name        : Valor_Par_o_Impar.cpp
// Author      : Marco Szapari Marcos
// Version     :
// Copyright   :
// Description : Ver si un valor ingresado es par o impar, en C++
//============================================================================


#include <iostream>
using namespace std;


int main() {

   //El usuario ingresa un valor.
   cout << "Ingrese un valor numerico entero: " << endl;
   int v;
   cin >> v;

   int resto = v%2;

   if(resto == 0){
      cout << "El valor ingresado, " << v << ", es par." << endl;
   }
   else{
      cout << "El valor ingresado, " << v << ", es impar." << endl;
   }

   return 0;
}
