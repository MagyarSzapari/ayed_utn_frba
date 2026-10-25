/*El Método Burbuja es un algoritmo de ordenamiento que funciona revisando cada
elemento de la lista que va a ser ordenada con el siguiente, intercambiándolos de
posición si están en el orden equivocado. Es necesario revisar varias veces toda
la lista hasta que no se necesiten más intercambios, lo cual significa que la
lista está ordenada. Es un método ineficiente, pero básico.

Ejemplo:
array[] = {4, 5, 2, 1, 3}

Si(numeroActual > numeroSiguiente){
	Cambio
}

Entonces:
1. (4 < 5) -> array[] = {4, 5, 2, 1, 3}
2. (2 < 5) -> array[] = {4, 2, 5, 1, 3}
3. (1 < 5) -> array[] = {4, 2, 1, 5, 3}
4. (3 < 5) -> array[] = {4, 2, 1, 3, 5}
5. (2 < 4) -> array[] = {2, 4, 1, 3, 5}
6. (1 < 4) -> array[] = {2, 1, 4, 3, 5}
7. (3 < 4) -> array[] = {2, 1, 3, 4, 5}
8. (4 < 5) -> array[] = {2, 1, 3, 4, 5}
9. (1 < 2) -> array[] = {1, 2, 3, 4, 5}
10. (2 < 3) -> array[] = {1, 2, 3, 4, 5}
11. (3 < 4) -> array[] = {1, 2, 3, 4, 5}
12. (4 < 5) -> array[] = {1, 2, 3, 4, 5}
"array[] ORDENADO"   */

#include <iostream>

using namespace std;

int main(){
    int numeros[] = {4,1,2,3,5}, i, j, auxiliar;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(numeros[j] > numeros[j+1]){
                auxiliar = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = auxiliar;
            }
        }
    }

    cout << "Orden Ascendente: ";
    for(i=0;i<5;i++){
        cout << numeros[i] << " ";
    }

    cout << "\n\nOrden Descendente: ";
    for(i=4;i>=0;i--){
        cout << numeros[i] << " ";
    }

    cout << "\n";

    return 0;
}
