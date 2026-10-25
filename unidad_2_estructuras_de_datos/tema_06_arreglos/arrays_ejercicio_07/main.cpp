/*Definir dos vectores de caracteres y después almacenar el contenido de ambos vectores
en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los
elementos del segundo vector. Mostrar el contenido del nuevo vector en la salida estándar.*/

#include <iostream>

using namespace std;

int main(){
    char letras1[] = {'a','b','c','d','e'},
         letras2[] = {'f','g','h','i','j'},
         letras3[10];

    //Copia elementos de "letras1[]" en "letras3[]".
    for(int i=0;i<5;i++){
        letras3[i] = letras1[i];
    }

    //Copia elementos de "letras2[]" en "letras3[]".
    for(int i=5;i<10;i++){
        letras3[i] = letras2[i-5];
    }

    //Muestra el array "letras3[]".
    for(int i=0; i<10; i++){
        cout << letras3[i] << endl;
    }

    return 0;
}
