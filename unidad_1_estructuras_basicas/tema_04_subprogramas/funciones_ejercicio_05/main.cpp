/* Escribir una plantilla de función llamada despliegue() que despliegue el
valor del argumento único que se le transmite cuando es invocada la función. */

#include <iostream>

using namespace std;

//Prototipos de Función.
template <class TIPODEDATO>
void despliegue(TIPODEDATO dato);

int main(){
    int dato1 = 17;
    float dato2 = 35.69;
    double dato3 = 123.617;
    char dato4 = 'v';

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);

    return 0;
}

//Definición de Función.
template <class TIPODEDATO>
void despliegue(TIPODEDATO dato){
    cout << "El dato es: " << dato << endl;
}
