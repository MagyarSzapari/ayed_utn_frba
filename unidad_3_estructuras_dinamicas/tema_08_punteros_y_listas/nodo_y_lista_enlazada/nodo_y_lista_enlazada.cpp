//============================================================================
// Name        : Nodo_y_Lista_Enlazada.cpp
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

void agregar(Nodo*& p, int v){
   Nodo* nuevo = new Nodo();
   nuevo->informacion = v;
   nuevo->siguiente = NULL;

   if(p != NULL){
      Nodo* auxiliar = p;
      while(auxiliar->siguiente != NULL){
         auxiliar = auxiliar->siguiente;
      }
      auxiliar->siguiente = nuevo;
   }
   else{
      p = nuevo;
   }
}

void mostrar(Nodo* p){
   Nodo* auxiliar = p;

   while(auxiliar != NULL){
      cout << auxiliar->informacion << endl;
      auxiliar = auxiliar->siguiente;
   }
}

void liberar(Nodo*& p){
   while(p != NULL){
      Nodo* auxiliar = p->siguiente;
      delete p;
      p = auxiliar;
   }
}

int main() {
	//Creo una Lista Enlazada (puntero a NULL).
   Nodo* p = NULL;

   //Agrego datos.
   agregar(p, 1);
   agregar(p, 2);
   agregar(p, 3);

   //Muestro su contenido.
   mostrar(p);

   //Libero la memoria.
   liberar(p);

	return 0;
}
