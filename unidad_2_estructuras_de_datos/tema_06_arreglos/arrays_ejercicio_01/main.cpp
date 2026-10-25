//Definir un vector de números y calcular la suma de sus elementos.

#include <iostream>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5};
    int suma = 0;

    for(int i=0;i<5;i++){ //i=0 porque los arrays empiezan a contar desde la posición 0.
        suma += numeros[i];
    }

    cout << "La suma de los elementos del vector es: " << suma << endl;

    return 0;
}
