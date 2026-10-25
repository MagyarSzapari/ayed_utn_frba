#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int length(string s) // cuenta la cantidad de caracteres de la cadena
{
   int i = 0;
      while( s[i]!='\0' )
      {
         i = i+1;
      }
      return i;
}

int charCount(string s, char c) // cuenta cuantas veces aparece c caracter en la cadena
{
   int j = 0;
   int i = 0;
   while( s[i]!='\0' )
   {
      i = i+1;
      if( s[i]==c )
      {
         j++;
      }
   }
   return j;
}

string substring(string s, int d, int h) // Retorna la subcadena de [s;h)
{
   int i = 0;

      string t = "";

      while( s[i]!='\0' )
      {
         while( i>=d and i<h )
         {
            t = t+s[i];
            i++;
         }
         i++;
      }
      return t;
}

string substring(string s, int d) // Retorna la subcadena de s comprendida entre la posición d y el final de la cadena.

{
   int i = 0;

   string t = "";

   while( s[i]!='\0' )
   {
      if( d<=i )
      {
         t = t+s[i];
      }
      i++;
   }

   return t;
}

string stringInvert(string i) //invierte la cadena
{
 string res = "";
 for (int j = length (i)-1 ; j>=0; j--)
 {
    char g = i[j];
    res = res + g;
 }
 return res;
}

double fact (int n) // deuelve el factorial de n
{
   double f = 1;
   for (int i = 2; i<=n;i++)
   {
      f = f*i;
   }
   return f;
}

double fib (int n) // devuelve el numero fibonacci de n
{
   double ret;
   if (n>=2)
   {
     ret = fib(n-1) + fib(n-2);
   }
   else
   {
     ret = 1;
   }
   return ret;
}

int indexOf(string s, char c, int offSet) // Retorna la posición que ocupa la primera ocurrencia del carácter c dentro de la cadena s.
{
   int i = 0;
   i = i+offSet;
   while( s[i]!=c )
   {
      i++;
   }

   return i;
}

int indexOf(string s, string toSearch) // Retorna la posición que ocupa la primera ocurrencia de toSearch dentro de la cadena s.

   {
      string text="";
      int x = length(s);
      int a = length(toSearch);
      int i=0;
      int k=0;
      int b=0;
      int r=0;


      while(i<x)
      {

         while(s[i]==toSearch[k])
         {
          text=text+s[i];

          if(text==toSearch){
             b=i;

             r = b-a+1;
             return r;

          }
             k++;
             i++;

         }

         k=0;
         text="";
         i++;

      }
      return 0;
   }

int indexOf(string s, string toSearch, int offset) // Retorna la posición que ocupa la primera ocurrencia de toSearch dentro de la cadena s , descartando los primeros offeset caracteres (desplazamiento inicial).

{
      string text="";
      int x = length(s);
      int a = length(toSearch);
      int i= offset;
      int k=0;
      int b=0;
      int r=0;


      while(i<x)
      {

         while(s[i]==toSearch[k])
         {
          text=text+s[i];

          if(text==toSearch){
             b=i;

             r = b-a+1;
             return r;

          }
             k++;
             i++;

         }

         k=0;
         text="";
         i++;

      }
      return 0;
   }

int lastIndexOf(string s, char c) // Retorna la posición de la última ocurrencia del carácterc dentro de s Parámetros
{
   int j=0;
   int k=0;

             for( int i=0;s[i]!='\0';i++ )
             {
               j++;
               if(s[j]==c)
               {
                  k=j;
               }
             }

      return k;
}

int indexOfN(string s, char c, int n) // Retorna la posición de la n-ésima ocurrencia dec dentro de s.
{
 int veces = 0;
 int a = 0;
 while(s[a] != '\0' and veces != n)
 {
    a++;
   if(s[a]==c){
    veces++;
        }
  }
   return a;
}

int charToInt(char c) // transforma un char a un int
{
    int ret;
    if(c>='0' && c<='9'){
        ret = c-48;
    }else{
        if(c>= 'A' && c<= 'Z')
        {
            ret = c-65+10;
        }else
        {
            ret = c - 'a'+10;
        }
    }
   return ret;
}

char intToChar(int i) // transforma un int a un char
{
   if (0<=i && i<=9)
   {
      i= i + 48;
   }
   else
   {
   if (10 <= i && i <= 35)
   {
      i = i -10 +65;
   }
   }
   return i;
}

int getDigit(int n, int i) // Retorna el i-ésimo dígito del valor de n (de derecha a izquierda).
{
  i = i -1;
  int aux = n;
  int k = 0;
  while (aux>0 && k<i)
  {
     aux = aux/10;
     k++;
  }
   aux = aux%10;
   n = aux;
   return n;
}

int digitCount(int n) // cuenta la cantidad de digitos
{
  int i=0;
  while (n>0)
  {
     n = n/10;
     i++;
  }
   return i;
}

string intToString(int i) // toma el valor int y devuelve un string igual
{
   int x =0, cant = digitCount(i);

   string s = "";
   while ((cant*i) > 0)
   {
      x = i%10;
      char h = intToChar (x);
      s = s + h;
      i = i/10;
      cant--;
    }
   s = stringInvert (s);
   return s;
}

int stringToInt(string s, int b) // devuelve el mismo numero pero cambiado a su vercion entera en base b
{
   int nro = 0, i =0, j= length (s)-1, k=0, valor = 0, base = 1;
   while (s[i] != '\0')
   {
      valor = charToInt(char (s[i]));
      k = j;
      while (k>0)
      {
         base = base*b;
         k--;
      }
      nro = nro + (valor *base);
      base = 1;
      i++;
      j--;
   }
   return nro;
}

int stringToInt(string s) // devuelve el numero en base 10
{
   int nro = 0, i =0, j= length (s)-1, k=0, valor = 0, base = 1, b = 10;
      while (s[i] != '\0')
      {
         valor = charToInt(char (s[i]));
         k = j;
         while (k>0)
         {
            base = base*b;
            k--;
         }
         nro = nro + (valor *base);
         base = 1;
         i++;
         j--;
      }
      return nro;
}

string charToString(char c) // toma un char y te devuelve un string igual
{
  string salida = "";
  salida = salida + c;
   return salida;
}

char stringToChar(string s) // toma un string de 1 caracter de largo y te devuelve un char identico
{
 int f = s[0];
 char b = f;
   return b;
}

string stringToString(string s) // toma el string y devuelve otro igual
{
  string copia = s;
   return copia;
}

string doubleToString(double d) // toma un valor doble y te devuelve un string igual
{
   int b = 0,aux = 0;
   double c = 1,k1 = 0;
   char p = 46;
     b = d;
     string a1 = intToString(b);
     string a2 = "";

     a1 = a1+p;

     k1 = d-b;

     while( c<8 )
     {
        k1 = k1*10;
        aux = k1;   //ENTERO
        c++;

     }
     a2 = intToString(aux);

     a1 = a1+a2;

     return a1;
}

double stringToDouble(string s) // toma un valor string y te devuelve un double
{
   string a1 = "";
      string a2 = "";
      char k = 0;
      int d1 = 0;
      double d2 = 0,dt = 0;
      int j1 = 0,j2 = 0;
      int l = 0,m = 1;

      for( j1 = 0; s[j1]!='.'; j1++ )
      {
         k = s[j1];
         a1 = a1+k;
      }

      for( j1++; s[j1]!='\0'; j1++ )
      {
         k = s[j1];
         a2 = a2+k;
      }
      l = length(a2);

      while( j2<l )
      {
         m = m*10;
         j2++;
      }

      d1 = stringToInt(a1);
      d2 = stringToInt(a2);

      d2 = d2/m;
      dt = d1+d2;
      return dt;
}

bool isEmpty(string s) // retorna un true si la cadena esta vacia es decir ""
{
   int x = length(s);
   if (x == 0)
   {
      return true;
   }
   else
   {
      return false;
   }
}

bool startsWith(string s, string x) // retorna true si la cadena x es igual a la s pero termina antes
{
  int larg = length (x),g=1,h=1,i=0;
   while (s[g] == x[h] && i!=larg)
   {
     i++,g++,h++;
   }
   if ((s[g-1] == x[h-1]) && (x[h] == '\0'))
   {
      return true;
   }
   else
   {
      return false;
   }
}

bool endsWith(string s, string x) // retorna true si la cadena x termina igual a el ultimo tramo de la s
{
 int l1= length(s)-1 , l2 = length(x)-1;
 bool q;
 if (s[l1] == x[l2])
 {
   while ((s[l1] == x[l2]) && ((l1-1) * (l2-1) !=0))
   {
      l1--,l2--;
   }
   if (s[l1] == x[l2])
   {
      q = true;
   }
   else
   {
      q = false;
   }

 }
 else
 {
    q = false;
 }

   return q;
}

bool contains(string s, char c) // retorna true si el caracter c esta dentro de la cadena s
{
 bool j;
 int i = 0;
  while ((s[i] != '\0') and (s[i] != c))
  {
     i++;
  }
  if (s[i] == c)
  {
     j = true;
  }
  else
  {
     j = false;
  }
  return j;
 }

string replace(string s, char oldChar, char newChar) // reemplaza en la cadena s todos los caracteres viejos por el nuevo
{
  int i = 0;
  while (s[i] != '\0' )
  {
     i++;
     if (s[i] == oldChar)
     {
        s[i]= newChar;
     }
  }
   return s;
}

string insertAt(string s, int pos, char c) // agrega un caracter (sin eliminar el de la ubicacion) en una pos x
{
 int j=0, i=pos, fin = length (s);
 string old = "", nw = "";
  while (i != fin)
  {
     nw = nw + s[i];
     i++;
  }
  while (j != pos)
  {
     old = old + s[j];
     j++;
  }
  s = "" + old + c + nw;

   return s;
}

string removeAt(string s, int pos) // elimina un caracter en la posicion x (sin dejar vacio)
{
   int j=0, i=pos, fin = length (s);
    string old = "", nw = "";
     while (i != fin)
     {
        nw = nw + s[i];
        i++;
     }
     while (j != pos-1)
     {
        old = old + s[j];
        j++;
     }
     s = "" + old + nw;

      return s;
}

string ltrim(string s) // recorta los espacios por izquierda
{
 int larg = length (s), k = 0;
 string nw = "";
 char spa = 32;
  if (s[k] == spa )
  {
   while (s[k] == spa)
   {
      k++;
   }
   while (k < larg)
   {
      nw = nw + s[k];
      k++;
   }
  }
  else
  {
     nw = s;
  }
   return nw;
}

string rtrim(string s) // recorta los espacios por derecha (si cuando escribe usa 2 espacios seguidos se jode por boludo)
{
  int larg = length (s);
  string nw = "";
  char spa = 32;
if (s[larg-1] == spa)
{
 if (s[larg-2] == spa)
 {
  while (s[larg-1] == spa)
  {
   larg--;
  }
  while (larg > 0)
  {
     nw = nw + s[larg-1];
     larg--;
  }
  nw = stringInvert (nw);
 }
 else
 {
    nw = s;
 }
}
else
{
   nw = s;
}
  return nw;
}

string trim(string s) // recorta si hay mas de 2 espacios por derecha o izquierda
{
 string x = rtrim(s);
 string y = ltrim(x);
 return y;
}

string replicate(char c, int n) // replica el caracter c n veces
{
  string reply = "";
  int i = 0;
  while (i != n)
  {
     reply = reply + c;
     i++;
  }
   return reply;
}

string spaces(int n) // replica el espacio n veces
{
  string spa = "";
  char espacio = 32;
  int i=0;
  while (i != n)
  {
     spa = spa + espacio;
     i++;
  }
   return spa;
}

string lpad(string s, int n, char c) // rellena con c (si es necesario) a la izquierda y pone la palabra
{
  string cad = "";
  int larg = length (s);
  int dif = n - larg;
  while (dif != 0)
  {
   cad = cad + c;
   dif--;
  }
   cad = cad + s;

   return cad;
}

string rpad(string s, int n, char c) // rellena con c (si es necesario) a la derecha y primero la palabra
{
 string cad = "";
 int largS = length (s), dif = n-largS ;
  while (dif != 0)
  {
     cad = cad + c;
     dif--;
  }
  cad = s + cad;

   return cad;
}

string cpad(string s, int n, char c) // rellena con c (por igual en ambas direcciones) y la palabra en el centro
{
 string cad = "";
 int larg = length (s), dif = (n - larg)/2;
 while (dif != 0)
 {
    cad = cad + c;
    dif--;
 }
  cad = cad + s + cad;
   return cad;
}

bool isDigit(char c) // te devuelve un true si el caracter es un digito
{
  int d = c-48;
  if ((-1 < d) and (d<= 9))
  {
     return true;
  }
  else
  {
   return false;
  }
}

bool isLetter(char c) // te devuelve un true si el caracter es una letra
{
 if (((65<=c) and (c<91)) or ((97<=c)and(c<123)))
 {
    return true;
 }
 else
 {
    return false;
 }
}

bool isUpperCase(char c) // te devuelve un true si el caracter es una letra mayuscula
{
 if ((65<=c) and (c<91))
 {
    return true;
 }
 else
 {
    return false;
 }
}

bool isLowerCase(char c) // te devuelve un true si el caracter es una letra minuscula
{
 if ((97<=c)and(c<123))
  {
     return true;
  }
  else
  {
     return false;
  }
}

char toUpperCase(char c) // si es una letra minuscula la convierte en mayuscula, sino la deja igual
{
  if (isLowerCase(c))
  {
     c = c -32;
  }

  return c;
}

char toLowerCase(char c) // si es una letra mayuscula la convierte en minuscula, sino la deja igual
{
  if (isUpperCase(c))
  {
     c = c +32;
  }
   return c;
}

string toUpperCase(string s) // crea una cadena completamente en mayusculas
{
  char y;
  int i = 0;
  while (s[i] != '\0' )
  {
     i++;
     char t= s[i];
     if (isLowerCase(t))
     {
        y = toUpperCase(t);
        s = replace(s,t,y);
     }
  }
   return s;
}

string toLowerCase(string s) // crea una cadena completamente en minusculas
{
  char y;
  int i = 0;
  while (s[i] != '\0' )
  {
     i++;
     char t= s[i];
     if (isUpperCase(t))
     {
        y = toLowerCase(t);
        s = replace(s,t,y);
     }
  }
   return s;
}

int cmpString(string a, string b)
{
   return a<b?-1:a>b?1:0;
}

int cmpDouble(double a, double b) // compara cual numero es mayor (- si es b, + si es a y 0 si son iguales)
{
   return a-b;
}

#endif
