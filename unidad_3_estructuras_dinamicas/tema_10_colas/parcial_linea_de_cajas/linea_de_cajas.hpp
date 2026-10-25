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

struct Mov
{
   int caja;
   char mov;
   int hora;
};

struct RCaja
{
   Queue<int> q;
   int contPE;
   int sumTE;
   int sumTO;
   int maxTC;
   int cto;
};

string movToDebug(Mov x)
{
   stringstream sout;
   sout<< "[";
   sout << x.caja;
   sout << ",";
   sout << x.mov;
   sout << ",";
   sout << x.hora;
   sout<< "]";
   return sout.str();
}

string movToDebug(string mssg,Mov x)
{
   stringstream sout;
   sout<< mssg<<":[";
   sout << x.caja;
   sout << ",";
   sout << x.mov;
   sout << ",";
   sout << x.hora;
   sout<< "]";
   return sout.str();
}

Mov mov(int caja,char mov,int hora)
{
   Mov a;
   a.caja = caja;
   a.mov = mov;
   a.hora = hora;
   return a;
}

string rCajaToDebug(RCaja x)
{
   stringstream sout;
   sout<< "[";
   sout << queue<int>ToDebug(x.q);
   sout << ",";
   sout << x.contPE;
   sout << ",";
   sout << x.sumTE;
   sout << ",";
   sout << x.sumTO;
   sout << ",";
   sout << x.maxTC;
   sout << ",";
   sout << x.cto;
   sout<< "]";
   return sout.str();
}

string rCajaToDebug(string mssg,RCaja x)
{
   stringstream sout;
   sout<< mssg<<":[";
   sout << queue<int>ToDebug(x.q);
   sout << ",";
   sout << x.contPE;
   sout << ",";
   sout << x.sumTE;
   sout << ",";
   sout << x.sumTO;
   sout << ",";
   sout << x.maxTC;
   sout << ",";
   sout << x.cto;
   sout<< "]";
   return sout.str();
}

RCaja rCaja(Queue<int> q,int contPE,int sumTE,int sumTO,int maxTC,int cto)
{
   RCaja a;
   a.q = q;
   a.contPE = contPE;
   a.sumTE = sumTE;
   a.sumTO = sumTO;
   a.maxTC = maxTC;
   a.cto = cto;
   return a;
}

#endif
