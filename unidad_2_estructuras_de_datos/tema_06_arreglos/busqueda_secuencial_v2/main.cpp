//Otra forma de hacer la Búsqueda Secuencial.

#include <iostream>

using namespace std;

int main(){
    int encontrado = 0, i, dato,
    array[] = {5,3,2,1,4};

    cout << "Ingrese el elemento a buscar: ";
    cin >> dato;

    for (i = 0; i < 5; i++){
        if (array[i] == dato){
            encontrado = 1; // Esto indica que el número fué encontrado.
            break; //El break indica que, si el número fué encontrado, el
                   //programa sale del ciclo for.
        }
    }
    if (encontrado == 0){
        cout << "El numero ingresado no existe en el arreglo" << endl;
    }
    else if (encontrado == 1){
        cout << "El numero ingresado se encuentra en la posicion: " << i << endl;
    }

    return 0;
}
