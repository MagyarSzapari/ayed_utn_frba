/*Definir un vector de números y calcular si existe algún número en el vector
cuyo valor equivale a la suma del resto de números del vector.*/

#include <iostream>

using namespace std;

int main(){
    int numeros[100], n, suma = 0, mayor = 0;

    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cout << i+1 << ". Ingrese un numero: ";
        cin >> numeros[i];
    }

    for(int i=0; i<n; i++){
        suma += numeros[i];

        if(numeros[i]>mayor){  //Determinamos cuál es el número mayor, ya que
            mayor = numeros[i];//el único número que puede ser la suma de los
        }		   			   //demás es el número mayor.
    }

    if(mayor == suma-mayor){//Comparamos si el número mayor es igual a suma menos el número mayor.
        cout << "El numero '" << mayor << "' es la suma de los demas." << endl;
    }
    else{
        cout << "No existe ningun numero que sea la suma de los demas." << endl;
    }

    return 0;
}
