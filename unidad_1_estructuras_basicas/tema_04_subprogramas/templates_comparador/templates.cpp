//============================================================================
// Name        : Templates.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Persona{
   int dni;
   string nombre;
};

template<typename T>
void comparaYMuestra(T a, T b, T c, int comparaTT(T, T)){ //comparaTT va a variar con la función que le pasemos.
   T mayor, medio, menor;
   if(comparaTT(a, b) > 0  &&  comparaTT(a, c) > 0){
      mayor = a;
      if(comparaTT(b, c) > 0){
         medio = b;
         menor = c;
      }
      else{
         medio = c;
         menor = b;
      }
   }
   else if(comparaTT(b, a) > 0  &&  comparaTT(b, c) > 0){
      mayor = b;
      if(comparaTT(a, c) > 0){
         medio = a;
         menor = c;
      }
      else{
         medio = c;
         menor = a;
      }
   }
   else{
      mayor = c;
      if(comparaTT(a, b) > 0){
         medio = a;
         menor = b;
      }
      else{
         medio = b;
         menor = a;
      }
   }

   cout << "Mayor: " << mayor;
   cout << endl;

   cout << "Medio: " << medio;
   cout << endl;

   cout << "Menor: " << menor;
   cout << endl;
}

int length(string s){
   int i=0;
   while (s[i]!='\0'){
      i++ ;
   }

   return i;
}

int charToInt(char c){
   string a = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz" ;
   int i = 0;

   while (a[i] != c){
      i++;
   }

   return i;
}

int stringToInt(string s, int b){
   int numero = 0;
   int i = 0;
   int j = length (s)-1;
   int k = 0; // va restando al length
   int valor = 0;
   int base = 1; // almacena la base

   while (s[i] != '\0'){
      valor = charToInt (char (s[i]));

      k = j;
      while (k>0){
         base = base * b;
         k--;
      }

      numero += (valor * base);
      base = 1;
      i++;
      j--;
   }

   return numero;
}

int comparaIntInt(int a, int b){
   return a-b;
}

int comparaStringString(string a, string b){
   return a<b?-1:a>b?1:0;
}

/*int comparaIntString(int a, string b){
   return a-stringToInt(b);
}
*/

int comparaStringStringPorLongitud(string a, string b){
   return length(a)-length(b);
}

int main() {
   int i = 30, j = 10, k = 49;
   comparaYMuestra<int>(i, j, k, comparaIntInt); //Salida: Mayor = 49, Medio = 30, Menor = 10.
   cout << "---------------" << endl;

   string s = "Alberto", t = "Juan", z = "Pablo";
   comparaYMuestra<string>(s, t, z, comparaStringString); //Salida: Mayor = Pablo, Medio = Juan, Menor = Alberto.
   cout << "---------------" << endl;

   comparaYMuestra<string>(s, t, z, comparaStringStringPorLongitud);

	return 0;
}
