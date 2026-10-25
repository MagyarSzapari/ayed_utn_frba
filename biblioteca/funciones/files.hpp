#ifndef _TFILES_T_
#define _TFILES_T_

#include <iostream>
#include <stdio.h>

template<typename T> void write(FILE* f, T t)
{
   fseek(f,0,SEEK_CUR); //debe anteponerse para evitar errores x implementacion de windows
   fwrite(&t,sizeof(T),1,f);
}

template<typename T> T read(FILE* f)
{
   fseek(f,0,SEEK_CUR);//debe anteponerse para evitar errores x implementacion de windows
   T t;
   fread(&t,sizeof(T),1,f);
   return t;
}

template<typename T> void seek(FILE* f, int n)
{
   fseek(f,n*sizeof(T),SEEK_SET);
}

template<typename T> int fileSize(FILE* f)
{
   int actual = ftell(f);

   fseek(f,0,SEEK_END);

   int nroUltByte = ftell(f);

   fseek(f,actual,SEEK_SET);

   return nroUltByte/sizeof(T);
}

template<typename T> int filePos(FILE* f)
{
   int pos = ftell(f);

   return pos/(sizeof(f));
}

#endif
