//============================================================================
// Name        : Funcion_como_Argumento.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void invocar(string mssg, double f(int)){
   for(int i=1; i<5; i++){
      //Invocamos a la función f.
      double d = f(i);
      cout << mssg << " de " << i << " = " << d << endl;
   }
}

//factorial de n.
double factorial(int n){
   double f = 1;
   for(int i=2; i<=n; i++){
      f *= i;
   }

   return f;
}

//fibonacci de n.
double fibonacci(int n){
   double retornar;
   if(n >= 2){
      retornar = fibonacci(n-1)+fibonacci(n-2);
   }
   else{
      retornar = 1;
   }

   return retornar;
}

int main() {
	/*Invocamos a la función invocar pasándole como
	parámetro a la función factorial.     */
   invocar("Factorial", factorial);

   cout << "-------------------------------------" << endl;

   /*Invocamos a la función invocar pasándole como
   parámetro a la función fibonacci.     */
      invocar("Fibonacci", fibonacci);

	return 0;
}
