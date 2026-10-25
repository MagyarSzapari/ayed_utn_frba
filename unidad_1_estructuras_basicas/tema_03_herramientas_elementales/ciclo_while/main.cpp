/*La sentencia while se escribe:

    while(expresión_lógica){
        conjunto_de_instrucciones;
    }
*/

#include <iostream>

using namespace std;

int main(){
    int i;

    i=1;

    cout << "Los numeros del 1 al 10 son: " << endl;

    while(i<=10){
     cout << i << endl;
     i++;
    }

    return 0;
}
