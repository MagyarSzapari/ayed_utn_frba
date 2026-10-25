/*El Método por Selección es un algoritmo de ordenamiento que requiere O(n^2)
operaciones para ordenar una lista de "n" números. Su funcionamiento es el siguiente:

1. Buscar el mínimo elemento de la lista.
2. Intercambiar con el primer elemento.
3. Buscar el mínimo del resto de la lista.
4. Intercambiar con el segundo.
5. Y así sucesivamente.

Ejemplo:
array[] = {4, 3, 1, 5, 2}

1. posición = 0; elementoMínimo = 1 -> array[] = {1, 3, 4, 5, 2}
2. posición = 1; elementoMínimo = 2 -> array[] = {1, 2, 4, 5, 3}
3. posición = 2; elementoMínimo = 3 -> array[] = {1, 2, 3, 5, 4}
4. posición = 3; elementoMínimo = 4 -> array[] = {1, 2, 3, 4, 5}
5. posición = 4; elementoMínimo = 5 -> array[] = {1, 2, 3, 4, 5}
"array[] ORDENADO"*/

#include <iostream>

using namespace std;

int main(){
    int numeros[] = {3,2,1,5,4},
    i, j, elementoMinimo, auxiliar;

    //Algoritmo de Ordenamiento por Selección.
    for(i=0; i<5; i++){
        elementoMinimo = i;
        for(j=i+1; j<5; j++){
            if(numeros[j] < numeros[elementoMinimo]){
                elementoMinimo = j;
            }
        }
        auxiliar = numeros[i];
        numeros[i] = numeros[elementoMinimo];
        numeros[elementoMinimo] = auxiliar;
    }

    cout << "Orden Ascendente: ";
    for(i=0; i<5; i++){
        cout << numeros[i] << " ";
    }

    cout << "\n\nOrden Descendente: ";
    for(i=4; i>=0; i--){
        cout << numeros[i] << " ";
    }

    cout << "\n";

    return 0;
}
