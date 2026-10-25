//============================================================================
// Name        : Biblioteca_de_Templates.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<typename T>
int add(T a[], int& length, T v){
   //Implementar.
}

template<typename T>
void insert(T a[], int& length, T v, int p){
   //Implementar.
}

template<typename T>
T remove(T a[], int& length, int p){
   //Implementar.
}

template<typename T, typename K>
int find(T a[], int& length, K k, int comparaTK(T, K)){
   //Implementar.
}

template<typename T>
int orderedInsert(T a[], int& length, T v, int comparaTT(T, T)){
   //Implementar.
}

template<typename T>
void sort(T a[], int& length, int comparaTT(T, T)){
   //Implementar.
}

//*
int comparaInts(int a, int b){
   return a-b;
}

int main() {

   //Ejemplo "add":
   int array1[100];
   int length1 = 0;

   add<int>(array1, length1, 1); //array={1}
   add<int>(array1, length1, 2); //array={1, 2}
   add<int>(array1, length1, 3); //array={1, 2, 3}

   //Ejemplo "insert":
   int array2[100];
   int length2 = 0;

   insert<int>(array2, length2, 1, 0); //array={1}
   insert<int>(array2, length2, 2, 0); //array={2, 1}
   insert<int>(array2, length2, 3, 0); //array={3, 2, 1}

   //Ejemplo "remove":
   int array3[] = {1, 2, 3, 4, 5};
   int length3 = 5;

   remove<int>(array3, length3, 2); //array={1, 2, 4, 5}
   remove<int>(array3, length3, 0); //array={2, 4, 5}
   remove<int>(array3, length3, 2); //array={2, 4}

   //Ejemplo "find":
   //*
   int array4[] = {1, 2, 3, 4, 5};
   int length4 = 5;

   int p = find<int, int>(array4, length4, 4, comparaInts); //p vale 3.
   p = find<int, int>(array4, length4, 1, comparaInts); //p vale 0.

   //Ejemplo "orderedInsert":
   //*
   int array5[0];
   int length5 = 0;

   orderedInsert<int>(array5, length5, 3, comparaInts); //array={3}
   orderedInsert<int>(array5, length5, 2, comparaInts); //array={2, 3}
   orderedInsert<int>(array5, length5, 1, comparaInts); //array={1, 2, 3}

   //Ejemplo "sort":
   //*
   int array6[]={5, 4, 3, 2, 1};
   int length6 = 5;

   sort<int>(array6, length6, comparaInts); //array={1, 2, 3, 4, 5}

   return 0;
}
