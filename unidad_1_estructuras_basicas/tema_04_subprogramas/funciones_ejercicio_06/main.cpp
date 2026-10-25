/* Escribir una plantilla de función llamada maximo() que devuelva el valor
máximo de tres argumentos que se transmitan a la función cuando sea llamada.
Suponer que los tres argumentos serán del mismo tipo de datos. */

#include <iostream>

using namespace std;

//Prototipo de Función.
void pedirDatos();

template <class TIPODEDATO>
TIPODEDATO maximo(TIPODEDATO x, TIPODEDATO y, TIPODEDATO z);

//Declaración global de variables
char x, y ,z;

int main(){
    pedirDatos();

    cout << "\nLa letra mayor es: " << maximo(x, y, z) << endl;

    return 0;
}

//Definición de Función.
void pedirDatos(){
    cout << "Ingrese la primera letra: ";
    cin >> x;
    cout << "la segunda: ";
    cin >> y;
    cout << "y la tercera: ";
    cin >> z;
}

template <class TIPODEDATO>
TIPODEDATO maximo(TIPODEDATO x, TIPODEDATO y, TIPODEDATO z){
    TIPODEDATO maximoDato;

    if((x>y) && (x>z)){
        maximoDato = x;
    }
    else if((y>x) && (y>z)){
        maximoDato = y;
    }
    else {
        maximoDato = z;
    }

    return maximoDato;
}
