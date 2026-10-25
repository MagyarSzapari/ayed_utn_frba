//============================================================================
// Name        : Fecha_Correcta.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool esAnioBisiesto(int anio){
   bool esBisiesto = false;

   //Si es divisible por 4
   if(anio%4 == 0){
      esBisiesto = true;
   }
   else{
      if(anio%400 == 0  &&  anio%100 != 0){
         esBisiesto = true;
      }
   }

   return esBisiesto;
}

int diasDelMes(int mes, int anio){
   //En principio son 31 días
   int dias = 31;

   //Si es uno de los meses de 30 días}
   if(mes == 4  ||  mes == 6  ||  mes == 9  ||  mes == 11){
      dias = 30;
   }
   else{
      if(mes == 2){ //Si es febrero
         //Si el año es bisiesto, entonces son 29 días
         if(esAnioBisiesto(anio)){
            dias = 29;
         }
         else{
            dias = 28;
         }
      }
   }

   return dias;
}

bool validarFecha(int dia, int mes, int anio){
   //Cuántos días tiene el mes
   int maxDias = diasDelMes(mes, anio);

   //Si se cumplen las condiciones, la fecha es correcta
   bool retorno;
   if((dia>0  &&  dia<=maxDias)  &&  (mes>0  &&  mes<=12)  &&  (anio>=0)){
      retorno = true;
   }
   else{
      retorno = false;
   }

   return retorno;
}

int main() {

   //El usuario ingresa la fecha
   int dia, mes, anio;
   cout << "Ingrese el dia, el mes y el anio." << endl;
   cin >> dia, mes, anio;

   //Validamos la fecha ingresada
   bool fechaOK = validarFecha(dia, mes, anio);

   //Si no es correcta, mostramos el error
   if(!fechaOK){
      cout << "La fecha ingresada no es correcta." << endl;
   }
   else{
      cout << "Todo bien uwu" << endl;
   }

	return 0;
}
