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

struct Fecha
{
   int d;
   int m;
   int a;
};

struct Socio
{
   int idSocio;
   char nombre[50];
   int idSocioRef;
   Fecha fechaIngreso;
   double totalVentasAcumuladas;
   double liquidacionAnterior;
   double liquidacionesAcumuladas;
};

struct RSocio
{
   Socio s;
   double acumVTA;
   double acumCOM;
};

struct Venta
{
   int idSocio;
   int idProducto;
   char observ[100];
   Fecha fecha;
   double importe;
};

Fecha fecha(int d,int m,int a)
{
   Fecha b;
   b.d = d;
   b.m = m;
   b.a = a;
   return b;
}

Socio socio(int idSocio,string nombre,int idSocioRef,Fecha fechaIngreso,double totalVentasAcumuladas,double liquidacionAnterior,double liquidacionesAcumuladas)
{
   Socio a;
   a.idSocio = idSocio;
   strcpy(a.nombre,nombre.c_str());
   a.idSocioRef = idSocioRef;
   a.fechaIngreso = fechaIngreso;
   a.totalVentasAcumuladas = totalVentasAcumuladas;
   a.liquidacionAnterior = liquidacionAnterior;
   a.liquidacionesAcumuladas = liquidacionesAcumuladas;
   return a;
}

RSocio rSocio(Socio s,double acumVTA,double acumCOM)
{
   RSocio b;
   b.s = s;
   b.acumVTA = acumVTA;
   b.acumCOM = acumCOM;
   return b;
}

Venta venta(int idSocio,int idProducto,string observ,Fecha fecha,double importe)
{
   Venta a;
   a.idSocio = idSocio;
   a.idProducto = idProducto;
   strcpy(a.observ,observ.c_str());
   a.fecha = fecha;
   a.importe = importe;
   return a;
}

#endif
