/* La sentencia for se escribe:

    for(expresion1; expresión_lógica; expresion2){
        conjunto_de_instrucciones;
    }

*/

#include <iostream>

using namespace std;

int main(){
    int i;

    cout << "Los numeros del 1 al 10 son: " << endl;

    for(i=1; i<=10; i++){
        cout << i << endl;
    }

    return 0;
}
