//============================================================================
// Name        : TAD_Map.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<typename K, typename T>
struct Map{
   //Implementación.
};

Map<K, T> mapCreate(){
   //Es una función vacía. Implementación.
}

void mapPut(Map<K, T>& m, K k, T t){
   //Implementación.
}

T* mapGet(Map<K, T> m, K k){
   //Implementación.
}

bool mapContains(Map<K, T> m, K k){
   //Implementación.
}

T mapRemove(Map<K, T>& m, K k){
   //Implementación.
}

bool mapHasNext(Map<K, T> m){
   //Implementación.
}

K mapNextKey(Map<K, T>& m){
   //Implementación.
}

T* mapNextValue(Map<K, T>& m){
   //Implementación.
}

void mapReset(Map<K, T>& m){
   //Implementación.
}

//*
struct Integrante{
   string nombre;
   string rol;
};

Integrante integranteCreate(string nombre, string rol){
   return (Integrante){nombre, rol};
}

int main() {

   //Ejemplo de TAD Map:
   //*

   //Map
   Map<string, Integrante> beatles = mapCreate<string, Integrante>();
   mapPut<string, Integrante>("John", integranteCreate("John", "Guitarrista"));
   mapPut<string, Integrante>("Paul", integranteCreate("Paul", "Bajista"));
   mapPut<string, Integrante>("George", integranteCreate("George", "Guitarrista"));
   mapPut<string, Integrante>("Ringo", integranteCreate("Ringo", "Baterista"));

   Integrante* b = mapGet<string, Integrante>(beatles, "Ringo");
   cout << b->rol << endl; //Salida: Baterista

   return 0;
}
