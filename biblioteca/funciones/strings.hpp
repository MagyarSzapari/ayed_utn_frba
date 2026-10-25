#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>


using namespace std;

int length(string s)
{
   int i=0;
     while (s[i]!='\0'){
        i++ ;
     }

   return i;
}

int charCount(string s,char c)
{
   int i = 0;
   int vcc = 0;
   while (s[i]!='\0')
   {
        if (s[i] == c)
        {
           vcc++;
        }
        i++;
       }

   return vcc;
}

string substring(string s,int d,int h)
{
   string sub;

     while (d<h)
     {
        sub=sub+s[d];
        d++;
     }
      return sub;

}

string substring(string s,int d) // ok
{
   string sub;

       while (s[d]!='\0')
       {
          sub=sub+s[d];
          d++;
       }

       return sub;

}

int indexOf(string s,char c) // ok
{
   int i = 0;
   int p = -1;


   while (s[i]!='\0')
   {
      if (s[i] == c )
      {
         p=i;
         i = length(s)-1;
      }

      i++;
   }


   return p;
}

int indexOf(string s,char c,int offSet) // ok
{
   int i = offSet;
     int p = -1;


     while (s[i]!='\0')
     {
        if (s[i] == c )
        {
           p=i;
           i = length(s)-1;
        }

        i++;
     }


     return p;
}

int indexOf(string s,string toSearch) // ok
{
   int i1 = 0;
   int i2 = 0;
   int i3 = 0;
   int p = -1;
   string a;

        while (s[i1]!='\0')
        {
          i3 = i1;
            while (s[i1] == toSearch[i2] && i1 != length (s))
            {
              a=a+s[i1];
              i1++;
              i2++;
            }
            if (a == toSearch)
             {
              p=i3;
              i1 = length(s)-1;
             }
              else
              {
                p=-1;
                a= "";
                i2=0;
              }

           i1++;
        }


        return p;

}

int indexOf(string s,string toSearch,int offset) // ok
{
     int i1 = offset;
     int i2 = 0;
     int i3 = 0;
     int p = -1;
     string a;

          while (s[i1]!='\0')
          {
            i3 = i1;
              while (s[i1] == toSearch[i2] && i1 != length (s))
              {
                a=a+s[i1];
                i1++;
                i2++;
              }
              if (a == toSearch)
               {
                p=i3;
                i1 = length(s)-1;
               }
                else
                {
                  p=-1;
                  a= "";
                  i2=0;
                }

             i1++;
          }


          return p;
}

int lastIndexOf(string s,char c)
{
      int i = length(s)-1;
      int p = -1;


     while (s[i]!='\0' && i >= 0 )
     {
        if (s[i] == c )
        {
           p=i;
           i = length(s)+1;
        }
        else
        {
           if (i == 0)
           {
              i= length(s)+1;
           }
        }

        i--;
     }
   return p;
}

int indexOfN(string s,char c,int n)// Retorna la posición de la n-ésima ocurrencia de c dentro de s
{
   int i = 0; //indice
   int p = 0; // variable para el cout
   int x = 0; // cuenta cantidad de (char) c

      while  (s[i]!='\0' && n > 0)
      {
         if (s[i] == c)
         {
            x++;

         if (x == n)
          {
            p = i;
           i=length (s)-1;

          }

         }
         i++;
      }

      if (n==0)
      {
         p=-1;
      }
      else
      {
        if (n > x)
       {
        p = length (s);
       }

      }

   return p;
}

int charToInt(char c)
{
   string a = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz" ;
   int i = 0;

   while (a[i] != c)
   {
      i++;
   }
   return i;
}

char intToChar(int i)
{
   string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz" ;
   return s[i];
}

int digitCount(int n)
{
   if(n == 0)
        return 1;
       int count = 0;
       while (n != 0)
       {
           n = n / 10;
           ++count;
       }
       return count;
}

int getDigit(int n,int i)// n = nro de digitos. i= iésima posición contando desde 0 y derecha a izq.
{
   i++;
int a = pow(10,i);
if (i==2)
{
   a++;
}
int d = n%a;

   while (d>=10)
   {
      d=d/10;
   }

   return d;
}

string reverseStr (string s) //extra by lulu :)
{
   int i = length (s)-1;
   string c = "";
   while (i >= 0)
   {
      c = c+s[i];
      i--;
   }

   return c;
}

string intToString(int i)
{
int a = 0;
int c = digitCount(i);
string s ="";
   while (c>0)
   {
      a = i%10;
      char h = intToChar (a);
      s = s + h;
      i=i/10;
      c--;
   }
s = reverseStr (s);

   return s;
}

int stringToInt(string s,int b) // ok
{
   int nro=0;
   int i = 0;
   int j= length (s)-1;
   int k = 0; // va restando al length
   int valor = 0;
   int base = 1; // almacena la base

   while (s[i] != '\0')
   {
      valor = charToInt (char (s[i]));

      k = j;
      while (k>0)
      {
         base = base * b;
         k--;
      }

      nro = nro + (valor * base);
      base = 1;
      i++;
      j--;
   }

   return nro;
}

int stringToInt(string s) // ok
{
   int i = 0;
   char a = 0;
   int x = 0;
   int c = length(s);
   int j= 0;
      while (s[i] != '\0')
      {
         a = s[i];
         j =  pow(10,c);
         if ((c%2) == 0)
         {
            j++;
         }
         x = x + (charToInt (a) *j);

         c--;
         i++;
      }

   return x/10;
}

string charToString(char c)
{
//   Descripción: Retorna una cadena cuyo único carácter es c.
//   Parámetro: char c – Carácter que será el contenido de la cadena.
//   Retorna: string - Una cadena de longitud 1 cuyo único carácter será c.
   string s;
   s = s + c;

   return s;
}

char stringToChar(string s)
{
   char c = s[0];
   return c;
}

// CONTADOR DE DECIMALES by lulu again
int decimalCount (double d)
{
   int counter = 0;
      for (; d != int(d); ++counter)
          d *= 10;


         return counter;
}
// esto de arriba es una funcion extra

string stringToString(string s)
{
   return s;
}

string doubleToString(double d)
{
//   int a = digitCount (d); // cuenta los numeros enteros
//   int b = decimalCount (d); // cuenta los decimales
//   double dP = d - (int)d; // decimal part
//   int iP = (int)d; //  parte entera
//   string parteEntera = intToString (iP); //
//   string dd; //almacena el resultado
//   if (b>0)
//   {
//      dP = dP * pow(10,b);
//      int parteDecimal = dP ;
//      string c = intToString (parteDecimal);
//
//      dd = dd + parteEntera + '.' + c;
//      return dd;
//   }
//   else
//   {
//     dd = dd + parteEntera;
//   }
   return to_string(d);
}

double stringToDouble(string s)
{
   int i = 0;
   char a = 0;
   double x = 0;
   double c = 0;
   double c2 = 0;
   int j= 0;

   for (int i =0; s[i]!='.' && s[i]!='\0'; i++)
   {
      c++;
      c2 = c;
   }
   while (s[i]!='.' && s[i]!='\0')
   {
      a = s[i];
      j = pow(10, c);
         if ((int (c)%2)== 0 && c!=0)
      {
         j++;
      }
     x = x + (charToInt (a)*j);
     i++;
     c--;
   }
   x/=10;
      if (s[i]=='.')
      {
         i++;
         c--;
      }
      c = length (s) - c2 -2;

      double xt = 0;
      while (s[i]!= '\0')
      {
         a = s[i];
         j = pow(10,c);
            if ((int(c)%2) == 0 && c!=0)
                  {
                  j++;
                  }
            xt = xt + (charToInt (a)*j);
            c--;
            i++;
      }
      xt/=10;

      for (int i=0, c=0; s[i]!='.' && s[i]!='\0'; i++)
      {
         c++;
      }
      c= length (s) - c2 - 2;
      if (c > 0)
      {
         xt = xt * pow (10,-c);
         x += xt;
      }
      return x;
}


bool isEmpty(string s)
{
   int a = length (s);
   if ( a ==0)
   {
   return true;
}
   else {
      return false;
   }
}

bool startsWith(string s,string x)
{
   int a = length (x);
   int i = 0;
   string dest;
   while (i<=a && x[i] !='\0')
   {
   if (s[i]==x[i])
   {
      dest = dest + s[i];
      i++;
      }
   }

   if (x == dest)
   {
   return true;
    }
   else {
      return false;
   }
}
bool endsWith(string s,string x)
{
 int a = length (s)-1;
 int b = length (x)-1;
 string dest;
 string j;
    while (b>=0)
    {
       if (s[a]==x[b])
       {
          dest = dest + x[b];
          a--;
          b--;
       }
   j = reverseStr (dest);
       }

       if (j==x)
       {
          return true;
       }
       else {
          return false;
       }
    }


bool contains(string s,char c)
{
   int i = 0;
   string t;
   t = t + s;
   int z = 0;
   while (s[i]!='\0')
   {
      if (s[i]==t[z])
      {
         return true;
      }
      else {
         i++;
      }
   }
   return false;
}

string replace(string s,char oldChar,char newChar)
{
   int i = 0;
   string old;
   old = old + oldChar;
   string neew;
   neew = neew + newChar;
   string dest;

   while (s[i]!='\0')
   {
      if (s[i]==old[0])
      {
         dest = dest + neew[0];
         i++;
      }
      else {
         dest = dest + s[i];
         i++;
      }
   }
   return dest;
}

string insertAt(string s,int pos,char c)
{
   int i = 0;
   string dest;
   string tuki;
   tuki =  tuki + c;
   while (s[i]!='\0' && i!=pos)
   {
      dest = dest + s[i];
      i++;
   }

   if (i == pos)
   {
    dest = dest + tuki + s[pos];

    i++;
   }
   while (s[i]!='\0')
   {
      dest = dest + s[i];
      i++;
   }

   return dest;
}

string removeAt(string s,int pos)
{
   int i = 0;
   string dest;

   while (s[i]!= '\0')
   {
      if (i == pos)
      {
         i++;

      }
      dest += s[i];
      i++;
   }
   return dest;
}

string ltrim(string s)
{
   int i = 0;
   string dest;
  while (s[i] == ' ' && s[i]!='\0')
  {
      i++;
  }
  while (s[i] != '\0')
  {
     dest += s[i];
     i++;
  }
   return dest;
}

string rtrim(string s)
{
   int a = length (s) -1;
   string dest;
   string f;
   while (a>=0 && s[a]!= '\0' && s[a]==' ')
   {
         a--;
   }
   while (a>=0){
      dest += s[a];
      a--;
   }
   f = reverseStr(dest);
   return f;
}

string trim(string s)
{
   string z = ltrim (s);
   int a = length (z) -1;
      string dest;
      string f;
      while (a>=0 && z[a]!= '\0' && z[a]==' ')
      {
            a--;
      }
      while (a>=0){
         dest += z[a];
         a--;
      }
      f = reverseStr(dest);
   return f;
}

string replicate(char c,int n)
{
   string dest;
   int a = n;

   while (a>0){
   dest += c;
      a--;
   }

   return dest;
}

string spaces(int n)
{
   int a = n;
   string dest;
   string space;
   space = ' ';

      while (a>0){
         dest += space;
         a--;
      }
   return dest;
}

string lpad(string s,int n,char c)
{
   int a = length (s);
   int b = n-a;
   string dest;
   while (b>0){
      dest += c;
      b--;
   }
   dest += s;
   return dest;
}

string rpad(string s,int n,char c) // n = longitud que tendra la cadena retornada
{
   int a = length(s);
   int b = n-a;
   string dest;
   dest += s;
   while (b>0){
         dest += c;
         b--;
      }

   return dest;
}

string cpad(string s,int n,char c)
{
   int a = length(s);
      int b = n-a;
      int d = b/2;
      int aux = d;
      string dest;

      if ((b%2) == 0){

         while (d>0){
            dest += c;
            d--;
         }

         dest += s;

         while (aux>0){
            dest += c;
            aux--;
         }
         return dest;
      }

      else
      {
         while (d>0)
         {
         dest += c;
         d--;
         }

      dest += s;

      while (aux>0){
         dest += c;
         aux--;
      }
      dest += c;
      return dest;

      }
}

bool isDigit(char c)
{
   string a;
   a += c;
   char b = stringToChar(a);
   int x = int(b);
if (x>=48 && x<=57)
{
   return true;
}
else
   return false;
}

bool isLetter(char c)
{
   string a;
      a += c;
      char b = stringToChar(a);
      int x = int(b);
   if (x>=65 && x<=122)
   {
      return true;
   }
   else
      return false;
}

bool isUpperCase(char c)
{
   {
      string a;
         a += c;
         char b = stringToChar(a);
         int x = int(b);
      if (x>=65 && x<=90)
      {
         return true;
      }
      else
         return false;
   }
}

bool isLowerCase(char c)
{
        string a;
           a += c;
           char b = stringToChar(a);
           int x = int(b);
        if (x>=97 && x<=122)
        {
           return true;
        }
        else
           return false;
}

char toUpperCase(char c)
{
   if (isLowerCase(c))
   {
      c -=32;

      return c;
   }
   else
   return c;
}

char toLowerCase(char c)
{
   if (isUpperCase(c))
     {
        c +=32;

        return c;
     }
     else
     return c;
}

string toUpperCase(string s)
{
   int i = 0;
   string upper;
   char c;
   while (s[i]!='\0'){
      c= s[i] ;
    if (isLowerCase(c)){
       char r = toUpperCase(c);
       i++;
       upper += r;
    }
   }
   return upper;
}

string toLowerCase(string s)
{
   int i = 0;
    string lower;
    char c;
    while (s[i]!='\0'){
       c= s[i] ;
     if (isUpperCase(c)){
        char r = toLowerCase(c);
        i++;
        lower += r;
     }
    }
    return lower;
}

int cmpString(string a,string b) //
{
//   Retorna: int – Un valor negativo si a es alfabéticamente menor que b. Un valor
//   positivo si a es alfabéticamente mayor que b, o 0 si ambas cadenas son iguales.
   int lDeA = length (a);
   int lDeB = length (b);
   int R = 0;
   if (lDeA<lDeB){
      R -= 1;
   }
   if (lDeA>lDeB){
      R += 1;
   }
   if (lDeA ==lDeB){
    R += 0;
   }
   return R;
}

int cmpDouble(double a,double b)
{
   //Retorna: int – Un valor negativo si a es menor que b. Un valor positivo si a es
   //mayor que b, o 0 si ambos valores son iguales.
   int c=0;
   if (a<b){
      c -=1;
   }
   if (a>b){
      c +=1 ;
   }
   if (a == b){
      c += 0;
   }
   return c;
}

#endif
