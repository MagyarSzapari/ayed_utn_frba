/*Pasaja de parámetros de tipo array.

Parámetros de la función:
	void nombreDeFuncion(tipo nombreArreglo[], int tamañoArreglo)

Llamada a la función:
	nombreDeFuncion(nombreArreglo, tamañoArreglo)

Ejemplificamos con los cuadradados de los elementos del array.

Nota: al intentar pasar un array como argumento a una función (en este
caso, arreglo[]), C++ automáticamente lo que pasa es su referencia.
Nota: para pasar arreglos en una función, siempre es necesario mandarle, como
mínimo, el arreglo y su tamaño (por ejemplo: int arreglo[], int).   */

#include <iostream>

using namespace std;

void cuadrado(int arreglo[], int);
void imprime(int arreglo[], int);

int main(){
    const int TAMANIO = 5;
    int arreglo[TAMANIO] = {1, 2, 3, 4, 5};

    cuadrado(arreglo, TAMANIO);
    imprime(arreglo, TAMANIO);

    return 0;
}

void cuadrado(int arreglo[], int tamanioArreglo){
    for(int i=0; i<tamanioArreglo; i++){
        arreglo[i] *= arreglo[i];
    }
}

void imprime(int arreglo[], int tamanioArreglo){
    for(int i=0; i<tamanioArreglo; i++){
        cout << arreglo[i] << " ";
    }
}
