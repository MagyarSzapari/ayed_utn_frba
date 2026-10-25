//============================================================================
// Name        : Pila_y_Cola.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Nodo{
   int informacion;
   Nodo* siguiente;
};

//Función "Push" o "Apilar", de una pila.
void apilar(Nodo*& p, int v){
   Nodo* nuevo = new Nodo();
   nuevo->informacion = v;
   nuevo->siguiente = p;
   p = nuevo;
}

//Función "Pop" o "Desapilar", de una pila.
int desapilar(Nodo*& p){
   Nodo* auxiliar = p;
   //p pasa a apuntar al siguiente, porque ese será el primero ahora.
   p = p->siguiente;
   int v = auxiliar->informacion;
   delete auxiliar;

   return v;
}

//Se fija si la pila está vacía.
bool pilaEstaVacia(Nodo* p){
   return (p == NULL);
}

//Función "Enqueue" o "Encolar", de una cola.
void encolar(Nodo*& p, Nodo*& q, int v){
   Nodo* nuevo = new Nodo();
   nuevo->informacion = v;
   nuevo->siguiente = NULL;

   if(q != NULL){
      q->siguiente = nuevo;
   }
   else{
      p = nuevo;
   }

   q = nuevo;
}

//Función "Dequeue" o "Desencolar", de una cola.
int desencolar(Nodo*& p, Nodo*& q){
   int retorno = p->informacion;
   Nodo* auxiliar = p;
   p = p->siguiente;
   delete auxiliar;

   if(p == NULL){
      q = NULL;
   }

   return retorno;
}

//Se fija si la cola está vacía.
bool colaEstaVacia(Nodo* p, Nodo* q){
   return (p == NULL);
}

//Función "Enqueue" o "Encolar", de una cola circular.
void encolarCircular(Nodo*& q, int v){
   Nodo* nuevo = new Nodo();
   nuevo->informacion = v;

   if(q != NULL){
      nuevo->siguiente = q->siguiente;
      q->siguiente = nuevo;
   }
   else{
      nuevo->siguiente = nuevo;
   }

   q = nuevo;
}

//Función "Dequeue" o "Desencolar", de una cola circular.
int desencolarCircular(Nodo*& q){
   Nodo* auxiliar = q->siguiente;
   q->siguiente = auxiliar->siguiente;
   int retorno = auxiliar->informacion;

   if(auxiliar == q){
      q = NULL;
   }

   delete auxiliar;

   return retorno;
}

//EJEMPLO DE USO - FALTA AGREGARLE LA BIBLIOTECA DE TAD ARRAY.

//Función "Enqueue" o "Encolar", de una cola, implementada sobre un TAD Array.
void encolarConArray(Array<int>& c, int v){
   arrayAdd<int>(c, v);
}

//Función "Dequeue" o "Desencolar", de una cola, implementada sobre un TAD Array.
int desencolarConArray(Array<int>& c){
   return arrayRemove<int>(c, 0);
}

bool esColaVaciaConArray(Array<int> c){
   return arraySize<int>(c) == 0;
}

int main(){
   Array<int> c = array<int>();
   encolarConArray(c, 1);
   encolarConArray(c, 2);
   encolarConArray(c, 3);

   cout << desencolarConArray(c) << "\n---" << endl;

   encolarConArray(c, 4);
   encolar(c, 5);

   while(!esColaVaciaConArray(c)){
      cout << desencolarConArray(c) << endl;
   }

   return 0;
}
