//============================================================================
// Name        : Producto_con_Sumas_Sucesivas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Producto de dos números mediante sumas sucesivas, en C++
//============================================================================

#include <iostream>
using namespace std;

int main() {

   //El usuario ingresa dos valores.
   cout << "Ingrese dos valores numericos enteros: " << endl;
   int a, b;
   cin >> a >> b;

   /* int c = a*b;
   cout << c << endl; */

   int suma_parcial = 0;
   int i = 0;

   while(i<a){
      suma_parcial += b; //Le suma "b" a la variable "suma_parcial".
      i++; //Le suma 1 a la variable i.
   }

   cout << a << "*" << b << " = " << suma_parcial << endl;

	return 0;
}
