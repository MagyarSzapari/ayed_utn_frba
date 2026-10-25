/*Búsqueda Binaria: busca un determinado elemento en un arreglo, pero
requiere que el arreglo esté ordenado de forma ascendente. Resulta más
eficiente y rápida que la Búsqueda Secuencial.*/

#include <iostream>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5}, i,
    inferior, superior, mitad, dato;
    char flag = 'F';

    cout << "Ingrese el elemento a buscar: ";
    cin >> dato;

    //Algoritmo de Búsqueda Binaria.
    inferior = 0;
    superior = 5;
    i = 0;
    while((inferior <= superior) && (i<5)){
        mitad = (inferior+superior)/2;

        if(numeros[mitad] == dato){
            flag = 'V';
            break; //Como ya encontramos el número, tiene que salir del bucle While.
        }
        if(numeros[mitad] > dato){
            superior = mitad;
            mitad = (inferior+superior)/2;
        }
        if(numeros[mitad] < dato){
            inferior = mitad;
            mitad = (inferior+superior)/2;
        }
        i++;
    }

    if(flag == 'V'){
        cout << "\nEl numero buscado ha sido encontrado en la posicion: " << mitad << endl;
    }
    else{
        cout << "\nEl numero buscado no se encuentra en el arreglo." << endl;
    }

    return 0;
}
