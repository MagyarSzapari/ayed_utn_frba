//Realizar el cálculo de la fórmula resolvente, o baskara.

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a, b, c, x1 = 0, x2 = 0;

	cout<<"Ingrese los valores de a, b y c: ";
	cin>>a;
	cin>>b;
	cin>>c;

	x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

	cout<<"\nLas raices de la funcion son: "<< x1 << " y " << x2 << endl;

	return 0;
}
