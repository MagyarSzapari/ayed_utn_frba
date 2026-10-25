/*Simular un cajero automático, con un saldo inicial
de mil (1000) dólares, que tenga un menú. */

#include <iostream>

using namespace std;

int main(){
    int saldo_inicial = 1000, opcion;
    float extra, saldo = 0, retiro;

    cout << "\tBienvenido a su cajero automatico." << endl; // "\t" significa "tabular".
    cout << "\n1. Ingresar dinero en cuenta." << endl;
    cout << "2. Retirar dinero de la cuenta." << endl;
    cout << "3. Salir." << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion){
        case 1:
            cout << "Escriba la cantidad de dinero a ingresar: ";
            cin >> extra;

            saldo = saldo_inicial + extra;

            cout << "Dinero en cuenta: " << saldo << endl; break;

        case 2:
            cout << "Escriba la cantidad de dinero a retirar: ";
            cin >> retiro;

            if(retiro>saldo_inicial){
                cout << "No tiene esa cantidad de dinero." << endl;
            }
            else{
                saldo = saldo_inicial - retiro;
                cout << "Dinero en cuenta: " << saldo << endl; break;
            }

        case 3: break;
    }

    return 0;
}
