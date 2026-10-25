//============================================================================
// Name        : Factorial.cpp
// Author      : Marco Szapari Marcos
// Version     :
// Copyright   : Your copyright notice
// Description : Factorial, en C++
//============================================================================

#include <iostream>
using namespace std;

int main() {

   //El usuario ingresa un valor.
   cout << "Ingrese un numero: " << endl;
   int x;
   cin >> x;

   double factorial = 1;
   int i = 2;

   //Calcula el factorial.
   while(i<=x){
      factorial *= i;
      i++;
   }

   cout << "El factorial es: " << x << "! " << factorial << endl;

	return 0;
}
