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
   int idCli;
   char mov;  // 'E' o 'S'
   int hora; // hhmm
};


struct Caja
{
   Queue<int> q;
   int cantCliEsp;
   int acumCliEsp;
   int cantTO;
   int acumTP;
};

struct Simu
{
   Map<int,Caja> mCajas;
   Map<int,int> mCliCaja;
};


#endif
