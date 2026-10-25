//============================================================================
// Name        : Saludar_Al_Usuario.cpp
// Author      : Marco Szapari Marcos
// Version     :
// Copyright   :
// Description : Saludar al Usuario, en C++
//============================================================================


#include <iostream>
using namespace std;


int main() {
   //Mensaje al usuario
   cout << "Como te llamas?" << endl;

   //Preparo la memoria
   string nombre;

   //El usuario ingresa su nombre
   cin >> nombre;

   //La computadora responde
   cout << "Hola, " << nombre << endl;

   return 0;
}
