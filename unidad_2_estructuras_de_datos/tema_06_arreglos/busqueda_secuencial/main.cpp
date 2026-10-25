/*//Búsqueda Secuencial: busca de manera secuencial, es decir pasando una
por una las posiciones del arreglo y comenzando desde la posición 0, un
dato deseado. Por ejemplo, array[5] = {3,4,2,1,5}; dato = 4. */

#include <iostream>

using namespace std;

int main(){
    int array[] = {3, 4, 2, 1, 5}, i, dato;
    char flag = 'F';

    cout << "Ingrese un numero entero: ";
    cin >> dato;

    //Búsqueda Secuencial
    i = 0;
    while((flag == 'F') && (i<5)){
        if(array[i] == dato){
            flag = 'V';
        }
        i++;
    }

    if(flag == 'F'){
        cout << "\nEl numero buscado no existe en el arreglo." << endl;
    }
    else if(flag == 'V'){
        cout << "\nEl numero buscado ha sido encontrado en la posicion del arreglo "
        << i-1 << endl;
    }

    return 0;
}
