/* La estructura de la sentencia "if" es:

    if(condición){
        Instrucciones 1;
    }
    else{
        Instrucciones 2;
    }
*/

#include <iostream>

using namespace std;

int main(){
    int numero, dato = 5;

    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    if(numero == dato){
        cout << "Encontraste el numero secreto: " << numero << endl;
    }
    else{
        cout << "No encontraste el numero secreto." << endl;
    }

    return 0;
}
