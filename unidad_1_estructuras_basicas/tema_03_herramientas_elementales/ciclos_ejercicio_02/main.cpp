/*Leer de la entrada estándar números hasta que se introduzca un cero. En ese
momento, el programa debe terminar y mostrar en la salida estándar el número
de valores mayores que cero leídos.*/

#include <iostream>

using namespace std;

int main(){
    int numero, cantidad = 0;

    do{
        cout << "Ingrese un numero entero: " << endl;
        cin >> numero; cout << endl;

        if(numero>0){
            cantidad++;
        }

    }while(numero!=0);

    cout << "\nLa cantidad de valores mayores que cero introducida es: " << cantidad << endl;

    return 0;
}
