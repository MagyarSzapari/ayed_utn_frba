//============================================================================
// Name        : Estructuras.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "fecha.hpp"
using namespace std;

int main() {

   //El usuario ingresa los datos (una fecha)
   int d, m, a;
   cout << "Ingrese una fecha: " << endl;
   cin >> d >> m >> a;

   Fecha f = fecha(d, m, a);
   if(fechaValidar(f)){
      cout << fechaToString(f) << endl;
   }
   else {
      cout << "La fecha ingresada es incorrecta." << endl;
   }

	return 0;
}
