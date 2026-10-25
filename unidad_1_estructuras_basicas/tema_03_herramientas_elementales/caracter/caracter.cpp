//============================================================================
// Name        : Caracter.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char c1 = 'A';
	char c2 = 65;
	char c3 = 48;
	int i = 'A';

   cout << (int) c1 << endl; //Imprime c1 como si fuera de tipo int. Esto se llama "castear".
   cout << c2 << endl;
   cout << c3 << endl;
   cout << (char) i << endl; //Imprime i como si fuera de tipo char.

	return 0;
}
