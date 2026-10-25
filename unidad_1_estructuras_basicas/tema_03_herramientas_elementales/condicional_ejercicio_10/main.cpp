/*Mostrar los meses del año, pidiéndole al usuario que ingrese un
valor entre 1 y 12, y mostrar al mes que le corresponde.*/

#include <iostream>

using namespace std;

int main(){
    int mes;

    cout << "Ingrese el numero del mes: " << endl;
    cin >> mes;

    switch(mes){
        case 1: cout << "El numero corresponde al mes 'Enero'." << endl; break;
        case 2: cout << "El numero corresponde al mes 'Febrero'." << endl; break;
        case 3: cout << "El numero corresponde al mes 'Marzo'." << endl; break;
        case 4: cout << "El numero corresponde al mes 'Abril'." << endl; break;
        case 5: cout << "El numero corresponde al mes 'Mayo'." << endl; break;
        case 6: cout << "El numero corresponde al mes 'Junio'." << endl; break;
        case 7: cout << "El numero corresponde al mes 'Julio'." << endl; break;
        case 8: cout << "El numero corresponde al mes 'Agosto'." << endl; break;
        case 9: cout << "El numero corresponde al mes 'Septiembre'." << endl; break;
        case 10: cout << "El numero corresponde al mes 'Octubre'." << endl; break;
        case 11: cout << "El numero corresponde al mes 'Noviembre'." << endl; break;
        case 12: cout << "El numero corresponde al mes 'Diciembre'." << endl; break;
        default: cout << "El numero ingresado no corresponde a ningun mes." << endl; break;
    }

    return 0;
}
