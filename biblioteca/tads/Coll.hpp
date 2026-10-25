#ifndef _TCOLL_T_
#define _TCOLL_T_

#include <iostream>
#include "../funciones/strings.hpp"

using namespace std;

template<typename T>
struct Coll
{
   string s;
   char sep;
   int index = 0;
};

template<typename T>
Coll<T> coll(char sep)
{
   Coll<T> c;
   c.s="";
   c.sep = sep;
   return c;
}

template<typename T>
Coll<T> coll()
{
   Coll<T> c;
   c.s = "";
   c.sep = '|';
   return c;
}

template<typename T>
int collSize(Coll<T> c)
{
   int a = tokenCount(c.s,c.sep);
   return a;
}

template<typename T>
void collRemoveAll(Coll<T>& c)
{  c.s = "";
}

template<typename T>
void collRemoveAt(Coll<T>& c, int p)
{
   removeTokenAt(c.s,c.sep,p);
}

template<typename T>
int collAdd(Coll<T>& c,T t,string tToString(T))
{
   addToken(c.s,c.sep,tToString(t));
   return tokenCount(c.s,c.sep)-1;
}

template <typename T>
void collSetAt(Coll<T>& c,T t,int p,string tToString(T))
{
   setTokenAt(c.s,c.sep,tToString(t),p);
}

template <typename T>
T collGetAt(Coll<T> c,int p,T tFromString(string))
{
   T t;
   t = getTokenAt(c.s,c.sep,p);
   return t;
}

template <typename T, typename K>
int collFind(Coll<T> c,K k,int cmpTK(T,K),T tFromString(string))
{
   int a = tokenCount(c.s,c.sep);
   int O = 0;
   for (int i =0; i<=a; i++){
      if (cmpTK == 0){
        O = i;
      }
   }
   return O;
}

template <typename T>
void collSort(Coll<T>& c,int cmpTT(T,T),T tFromString(string),string tToString(T))
{
 for (int i = 0; i < collSize<T>(c) ; i++)
 {
    for (int j= i+1 ; j < collSize<T>(c); j++)
    {
      T cmp1 = collGetAt<T>(c, i, tFromString);
      T cmp2 = collGetAt<T>(c, j, tFromString);
      if (cmpTT(cmp1,cmp2)<0)
      {
         collSetAt<T>(c, cmp2, j, tToString);
         collSetAt<T>(c, cmp1, i, tToString);
      }
    }
 }
}

template<typename T>
bool collHasNext(Coll<T> c)
{
  bool a = false;
  if (c.index<tokenCount(c.s, c.sep)){
     a = true;
  }
   return a;
}

template<typename T>
T collNext(Coll<T>& c,T tFromString(string))
{
   T t;
   if (collHasNext(c) == true){
      string a = getTokenAt (c.s, c.sep, c.index);
      t = tFromString(a);
      c.index +=1;
   }
   return t;
}

template<typename T>
T collNext(Coll<T>& c,bool& endOfColl,T tFromString(string))
{
   T t;
   if (collHasNext(c)==true){
      endOfColl = true;
   }
   else {
      endOfColl = false;
   }
   if (endOfColl(c)== true){
      string a = getTokenAt (c.s, c.sep, c.index);
      t = tFromString(a);
      c.index +=1;
   }

   return t;
}

template<typename T>
void collReset(Coll<T>& c)
{
   c.index = 0;
}

#endif
