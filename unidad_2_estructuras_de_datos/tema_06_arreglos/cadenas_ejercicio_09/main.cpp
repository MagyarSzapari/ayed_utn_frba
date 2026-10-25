/*Leer una cadena de caracteres de la entrada estándar y mostrar, en la salida
estándar, cuántas ocurrencias de cada vocal existen en la cadena.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena1[50];
    int vocal_a = 0, vocal_e = 0,
    vocal_i = 0, vocal_o = 0, vocal_u = 0;

    cout << "Ingrese una frase (maximo 50 caracteres): ";
    cin.getline(cadena1, 50, '\n');

    for(int i=0; i<50; i++){
        switch(cadena1[i]){
            case 'a': vocal_a++; break;
            case 'e': vocal_e++; break;
            case 'i': vocal_i++; break;
            case 'o': vocal_o++; break;
            case 'u': vocal_u++; break;
        }
    }

    cout << "Vocal 'a': " << vocal_a << endl;
    cout << "Vocal 'e': " << vocal_e << endl;
    cout << "Vocal 'i': " << vocal_i << endl;
    cout << "Vocal 'o': " << vocal_o << endl;
    cout << "Vocal 'u': " << vocal_u << endl;

    return 0;
}
