/* Plantillas de Función:

Una plantilla de función se utiliza para englobar un tipo de dato general
para poder utilizar con una función determinada y ahorrar muchas líneas
de código.

Ejemplo: Sacar el valor absoluto de un número. */

#include <iostream>

using namespace std;

//Prototipo de Función
template <class TIPODEDATO> /*Esto es el "Prefijo" de la plantilla. "TIPODEDATO" significa
                            que puedo poner el tipo de dato que quiera.*/
void mostrarAbs(TIPODEDATO numero); /*"void" no retorna valor. Y esta función utilizará
                                una plantilla de función (la del prefijo).*/

int main(){
    int numero1 = 17;
    float numero2 = 35.69;
    double numero3 = -123.617;

    mostrarAbs(numero1);
    mostrarAbs(numero2);
    mostrarAbs(numero3);

    return 0;
}

//Definición de Función
template <class TIPODEDATO>
void mostrarAbs(TIPODEDATO numero){
    if(numero<0){
        numero *= -1;
    }

    cout << "El valor absoluto del numero es: " << numero << endl;
}
