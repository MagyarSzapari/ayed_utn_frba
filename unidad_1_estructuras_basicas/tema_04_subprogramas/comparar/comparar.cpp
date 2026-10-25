//============================================================================
// Name        : Comparar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*int cmpIntAscendente(int a, int b){ //cmp significa "Comparar".
   return (a-b); //Si a es menor que b, dará -, si son iguales 0, y si es mayor +.
}

int cmpIntDescendente(int a, int b){
   return (b-a); //Si b es menor que a, dará -, si son iguales 0, y si es mayor +.
}*/

int longitud(string s){
   int i = 0;
   while(s[i]!='\0'){
      i++;
   }

   return i;
}

int cmpStringAscendente(string a, string b){ //De la "a" a la "z".
   return (a<b?-1:a>b?1:0); //Esto es un if in-line. lo que viene antes del ? es la condición del if, y el : representa un else.
}

int cmpStringDescendente(string a, string b){ //De la "z" a la "a".
   return (a>b?-1:a<b?1:0); //Esto es un if in-line. lo que viene antes del ? es la condición del if, y el : representa un else.
}

int cmpStringLengthAscendente(string a, string b){
   return (longitud(a)-longitud(b)); //
}

int main() {
	string x, y;
	cout << "Ingrese dos nombres: " << endl;
	cin >> x >> y;

	//Comparo ascendentemente.
	/*if(cmpIntAscendente(x, y) < 0){
	   cout << x << " precede a " << y << endl;
	}
	else if(cmpIntAscendente(x, y) > 0){
	   cout << y << " precede a " << x << endl;
	}
	else{
	   cout << x << " es igual a " << y << endl;
	}

	//Comparo descendentemente.
	   if(cmpIntDescendente(x, y) < 0){
	      cout << x << " precede a " << y << endl;
	   }
	   else if(cmpIntDescendente(x, y) > 0){
	      cout << y << " precede a " << x << endl;
	   }
	   else{
	      cout << x << " es igual a " << y << endl;
	   }*/

	if(cmpStringAscendente(x, y) < 0){
	         cout << x << " precede a " << y << endl;
	      }
	      else if(cmpStringAscendente(x, y) > 0){
	         cout << y << " precede a " << x << endl;
	      }
	      else{
	         cout << x << " es igual a " << y << endl;
	      }

	if(cmpStringDescendente(x, y) < 0){
	            cout << x << " precede a " << y << endl;
	         }
	         else if(cmpStringDescendente(x, y) > 0){
	            cout << y << " precede a " << x << endl;
	         }
	         else{
	            cout << x << " es igual a " << y << endl;
	         }

	if(cmpStringLengthAscendente(x, y) < 0){
	               cout << x << " precede a " << y << endl;
	            }
	            else if(cmpStringLengthAscendente(x, y) > 0){
	               cout << y << " precede a " << x << endl;
	            }
	            else{
	               cout << x << " es igual a " << y << endl;
	            }

	return 0;
}
