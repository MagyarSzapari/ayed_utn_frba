#ifndef _TTOKENS_T_
#define _TTOKENS_T_

#include <iostream>
#include <stdio.h>
#include "strings.hpp"
using namespace std;

int tokenCount(string s,char sep)
{
   int a = charCount(s, sep)+1;
   if (length(s)==0){
      a = 0;
   }
   return a;
}

void addToken(string& s,char sep,string t)
{
   if (length(s)==0){
      s += t;
   }
   else {
      s = s + sep + t;
   }
}

string getTokenAt(string s,char sep, int i)
{
   int a= indexOfN(s,sep,i)+1;
   string dest;
   if (a<0){
      return s;
   }
   else{
    while (s[a]!=sep && s[a]!='\0'){
       dest +=s[a];
       a++;
    }
   }
   return dest;
}

void removeTokenAt(string& s,char sep, int i)
{
     for (int c =0, i2 =0 ; s[c]!= '\0'; c++){
        if (s[c]==sep){
           i2++;
        }
        for (int c2=c; i2 ==i && s[c2]!=sep &&s[c2]!='\0';){
           s= removeAt (s,c);
           if (s[c]==sep){
              s= removeAt(s,c);
              c2=length (s);
              c=length(s)-1;
           }
        }
     }
}

void setTokenAt(string& s,char sep, string t,int i)
{

   if(i == 0)
   {
    s = t + sep + substring(s, indexOf(s, sep) + 1);
   }
   else if(i == charCount(s, sep))
   {
    s = substring(s, 0, lastIndexOf(s, sep)) + sep + t;
   }
   else
   {
    s = substring(s, 0, indexOfN(s, sep, i)) + sep + t + substring(s, indexOfN(s, sep, i + 1));
    }
}


int findToken(string s,char sep, string t)
{
   int j = indexOf(s,t);
   int k=0;
   if (j == 0){
    return k;
   }
   string subcadena = substring(s,0,j+1);

   k = charCount(subcadena,sep);

 return k;
}

#endif
