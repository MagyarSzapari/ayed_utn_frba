//============================================================================
// Name        : TAD_Array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<typename T>
struct Array{
   //Implementación.
};

Array<T> arrayCreate(){
   //Es una función vacía. Implementación.
}

int arrayAdd(Array<T>& a, T v){
   //Implementación.
}

T* arrayGet(Array<T>& a, int p){
   //Implementación.
}

void arrayInsert(Array<T>& a, T v, int p){
   //Implementación.
}

T arrayRemove(Array<T>& a, int p){
   //Implementación.
}

void arrayFind(Array<T>& a, K k, int comparaTK(T, K)){
   //Implementación.
}

int arrayOrderedInsert(Array<T>& a, T v, int comparaTT(T, T)){
   //Implementación.
}

void arraySort(Array<T>& a, int comparaTT(T, T)){
   //Implementación.
}

int main() {

   //Ejemplo de uso del TAD Array:
   //Array de enteros.
   Array<int> a = arrayCreate<int>;
   arrayAdd<int>(a, 1);
   arrayAdd<int>(a, 2);
   arrayAdd<int>(a, 3);

   for(int i=0; i<arraySize(a); i++){
      int* i = arrayGet<int>(a);
      cout << *i << endl; //Salida: 123
   }

	return 0;
}
