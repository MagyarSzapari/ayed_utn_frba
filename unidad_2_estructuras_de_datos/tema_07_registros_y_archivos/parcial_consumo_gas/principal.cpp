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

Map<int,RCategoria> subirCategorias()
{
   return {};
}

void mostrarListado(Map<int,RCategoria> mCat)
{
}

Cliente buscarCliente(int idCli,FILE* fCli)
{
   return {};
}

RCategoria* buscarCategoria(int consAnual,Map<int,RCategoria> mCat)
{
   return NULL;
}

int determinarVariacionCategoria(RCategoria* rcAnt,RCategoria* rcActual)
{
   return 0;
}

void imprimirFactura(Medicion m,Cliente c,RCategoria* rcActual,RCategoria* rcAnt)
{
   // nombre y direccion
   string nom = c.nombre;
   string dir = c.direccion;
   cout << nom << dir << endl;

   // categoria actual
   int cons = m.lecturaActual-c.lecturaAnterior;
   int vm3Act = cons*rcActual->c.valorM3;
   int vm3Ant = cons*rcAnt->c.valorM3;
   cout << rcActual->c.idCat << cons << vm3Act << endl;
   cout << vm3Act*cons << endl;

   if( vm3Act<vm3Ant )
   {
      cout << "Ahorraste: ";
      cout << abs(vm3Act-vm3Ant) << endl;
   }
   else
   {
      if( vm3Act>vm3Ant)
      {
         cout << "Hubieras ahorrado: ";
         cout << abs(vm3Act-vm3Ant) << endl;
      }
   }
}

void procesar(Medicion m,FILE* fCli,Map<int,RCategoria>& mCat)
{
   // busco el cliente
   Cliente c = buscarCliente(m.idCli,fCli);

   // calculo el consumo anual
   Array<Consumo> aCons = decodeConsumo(c.consumos);
   int consAnual = calcularConsumoAnual(aCons,m.lecturaActual);

   // busco en que categoria cae, segun cual haya sido su consumo anual
   RCategoria* rcActual = buscarCategoria(consAnual,mCat);
   RCategoria* rcAnt = mapGet<int,RCategoria>(mCat,c.idCatAnt);

   // determino si subio o bajo de categoria
   int x = determinarVariacionCategoria(rcAnt,rcActual);

   // actualizo el contador de TODOS los clientes
   rcActual->aTot++;
   if( x>0 )
   {
      rcActual->aAsc++;
   }
   else
   {
      if( x<0 )
      {
         rcActual->aDes++;
      }
   }

   imprimirFactura(m,c,rcActual,rcAnt);
}

int main()
{
   Map<int,RCategoria> mCat = subirCategorias();
   FILE* fCli = fopen("CLIENTES.dat","r+b");
   FILE* fMed = fopen("MEDICIONES.dat","r+b");

   Medicion m = read<Medicion>(fMed);
   while( !feof(fMed) )
   {
      procesar(m,fCli,mCat);
      m = read<Medicion>(fMed);
   }

   mostrarListado(mCat);

   fclose(fMed);
   fclose(fCli);
   return 0;
}
