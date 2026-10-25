//============================================================================
// Name        : Ejercicio_Ternas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "terna.hpp"
using namespace std;

int main() {

   int a, b, c;
   cout << "Ingrese una terna: " << endl;
   cin >> a >> b >> c;

   int i=0;
   int acumuladorMenor = 0, acumuladorMedio = 0,
         acumuladorMayor = 0;

   Terna t = terna(a, b, c);

   while(!ternaEsNula(t)){

      //Acumulo
      acumuladorMenor += ternaObtenerMenor(t);
      acumuladorMedio += ternaObtenerMedio(t);
      acumuladorMayor += ternaObtenerMayor(t);

      //Incremento el contador
      i++;

      //Leemos la siguiente terna
      cout << "Ingrese una terna: " << endl;
      cin >> a >> b >> c;
      t = terna(a, b, c);

   }

   double promedioMenor = acumuladorMenor/(double)i;
   double promedioMedio = acumuladorMedio/(double)i;
   double promedioMayor = acumuladorMayor/(double)i;

   cout << promedioMenor << endl;
   cout << promedioMedio << endl;
   cout << promedioMayor << endl;

	return 0;
}
