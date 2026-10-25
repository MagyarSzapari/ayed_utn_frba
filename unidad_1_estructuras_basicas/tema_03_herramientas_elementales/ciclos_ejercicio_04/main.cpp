/*Tomar la temperatura exterior cada cuatro (4) horas, leyéndola durante un
período de 24 horas. Es decir, debe leer seis (6) temperaturas. Calcular la
temperatura media del día, la temperatura máxima y la temperatura mínima. */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float temperatura, suma_temperatura = 0, temperatura_media,
    temperatura_maxima = 0, temperatura_minima = 999;

    for(int i=0; i<=24; i+=4){ //Se suma de 4 hs. en 4 hs.
        cout << "Ingrese la temperatura a las " << i << " horas: " << endl;
        cin >> temperatura;

        suma_temperatura += temperatura;

        if(temperatura > temperatura_maxima){
            temperatura_maxima = temperatura;
        }
        if(temperatura < temperatura_minima){
            temperatura_minima = temperatura;
        }
    }

    temperatura_media = suma_temperatura / 6; //Dividido por 6 porque son 6 temperaturas en total.

    cout << "\nLa temperatura media es: " << temperatura_media << endl;
    cout << "La temperatura maxima es: " << temperatura_maxima << endl;
    cout << "La temperatura minima es: " << temperatura_minima << endl;

    getch();
    return 0;
}
