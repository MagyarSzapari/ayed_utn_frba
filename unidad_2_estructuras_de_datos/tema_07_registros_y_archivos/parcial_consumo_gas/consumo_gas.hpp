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
   int dia;
   int mes;
   int anio;
};

struct Categoria
{
   int idCat;
   char descrip[50];
   int m3Desde;
   int m3Hasta;
   double valorM3;
};

struct RCategoria
{
   Categoria c;
   int aTot;
   int aAsc;
   int aDes;
};


struct Cliente
{
   int idCli;
   char nombre[100];
   char direccion[200];
   int idCatAnt;
   int lecturaAnterior;
   unsigned char consumos[36];
};

struct Medicion
{
   int idCli;
   int lecturaActual;
   Fecha fecha;
};

struct Consumo
{
   int mmaaaa;
   int m3Consumidos;
};

#endif
