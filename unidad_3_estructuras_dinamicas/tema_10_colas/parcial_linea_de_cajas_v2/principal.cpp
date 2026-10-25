#ifndef _MAIN
#define _MAIN

#include <iostream>
#include <string>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/funciones/files.hpp"
#include "biblioteca/tads/Array.hpp"
#include "biblioteca/tads/Map.hpp"
#include "biblioteca/tads/List.hpp"
#include "biblioteca/tads/Stack.hpp"
#include "biblioteca/tads/Queue.hpp"
#include "biblioteca/tads/Coll.hpp"
using namespace std;

#include "linea_de_cajas.hpp"

Caja* descubrirCaja(Mov m,Map<int,Caja> mCaja){
   Caja* caja;

   if(!mapContains(mCaja,m.caja)){
    Queue<Mov> fila = queue<Mov>();
    Caja c = cajaf(c.caja,fila,0,0,0,0,0);
    caja = mapPut<int,Caja>(mCaja,c.caja,c);
    return caja;
  }
   else{
     caja = mapGet<int,Caja>(mCaja,m.caja);
     return caja;
   }
}

void encolar(Mov m,Map<int,Caja>& mCaja){
   Caja* x = mapGet<int,Caja>(mCaja,m.caja);
   queueEnqueue(x->cola,m);
}

void procesar1(Caja*& x, Mov s, Mov m){
   int resultado = m.hora-s.hora;
   x->acumEspera += resultado;
   x->contCompras ++;
}

void desencolar(Mov m,Map<int,Caja>& mCaja){
   Caja* x = mapGet<int,Caja>(mCaja,m.caja);
   Mov s = queueDequeue(x->cola);

   procesar1(x,s,m);
}

void procesar2(Mov m, Caja*& c){
 c->tOscioso += (c->hUltimo-m.hora);
}

void procesar3(Caja*& c){
  int s = queueSize(c->cola);
  if (s>c->colaMax){
     c->colaMax = s;
  }
}

void mostrarPunto1(Map<int,Caja> mCaja){
   int i = 1;
   Caja* c = mapGet(mCaja,i);
   while (c != NULL){
      double prom = c->acumEspera / c->contCompras;
      cout << "caja " << + i << "Tiempo promedio de espera: " << + prom <<endl;
      i++;
   }

   cout<< "-------------" <<endl;
}

void mostrarPunto2(Map<int,Caja> mCaja){
   int i = 1;
   Caja* c = mapGet(mCaja,i);
     while (c != NULL){
        cout<< "caja " + i << "Tiempo oscioso: " + c->tOscioso <<endl;
        i++;
     }

     cout<< "-------------" <<endl;
}

void mostrarPunto3(Map<int,Caja> mCaja){
   int i = 1;
   Caja* c = mapGet(mCaja,i);
   while (c != NULL){
    cout<< "caja " + i << "Cola maxima: " + c->colaMax <<endl;
    i++;
  }
}

int main(){

   FILE* f = fopen("MOVIMIENTOS.DAT","r+b");

   Mov m = read<Mov> (f);
   Map<int,Caja> mCaja = map<int,Caja>();

   while(!feof(f)){
      Caja* c =  descubrirCaja(m,mCaja);
      if(m.mov == 'E'){
         encolar(m,mCaja);

         if(queueIsEmpty(c->cola) && c->contCompras !=0){
            procesar2(m,c);
         }
         procesar3(c);

      }
      else  {
         desencolar(m,mCaja);
         c->hUltimo=m.hora;

      }

   }
mostrarPunto1(mCaja);
mostrarPunto2(mCaja);
mostrarPunto3(mCaja);

   return 0 ;
}

#endif
