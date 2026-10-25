//Pasar una cadena a minúscula.

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena1[] = "ROMAE ANTIQUAE";

    strlwr(cadena1); //"strlwr" significa "string lowercase".

    cout << cadena1 << endl;

    return 0;
}
