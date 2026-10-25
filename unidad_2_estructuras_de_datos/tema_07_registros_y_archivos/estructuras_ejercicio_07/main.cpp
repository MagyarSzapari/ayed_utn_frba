/* Definir una estructura que indique el tiempo empleado por un ciclista en
una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
Escribir un programa que dado "n" etapas calcule el tiempo total empleado en
correr todas las etapas. */

#include <iostream>

using namespace std;

struct Etapas{
    int horas;
    int minutos;
    int segundos;
}etapas[100];

int main(){
    int numeroEtapas, i = 0, horasTotales = 0,
    minutosTotales = 0, segundosTotales = 0;

    cout << "Ingrese la cantidad de etapas: ";
    cin >> numeroEtapas;
    cout << "\n";

    for(i=0; i<numeroEtapas; i++){
        cin.clear(); cin.ignore(50, '\n');
        cout << "Horas: "; cin >> etapas[i].horas;
        cin.clear(); cin.ignore(50, '\n');
        cout << "Minutos: "; cin >> etapas[i].minutos;
        cin.clear(); cin.ignore(50, '\n');
        cout << "Segundos: "; cin >> etapas[i].segundos;
        cin.clear(); cin.ignore(50, '\n');

        horasTotales += etapas[i].horas;
        minutosTotales += etapas[i].minutos;
        if(minutosTotales >= 60){
            minutosTotales -= 60;
            horasTotales++;
        }
        segundosTotales += etapas[i].segundos;
        if(segundosTotales >= 60){
            segundosTotales -= 60;
            minutosTotales++;
        }
    }

    cout << "\n---Tiempo total empleado---" << endl;
    cout << "Horas: " << horasTotales << endl;
    cout << "Minutos: " << minutosTotales << endl;
    cout << "Segundos: " << segundosTotales << endl;

    return 0;
}
