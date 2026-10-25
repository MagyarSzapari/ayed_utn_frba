//Comparar cadenas entre ellas, teniendo en cuenta los valores ASCII de los caracteres.

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra1[] = "Hola",
    palabra2[] = "Hola";

    //Si str1 == str2 (0), si str1 < str2 (-1), si str1 > str2 (1).
    if(strcmp(palabra1, palabra2) == 0){ //"strcmp" significa "string compare".
        cout << "Ambas cadenas son iguales." << endl;
    }

    return 0;
}
