/*
 * LucasPelao.hpp
 *
 *  Created on: 04/11/2022
 *      Author: Usuario
 */

#ifndef _MAINHPP
#define _MAINHPP
#include <iostream>
#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/tads/Coll.hpp"
using namespace std;

struct Mov{
   int caja;
   char mov;
   int hora;
};

struct Caja{
   int caja;
   Queue<Mov> cola;
   int acumEspera;
   int contCompras;
   int hUltimo;
   int tOscioso;
   int colaMax;
};

string movToString(Mov x){
   char sep = 1;
   string sCaja=to_string(x.caja);
   string sMov=string(1,x.mov);
   string sHora=to_string(x.hora);
   return sCaja+sep+sMov+sep+sHora;
}

Mov movFromString(string s){
   char sep = 1;
   Mov x;
   string t0 = getTokenAt(s,sep,0);
   x.caja=stoi(t0);
   string t1 = getTokenAt(s,sep,1);
   x.mov=(char)t1[0];
   string t2 = getTokenAt(s,sep,2);
   x.hora=stoi(t2);
   return x;
}

Mov mov(int caja,char mov,int hora){
   Mov a;
   a.caja = caja;
   a.mov = mov;
   a.hora = hora;
   return a;
}

Caja cajaf(int caja,Queue<Mov> cola,int acumEspera,int contCompras,int hUltimo,int tOscioso,int colaMax){
   Caja b;
   b.caja = caja;
   b.cola = cola;
   b.acumEspera = acumEspera;
   b.contCompras = contCompras;
   b.hUltimo = hUltimo;
   b.tOscioso = tOscioso;
   b.colaMax = colaMax;
   return b;
}

#endif
