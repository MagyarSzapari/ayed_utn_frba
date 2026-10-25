/*
 * Funciones_Catedra.hpp
 *
 *  Created on: 03/03/2024
 *      Author: Usuario
 */

#ifndef FUNCIONES_CATEDRA_HPP_
#define FUNCIONES_CATEDRA_HPP_

//BÚSQUEDAS.

//Búsqueda Secuencial.
int busquedaSecuencial(int vector[], unsigned dimension, int datoBuscado){
    unsigned i = 0;

    while(i < dimension && vector[i] != datoBuscado){
        i++;
    }

    if(i == dimension){
        return -1;
    }
    else{
        return i;
    }
}
//NOTA: Se puede cambiar el tipo de dato del array, dependiendo de la situación; el resto se mantiene igual.

//Búsqueda Binaria.
int binaria(int vector[], unsigned dimension, int datoBuscado){
    int desde = 0, hasta = dimension-1, medio;

    do{
        medio = (desde + hasta) / 2;

        if(datoBuscado < vector[medio]){
            hasta = medio - 1;
        }
        else{
            desde = medio + 1;
        }
    } while(desde <= hasta && vector[medio] != datoBuscado);

    if(vector[medio] == datoBuscado){
        return medio;
    }
    else{
        return -1;
    }
}
//NOTA: Ídem.


#endif /* FUNCIONES_CATEDRA_HPP_ */
