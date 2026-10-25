/*Leer de la entrada estándar los dos catetos de un triángulo
rectángulo y escribir en la salida estándar su hipotenusa.*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float cateto1, cateto2, hipotenusa = 0;

    cout << "Ingrese los valores de los catetos: " << endl;
    cin >> cateto1;
    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << "\nEl valor de la hipotenusa es: " << hipotenusa << endl;

    return 0;
}
