#ifndef _TADTerna
#define _TADTerna

#include <iostream>
using namespace std;

struct Terna{
   int a;
   int b;
   int c;
};

Terna terna(int a, int b, int c){
   return {a, b, c};
}

bool ternaEsNula(Terna t){
   return(t.a == 0  &&  t.b == 0  &&  t.c == 0);
}

int ternaObtenerMenor(Terna t){
   int a = t.a, b = t.b, c = t.c;
   int retornar = c;

   if(a < b  &&  a < c){
      retornar = a;
   }
   else if(b < a  &&  b < c){
      retornar = b;
   }

   return retornar;
}

int ternaObtenerMayor(Terna t){
   int a = t.a, b = t.b, c = t.c;
   int retornar = c;

   if(a > b  &&  a > c){
      retornar = a;
   }
   else if(b > a  &&  b > c){
      retornar = b;
   }

   return retornar;
}

int ternaObtenerMedio(Terna t){
   int a = t.a, b = t.b, c = t.c;
   int retornar = c;

   if((a > b  &&  a < c)  ||  (a < b  &&  a > c)){
      retornar = a;
   }
   else if((b > a  &&  b < c)  ||  (b < a  &&  b > c)){
      retornar = b;
   }

   return retornar;
}

#endif
