//============================================================================
// Name        : Ordenamientos_y_Busquedas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void insertionSort(Coll<int>& c){
   Coll<int> auxiliar = coll<int>(); //Colección auxiliar vacía.

   while(collSize<int>(c) > 0){ //Itero mientras queden elementos en c.
      //Busco el menor en c.
      int posicion = 0;
      int minimo = collGetAt<int>(c, 0, stringToInt);
      for(int i=0; i<collSize<int>(c); i++){
         int elemento = collGetAt<int>(c, i, stringToInt);
         if(elemento < minimo){
            minimo = posicion;
            posicion = i;
         }
      }

      collAdd<int>(auxiliar, minimo, intToString);
      collRemoveAt<int>(c, posicion);
   }

   c = auxiliar;
}

void bubbleSort(Coll<int>& c){
   int n = collSize<int>(c);
   for(int i = 0; i < n; i++){
      for(int j = 0; j < n-1; j++){
         int a = collGetAt<int>(c, j, stringToInt);
         int b = collGetAt<int>(c, j+1, stringToInt);

         if(a > b){
            int auxiliar = a;
            collSetAt<int>(c, b, j, intToString);
            collSetAt<int>(c, auxiliar, j+1, intToString);
         }
      }
   }
}

void improvedBubbleSort(Coll<int>& c){
   int n = collSize<int>(c);
   bool ordenado = false;

   while(!ordenado){
      ordenado = true;
      for(int j = 0; j < n-1; j++){
         int a = collGetAt<int>(c, j, stringToInt);
         int b = collGetAt<int>(c, j+1, stringToInt);

         if(a > b){
            int auxiliar = a;
            collSetAt<int>(c, b, j, intToString);
            collSetAt<int>(c, auxiliar, j+1, intToString);
            ordenado = false;
         }
      }
   }
}

void advancedInsertionSort(Coll<int>& c){
   int p = collSize<int>(c);

   while(p > 0){
      int posicion = 0;
      int minimo = collGetAt<int>(c, 0, stringToInt);
      for(int i = 0; i < p; i++){
         int elemento = collGetAt<int>(c, i, stringToInt);
         if(elemento < minimo){
            minimo = elemento;
            posicion = i;
         }
      }

      collAdd<int>(c, minimo, intToString);
      collRemoveAt<int>(c, posicion);
      p--;
   }
}

int linealSearch(Coll<int> c, int v){
   int i = 0;

   //Recorro mientras no encuentre y no llegue el final.
   int n = collSize<int>(c);
   while(i < n  &&  collGetAt<int>(c, i, stringToInt) != v){
      i++;
   }

   //Retorno la posición donde encontré negativo.
   return i<n?i:-1;
}

int binarySearch(Coll<int> c, int v){
   int k;
   bool encontrado = false;
   int i = 0;
   int j = collSize<int>(c)-1;

   while(i <= j  &&  !encontrado){
      k = (i+j)/2;
      int elemento = collGetAt<int>(c, k, stringToInt);

      if(elemento < v){
         i = k+1;
      }
      else if(elemento > v){
         j = k-1;
      }
      else{
         encontrado = true;
      }
   }

   return i<=j?k:-1;
}

//Ordenamiento por Montículo.

//Ordenamiento por Raíz.

int main() {

   cout << "Ordenamientos y Busquedas" << endl;

   return 0;
}
