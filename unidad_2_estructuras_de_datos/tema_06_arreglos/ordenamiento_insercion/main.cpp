/*El Método por Inserción es una manera muy natural de ordenar para un ser
humano, y puede usarse fácilmente para ordenar un mazo de cartas numeradas
de forma arbitraria. Requiere O(n^2) operaciones para ordenar una lista de
"n" elementos.

Ejemplo:
array[] = {5, 3, 4, 1, 2}

Si(numeroIzquierda > numeroActual){
	Cambio
}

Entonces:
1. (5 > 3) -> array[] = {3, 5, 4, 1, 2}
2. (3 > vacío) -> array[] = {3, 5, 4, 1, 2}
3. (5 > 4) -> array[] = {3, 4, 5, 1, 2}
4. (4 > 3) -> array[] = {3, 4, 5, 1, 2}
5. (5 > 1) -> array[] = {3, 4, 1, 5, 2}
6. (4 > 1) -> array[] = {3, 1, 4, 5, 2}
7. (3 > 1) -> array[] = {1, 3, 4, 5, 2}
8. (1 > vacío) -> array[] = {1, 3, 4, 5, 2}
9. (5 > 2) -> array[] = {1, 3, 4, 2, 5}
10. (4 > 2) -> array[] = {1, 3, 2, 4, 5}
11. (3 > 2) -> array[] = {1, 2, 3, 4, 5}
12. (2 > 1) -> array[] = {1, 2, 3, 4, 5}
"array[] ORDENADO" */

#include <iostream>

using namespace std;

int main(){
    int numeros[] = {4,2,3,1,5}, i, posicion, auxiliar;

    for(i=0;i<5;i++){
        posicion = i;
        auxiliar = numeros[i];

        while((posicion > 0) && (numeros[posicion-1] > auxiliar)){
            numeros[posicion] = numeros[posicion-1];
            posicion--;
        }

        numeros[posicion] = auxiliar;
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
