#ifndef _TFILES_T_
#define _TFILES_T_

#include <iostream>
#include <stdio.h>

template<typename T> void write(FILE* f, T t)
{
  fseek(f,0,SEEK_CUR);
  fwrite(&t,sizeof(T),1,f);
}

template<typename T> T read(FILE* f)
{
  T buff;
  fseek(f,0,SEEK_CUR);
  fread(&buff,sizeof(T),1,f);
   return buff;
}

template<typename T> void seek(FILE* f, int n)
{
   fseek(f,n*sizeof(T),SEEK_SET);
}

template<typename T> int fileSize(FILE* f)
{
  int h = ftell(f);
  fseek(f,0,SEEK_END);
  int i = ftell(f)/sizeof(T);
  fseek(f,h,SEEK_SET);
   return i;
}

template<typename T> int filePos(FILE* f)
{
   int i = ftell(f)/sizeof(T);
   return i;
}

#endif
