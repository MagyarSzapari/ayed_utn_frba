/* Hacer un arreglo de estructura llamada "Atleta", para "n" atletas, que
contenga los siguientes campos: nombre, país, numeroMedallas; y devuelva los
datos (Nombre, país) del atleta que ha ganado el mayor número de medallas. */

#include <iostream>

using namespace std;

struct Atleta{
    char nombre[30];
    char pais[30];
    int numeroMedallas;
}atleta[100];

int main(){
    int numeroAtletas, mayor = 0, posicionMayor = 0;

    cout << "Ingrese el numero de atletas: ";
    cin >> numeroAtletas;

    for(int i=0; i<numeroAtletas; i++){
        cin.clear(); cin.ignore(50, '\n');
        cout << "\n" << i+1 << ". Nombre: ";
        cin.getline(atleta[i].nombre, 30, '\n');
        cin.clear(); cin.ignore(50, '\n');
        cout << "\n" << i+1 << ". Pais: ";
        cin.getline(atleta[i].pais, 30, '\n');
        cin.clear(); cin.ignore(50, '\n');
        cout << "\n" << i+1 << ". Numero de Medallas: ";
        cin >> atleta[i].numeroMedallas;

        if(atleta[i].numeroMedallas > mayor){
            mayor = atleta[i].numeroMedallas;
            posicionMayor = i;
        }

        cout << "\n";
    }

    cout << "\n---Datos del atleta con mas medallas---" << endl;
    cout << "Nombre: " << atleta[posicionMayor].nombre << endl;
    cout << "Pais: " << atleta[posicionMayor].pais << endl;

    return 0;
}
