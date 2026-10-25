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
#include "socios_comisiones.hpp"
using namespace std;

Map<int,RSocio> subirSocios()
{
   return {};
}

void punto1(Map<int,RSocio> mSocios)
{
}

void punto2(Map<int,RSocio> mSocios)
{
}

void procesarVenta(Venta v,Map<int,RSocio>& mSocios)
{
   // PROGRAMAR
}

int main()
{
   Map<int,RSocio> mSocios = subirSocios();
   FILE* f = fopen("VENTAS.dat","r+b");

   Venta v = read<Venta>(f);
   while( !feof(f) )
   {
      procesarVenta(v,mSocios);
      v = read<Venta>(f);
   }

   punto1(mSocios);
   punto2(mSocios);

   fclose(f);
   return 0;
}
