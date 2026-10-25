//============================================================================
// Name        : cpp.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/funciones/files.hpp"
#include "biblioteca/tads/Array.hpp"
#include "biblioteca/tads/Map.hpp"
#include "biblioteca/tads/List.hpp"
#include "biblioteca/tads/Stack.hpp"
#include "biblioteca/tads/Queue.hpp"
#include "biblioteca/tads/Coll.hpp"
#include "inscripciones_cursos.hpp"
using namespace std;

Map<int,RCurso> subirCursos()
{
   return {};
}

bool quedanCuposDisponibles(RCurso* rc)
{
   return rc->cur.cap>rc->contIA;
}

void procesarPunto1(Inscripcion r,Map<int,List<string> >& mAlu,Map<int,RCurso>& mCur)
{
   RCurso* rc = mapGet<int,RCurso>(mCur,r.idCur);
   if( quedanCuposDisponibles(rc) )
   {
      rc->contIA++;
   }
   else
   {
      List<string>* lstMR = mapGet<int,List<string> >(mAlu,r.idAlu);
      if( lstMR==NULL )
      {
         lstMR = mapPut<int,List<string> >(mAlu,r.idAlu,list<string>());
      }

      string mat = rc->cur.materia;
      listAdd<string>(*lstMR,mat);
   }
}

void mostrarPunto1(Map<int,List<string> > mAlu)
{
}

void mostrarPunto2(Map<string,List<int> > mMat)
{
}

Map<string,List<int> > procesarPunto2(Map<int,RCurso> mCur)
{
   Map<string,List<int> > mMat = map<string,List<int> >();

   // recorro y descubro
   mapReset<int,RCurso>(mCur);
   while( mapHasNext<int,RCurso>(mCur) )
   {
      RCurso* rc = mapNextValue<int,RCurso>(mCur);
      if( quedanCuposDisponibles(rc) )
      {
         string mat = rc->cur.materia;
         List<int>* lstCCD = mapGet<string,List<int> >(mMat,mat);
         if( lstCCD==NULL )
         {
            lstCCD = mapPut<string,List<int> >(mMat,mat,list<int>());
         }

         listAdd<int>(*lstCCD,rc->cur.idCur);
      }
   }

   return mMat;
}

void reasignar(int idAlu,List<string>& lstMAT,Map<string,List<int> >& mMat,Map<int,RCurso>& mCur,FILE* f)
{
   listReset<string>(lstMAT);
   while( listHasNext<string>(lstMAT) )
   {
      string mat = listNext<string>(lstMAT);
      List<int>* lstCUR = mapGet<string,List<int> >(mMat,mat);
      if( lstCUR!=NULL )
      {
         listReset<int>(*lstCUR);
         int* nuevoCurso = listNext<int>(*lstCUR);

         // grabo
         write<Reasignacion>(f,reasignacion(idAlu,*nuevoCurso));
         listRemove<string>(lstMAT,mat,cmpString);

         // incremento
         RCurso* rc = mapGet<int,RCurso>(mCur,*nuevoCurso);
         rc->contIA++;

         if( !quedanCuposDisponibles(rc) )
         {
            listRemoveFirst<int>(*lstCUR);
         }
      }
   }
}

int cmpIdAlu(int id1,int id2)
{
   return id1-id2;
}

void punto3(Map<int,List<string> >& mAlu,Map<string,List<int> >& mMat,Map<int,RCurso>& mCur)
{
   FILE* f = fopen("REASIGNACION.dat","w+b");

   mapSortByKeys<int,List<string> >(mAlu,cmpIdAlu);
   mapReset<int,List<string> >(mAlu);
   while( mapHasNext<int,List<string> >(mAlu) )
   {
      int idAlu = mapNextKey<int,List<string> >(mAlu);
      List<string>* lstMAT = mapGet<int,List<string> >(mAlu,idAlu);
      reasignar(idAlu,*lstMAT,mMat,mCur,f);
   }

   fclose(f);
}

void punto4(Map<int,List<string> > mAlu)
{
   FILE* f = fopen("REVISION.dat","w+b");

   mapSortByKeys<int,List<string> >(mAlu,cmpIdAlu);
   mapReset<int,List<string> >(mAlu);
   while( mapHasNext<int,List<string> >(mAlu) )
   {
      int idAlu = mapNextKey<int,List<string> >(mAlu);
      List<string>* lstMAT = mapGet<int,List<string> >(mAlu,idAlu);

      while( !listIsEmpty(*lstMAT) )
      {
         string mat = listRemoveFirst(*lstMAT);
         write<Revision>(f,revision(idAlu,mat));
      }
   }

   fclose(f);
}

int main()
{
   Map<int,RCurso> mCur = subirCursos();
   Map<int,List<string> > mAlu = map<int,List<string> >();

   FILE* f = fopen("INSCRIPCIONES.dat","r+b");

   Inscripcion r = read<Inscripcion>(f);
   while( !feof(f) )
   {
      procesarPunto1(r,mAlu,mCur);
      r = read<Inscripcion>(f);
   }

   mostrarPunto1(mAlu);

   // punto 2
   Map<string,List<int> > mMat = procesarPunto2(mCur);
   mostrarPunto2(mMat);

   // punto 3
   punto3(mAlu,mMat,mCur);

   // punto 4
   punto4(mAlu);

   fclose(f);
   return 0;
}
