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
#include "consumo_gas.hpp"
using namespace std;

int fechaCmp(Fecha a,Fecha b)
{
   return 0;
}


Array<Consumo> decodeConsumo(unsigned char acumulado[])
{
   return {};
}

unsigned char* encodeConsumo(Array<Consumo> arr)
{
   return NULL;
}

int calcularConsumoAnual(Array<Consumo> arr,int actual)
{
   return 0;
}

Map<int,Categoria> subirCategorias()
{
   return {};
}

void mostrarListado(Map<int,Categoria> mCat)
{
}

Cliente buscarCliente(int idCli,FILE* fCli,bool& enc)
{
   return {};
}

Categoria* buscarCategoria(int consAnual,Map<int,Categoria> mCat)
{
   return NULL;
}

int determinarVariacionCategoria(Categoria* rcAnt,Categoria* rcActual)
{
   return 0;
}

bool procesarError(Medicion m,FILE* fCli,FILE* fErr,Cliente c,bool enc)
{
   bool hayError = false;

   // busco el cliente
   if( !enc )
   {
      // error tipo 1
      ErrMed em = {1,m};
      write<ErrMed>(fErr,em);
      hayError = true;
   }
   else
   {
      if( fechaCmp(m.fecha,c.fechaMedAnt)<=0 )
      {
         // error tipo 2
         ErrMed em = {2,m};
         write<ErrMed>(fErr,em);
         hayError = true;
      }
   }

   return hayError;
}

void procesarEstad(Cliente c,Medicion m,FILE* fCli,Map<int,Categoria> mCat,Map<int,RCodigoPostal>& mCod,FILE* fErr)
{
   RCodigoPostal* rcp = mapGet<int,RCodigoPostal>(mCod,c.codigoPostal);
   if( rcp==NULL )
   {
      RCodigoPostal cp = {c.codigoPostal,0,0,0};
      rcp = mapPut<int,RCodigoPostal>(mCod,c.codigoPostal,cp);
   }

   // calculo el consumo anual
   Array<Consumo> aCons = decodeConsumo(c.consumos);
   int consAnual = calcularConsumoAnual(aCons,m.lecturaActual);

   // busco en que categoria cae, segun cual haya sido su consumo anual
   Categoria* rcActual = buscarCategoria(consAnual,mCat);
   Categoria* rcAnt = mapGet<int,Categoria>(mCat,c.idCatAnt);

   // determino si subio o bajo de categoria
   int x = determinarVariacionCategoria(rcAnt,rcActual);

   // actualizo el contador de TODOS los clientes
   rcp->aTot++;
   if( x>0 )
   {
      rcp->aAsc++;
   }
   else
   {
      if( x<0 )
      {
         rcp->aDes++;
      }
   }

}

void procesar(Medicion m,FILE* fCli,Map<int,Categoria> mCat,Map<int,RCodigoPostal>& mCod,FILE* fErr)
{
   bool enc;
   Cliente c = buscarCliente(m.idCli,fCli,enc);

   if( !procesarError(m,fCli,fErr,c,enc) )
   {
      procesarEstad(c,m,fCli,mCat,mCod,fErr);
   }
}

int main()
{
   Map<int,Categoria> mCat = subirCategorias();
   Map<int,RCodigoPostal> mCod = map<int,RCodigoPostal>();

   FILE* fErr = fopen("ERRMED.dat","w+b");
   FILE* fCli = fopen("CLIENTES.dat","r+b");
   FILE* fMed = fopen("MEDICIONES.dat","r+b");

   Medicion m = read<Medicion>(fMed);
   while( !feof(fMed) )
   {
      procesar(m,fCli,mCat,mCod,fErr);
      m = read<Medicion>(fMed);
   }

   mostrarListado(mCat);

   fclose(fMed);
   fclose(fCli);
   fclose(fErr);
   return 0;
}
