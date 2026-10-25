/* La sentencia do-while se escribe:

    do{
        conjunto_de_instrucciones;
    }while(expresión_lógica);
*/

#include <iostream>

using namespace std;

int main(){
    int i;

    i=1;

    cout << "Los numeros del 1 al 10 son: " << endl;

    do{
        cout << i << endl;
        i++; //Aumenta el iterador (i) de uno en uno.
    }while(i<=10);

    return 0;
}
