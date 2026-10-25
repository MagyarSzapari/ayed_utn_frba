/* La estructura de la sentencia "switch" es:

switch(expresion){
    case literal1:
        conjunto_de_instrucciones1;
        break;
    case literal2:
        conjunto_de_instrucciones2;
        break;
    case literaln:
        conjunto_de_instruccionesn;
        break;
    default:
        conjunto_de_instrucciones_por_defecto;
        break;
}
*/

#include <iostream>

using namespace std;

int main(){
    int numero;

    cout << "Ingrese un numero entre 1 y 5: " << endl;
    cin >> numero;

    switch(numero){
        case 1: cout << "Es el numero 1"; break;
        case 2: cout << "Es el numero 2"; break;
        case 3: cout << "Es el numero 3"; break;
        case 4: cout << "Es el numero 4"; break;
        case 5: cout << "Es el numero 5"; break;
        default: cout << "El numero no se encuentra en el rango especificado."; break;
    }

    return 0;
}
