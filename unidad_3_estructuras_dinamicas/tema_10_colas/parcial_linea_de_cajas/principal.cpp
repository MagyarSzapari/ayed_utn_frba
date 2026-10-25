//============================================================================
// Name        : cpp.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/funciones/files.hpp"
#include "biblioteca/tads/Array.hpp"
#include "biblioteca/tads/Map.hpp"
#include "biblioteca/tads/List.hpp"
#include "biblioteca/tads/Stack.hpp"
#include "biblioteca/tads/Queue.hpp"
#include "biblioteca/tads/Coll.hpp"
#include "linea_de_cajas.hpp"
using namespace std;

// retorna la diferencia en minutos entre h1 y h2
int horaDiff(int h1,int h2)
{
   return 0;
}

void procesarMovimiento(Mov m,Map<int,RCaja>& mCajas)
{
   RCaja* rc = mapGet<int,RCaja>(mCajas,m.caja);
   if( rc==NULL )
   {
      rc = mapPut<int,RCaja>(mCajas,m.caja,rCaja(queue<int>(),0,0,0,0,0));
   }

   if( m.mov=='E' )
   {
      // punto 1
      queueEnqueue<int>(rc->q,m.hora);

      // punto 2
      if( queueSize(rc->q)==1 )
      {
         int diff = horaDiff(m.hora,rc->cto);
         rc->sumTO+=diff;
      }

      // punto 3
      if( queueSize(rc->q)>rc->maxTC )
      {
         rc->maxTC = queueSize(rc->q);
      }
   }
   else
   {
      // punto 1
      int he = queueDequeue<int>(rc->q);
      int hs = m.hora;
      int diff = horaDiff(he,hs);
      rc->sumTE+=diff;
      rc->contPE++;

      // punto 2
      if( queueSize(rc->q)==0 )
      {
         rc->cto = m.hora;
      }
   }
}

void punto1(Map<int,RCaja> mCajas)
{
   mapReset<int,RCaja>(mCajas);
   while( mapHasNext<int,RCaja>(mCajas) )
   {
      int caja = mapNextKey<int,RCaja>(mCajas);
      RCaja* rc = mapGet<int,RCaja>(mCajas,caja);
      int prom = rc->sumTE/rc->contPE;
      cout << caja << prom << endl;
   }
}
void punto2(Map<int,RCaja> mCajas)
{
}
void punto3(Map<int,RCaja> mCajas)
{
}


int main()
{
   Map<int,RCaja> mCajas = map<int,RCaja>();
   FILE* f = fopen("MOVIMIENTOS.dat","r+b");

   Mov m = read<Mov>(f);
   while( !feof(f) )
   {
      procesarMovimiento(m,mCajas);
      m = read<Mov>(f);
   }

   punto1(mCajas);
   punto2(mCajas);
   punto3(mCajas);

   fclose(f);
   return 0;
}
