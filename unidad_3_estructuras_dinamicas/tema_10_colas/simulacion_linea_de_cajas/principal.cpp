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
#include "simulacion_cajas.hpp"
using namespace std;


//void simulacion(int n)
//{
//   Map<int,int> mCliCaja = ...
//   Map<int,Caja> mCajas = ...
//}
//
//int main()
//{
//   simulacion(3);
//   simulacion(4);
//   simulacion(7);
//   simulacion(8);
//   simulacion(10);
//   return 0;
//}

//
//void simulacion(int n)
//{
//   Map<int,int> mCliCaja = ...
//   Map<int,Caja> mCajas = ...
//}

void crearEstructuraSimulacion(Map<int,Simu>& mSimu,int n)
{
   Simu s = {map<int,Caja>(),map<int,int>()};
   for(int i=1;i<=n;i++)
   {
      Caja c = {queue<int>(),0,0,0,0};
      mapPut<int,Caja>(s.mCajas,i,c);
   }

   mapPut<int,Simu>(mSimu,n,s);
}

int buscarCajaConMenorCola(Simu* s)
{
   return 0;
}

void procesarMovimiento(Mov m,Simu* s)
{
   if( m.mov=='E' )
   {
      // veo en que caja encolar y encolo
      int nroCaja = buscarCajaConMenorCola(s);
      Caja* c = mapGet<int,Caja>(s->mCajas,nroCaja);
      queueEnqueue<int>(c->q,m.hora);
      c->acumCliEsp++;

      // vinculo cliente y caja para luego removerlo
      mapPut<int,int>(s->mCliCaja,m.idCli,nroCaja);
   }
   else
   {

   }

}

void procesarMovEnSimulaciones(Mov m,Map<int,Simu>& mSimu)
{
   mapReset<int,Simu>(mSimu);
   while( mapHasNext<int,Simu>(mSimu) )
   {
      Simu* s = mapNextValue<int,Simu>(mSimu);
      procesarMovimiento(m,s);
   }
}

void mostrarTablaResultados(Map<int,Simu> mSimu)
{

}

int main()
{
   // key = cuantas cajas
   // value = estructura Simu, para simular...
   Map<int,Simu> mSimu = map<int,Simu>();
   crearEstructuraSimulacion(mSimu,3);
   crearEstructuraSimulacion(mSimu,4);
   crearEstructuraSimulacion(mSimu,7);
   crearEstructuraSimulacion(mSimu,8);
   crearEstructuraSimulacion(mSimu,10);

   FILE* f = fopen("MOVIMIENTOS.dat","r+b");

   Mov m = read<Mov>(f);
   while( !feof(f) )
   {
      procesarMovEnSimulaciones(m,mSimu);
      m = read<Mov>(f);
   }

   mostrarTablaResultados(mSimu);

   fclose(f);
   return 0;
}




