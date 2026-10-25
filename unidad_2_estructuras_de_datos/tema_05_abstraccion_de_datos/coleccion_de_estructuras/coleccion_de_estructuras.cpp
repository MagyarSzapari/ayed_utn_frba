//============================================================================
// Name        : Coleccion_de_Estructuras.cpp
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

string personaToString(Persona p){
   return intToString(p.dni)+","+p.nombre;
}

Persona personaFromString(string s){
   Persona p;
   p.dni = stringToInt(getTokenAt(s, 0, ','));
   p.nombre = getTokenAt(s, 1, ',');

   return p;
}

int comparaPersonaDNI(Persona p, int dni){
   return p.dni-dni;
}

int comparaPersonaNombre(Persona p, string nombre){
   return p.nombre<nombre?-1:p.nombre>nombre?1:0;
}

int comparaPersonasNombreAscendente(Persona p1, Persona p2){
   return p1.nombre<p2.nombre?-1:p1.nombre>p2.nombre?1:0;
}

int comparaPersonasNombreDescendente(Persona p1, Persona p2){
   return p2.nombre<p1.nombre?-1:p2.nombre>p1.nombre?1:0;
}

int comparaPersonasDNI(Persona p1, Persona p2){
   return p1.dni-p2.dni;
}

int main() {
   //Creo una colección de personas.
   Coll<Persona> c = coll<Persona>();

   //Le agrego tres personas.
   Persona p = {10, "Pedro"};
   collAdd<Persona>(c, p, personaToString);

   p = {20, "Pablo"};
   collAdd<Persona>(c, p, personaToString);

   p = {30, "Juan"};
   collAdd<Persona>(c, p, personaToString);

   //Itero la colección.
   collReset<Persona>(c);
   while(collHasNext<Persona>(c)){
      //Obtengo la siguiente persona.
      Persona p = collNext<Persona>(c, personaFromString);
      cout << v.dni << "," << v.nombre;
      cout << endl;
   }

   //El usuario ingresa un número de DNI.
   int dni;
	cout << "Ingrese un DNI: ";
	cin >> dni;

	//Busco una persona por DNI.
	int posicion = collFind<Persona, int>(c, dni, comparaPersonaDNI, personaFromString);

	//Si existe una persona con el DNI ingresado...
	if(posicion >= 0){
	   //Obtengo la persona y la muestro.
	   Persona p = collGetAt<Persona>(c, posicion, personaFromString);
	   cout << p.dni << "," << p.nombre << endl;
	}
	else{
	   //No existe una persona con ese DNI.
	   cout << "Persona no encontrada" << endl;
	}

	//Ordeno la colección por nombre ascendente.
	collSort<Persona>(c, comparaPersonasNombreAscendente, personaFromString, personaToString);

	//Muestro la colección ordenada por nombre descendente.
	collReset<Persona>(c);
	while(collHasNext<Persona>(c)){
	   Persona p = collNext<Persona>(c, personaFromString);
	   cout << v.dni << "," << v.nombre;
	   cout << endl;
	}

	//Ordeno la colección por DNI.
	collSort<Persona>(c, comparaPersonasDNI, personaFromString, personaToString);

	//Muestro la colección ordenada por DNI.
	collReset<Persona>(c);
	while(collHasNext<Persona>(c)){
	   Persona p = collNext<Persona>(c, personaFromString);
	   cout << v.dni << "," << v.nombre;
	   cout << endl;
	}

	return 0;
}
