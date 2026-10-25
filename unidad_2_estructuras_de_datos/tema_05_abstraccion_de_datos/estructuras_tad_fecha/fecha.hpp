#ifndef _TADFecha
#define _TADFecha

#include <iostream>
using namespace std;

struct Fecha{
   int dia;
   int mes;
   int anio;
};

Fecha fecha(int d, int m, int a){
   Fecha f = {d, m, a};

   return f;
}

string fechaToString(Fecha f){

   string strDia = to_string(f.dia);
   string strMes = to_string(f.mes);
   string strAnio = to_string(f.anio);

   return (strDia+"/"+strMes+"/"+strAnio);
}

bool fechaEsAnioBisiesto(Fecha f){
   int a = f.anio;

   return (a%4 == 0  ||  (a%400 == 0  &&  a%100 != 0));
}

int fechaDiasDelMes(Fecha f){
   int m = f.mes;

   int nDias = 31;
   if(m == 4  ||  m == 6  ||  m == 9  ||  m == 11){
      nDias = 30;
   }
   else if(m == 2){
      nDias = 28;
      if(fechaEsAnioBisiesto(f)){
         nDias = 29;
      }
   }

   return nDias;
}

bool fechaValidar(Fecha f){
   int d = f.dia;
   int m = f.mes;
   int a = f.anio;

   bool fOK = false;

   if(m >= 1  &&  m <= 12){
      if(a > 0){
         int nDias = fechaDiasDelMes(f);
         if(d >= 1  &&  d <= nDias){
            fOK = true;
         }
      }
   }

   return fOK;
}

#endif
