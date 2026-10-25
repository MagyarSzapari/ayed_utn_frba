#ifndef _TCOLL_T_
#define _TCOLL_T_

#include <iostream>
#include "../funciones/strings.hpp"

using namespace std;

template<typename T>
struct Coll // estructura base del coll
{
   string s;
   char sep;
   int tokenPos = 0;
};

template<typename T>
Coll<T> coll(char sep) // para crear el coll se hace Coll<tipodedato> s = Coll<tipodedato>("separador");
{
   Coll<T> c;
   c.s = "";
   return c;
}

template<typename T>
Coll<T> coll() // crear coll con separador harcodeado
{
   Coll<T> c;
   c.s = "";
   c.sep = '|';
   return c;
}

template<typename T>
int collSize(Coll<T> c) // dice cuantos elementos tiene el coll
{
   return tokenCount(c.s,c.sep);
}

template<typename T>
void collRemoveAll(Coll<T>& c) // quita todos los elementos del coll
{
  c.s = "";
}

template<typename T>
void collRemoveAt(Coll<T>& c, int p) // Remueve de la colección c el elemento ubicado en la posición p(la posicion inicial es 0).
{
   removeTokenAt(c.s,c.sep,p);
}

template<typename T>
int collAdd(Coll<T>& c,T t,string tToString(T)) // agrega un elemento al final del coll, se utiliza collAdd<tipodedato>(nombredelcoll,dato,funciondeconverionastring);
{
   addToken(c.s,c.sep,tToString(t));
   return tokenCount(c.s,c.sep)-1;
}

template <typename T>
void collSetAt(Coll<T>& c,T t,int p,string tToString(T)) // reemplaza al elemento de la posicion p el nuevo elemento t
{
   string q = tToString(t);
   setTokenAt(c.s,c.sep,q,p);
}

template <typename T>
T collGetAt(Coll<T> c,int p,T tFromString(string)) // retorna el elemento de la posicion p del coll
{
   string h = getTokenAt(c.s,c.sep,p);
   T t= tFromString(h);
   return t;
}

template <typename T, typename K>
int collFind(Coll<T> c,K k,int cmpTK(T,K),T tFromString(string)) // retorna el lugar de la primer coincidencia con k, si no hay coincidencia devuelve -1
{
   for (int i=0; i != tokenCount(c.s,c.sep); i++)
   {
     T t = tFromString(getTokenAt(c.s,c.sep,i));
      if (cmpTK(t,k) == 0)
      {
         return i;
      }
   }
   return -1;
}

template <typename T>
void collSort(Coll<T>& c,int cmpTT(T,T),T tFromString(string),string tToString(T)) // ordena a los elementos del coll segun el criterio de comparacion
{
   int n = tokenCount(c.s, c.sep)-1;
     for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
           T t1 = collGetAt(c, j, tFromString);
           T t2 = collGetAt(c, j+1, tFromString);
           if(cmpTT(t1, t2)<0){
              setTokenAt(c.s, c.sep, tToString(t1), j+1);
              setTokenAt(c.s, c.sep, tToString(t2), j);
           }
        }
     }
}

template<typename T>
bool collHasNext(Coll<T>& c) // devuelve un true si el coll tiene algun elemento despues
{
   bool vacio = false;
    if (c.tokenPos<tokenCount(c.s,c.sep))
    {
      vacio = true;
    }
    return vacio;
}

template<typename T>
T collNext(Coll<T>& c,T tFromString(string)) // devuelve el siguiente elemento del coll
{
   T t = tFromString(getTokenAt(c.s,c.sep,c.tokenPos)) ;
   c.tokenPos++;
   return t;
}

template<typename T>
T collNext(Coll<T>& c,bool& endOfColl,T tFromString(string)) // retorna el siguiente elemento del coll indicando si se termina el coll
{
   endOfColl = false;
     T t;
     t = tFromString (getTokenAt(c.s, c.sep, c.tokenPos));
     if (!collHasNext(c)) {
         endOfColl = true;
     }
     c.tokenPos ++;
     return t;
}

template<typename T>
void collReset(Coll<T>& c) // devuelve la posicion original del coll
{
   c.tokenPos = 0;
}

template<typename T>
string collToString(Coll<T> c)
{
   return c.sep+c.s;
}

template<typename T>
Coll<T> collFromString(string s)
{
   Coll<T> c;
   c.sep=s[0];
   c.s=substring(s,1);
   return c;
}


#endif
