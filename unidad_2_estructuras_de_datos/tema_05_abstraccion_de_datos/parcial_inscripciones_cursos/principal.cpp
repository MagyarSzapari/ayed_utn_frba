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

void punto1(Inscripcion ins,Map<int,List<string> >& mAlu,Map<int,RCurso >& mCur)
{
   RCurso* rc = mapGet<int,RCurso>(mCur,ins.idCur);
   List<string>* lst = mapGet<int,List<string> >(mAlu,ins.idAlu);
   if( lst==NULL )
   {
      lst = mapPut<int,List<string> >(mAlu,ins.idAlu,list<string>());
   }

   if( rc->c.cap-rc->contIA>0 )
   {
      // inscripcion aprobada
      rc->contIA++;
   }
   else
   {
      // inscripcion rechazada
      string mat = rc->c.materia;
      listAdd<string>(*lst,mat);
   }
}

bool quedanCupos(RCurso* rc)
{
   return rc->c.cap-rc->contIA>0;
}

Map<string,List<int> > punto2(Map<int,RCurso> mCur)
{
   Map<string,List<int> > ret = map<string,List<int> >();

   mapReset<int,RCurso>(mCur);
   while( mapHasNext<int,RCurso>(mCur) )
   {
      RCurso* rc = mapNextValue<int,RCurso>(mCur);
      if( quedanCupos(rc) )
      {
         // hay cupos
         string mat = rc->c.materia;
         List<int>* lst = mapGet<string,List<int> >(ret,mat);
         if( lst==NULL )
         {
            lst = mapPut<string,List<int>>(ret,mat,list<int>());
         }

         listAdd<int>(*lst,rc->c.idCur);
      }
   }

   return ret;
}

void mostrarPunto1(Map<int,List<string> > mAlu)
{

}

void mostrarPunto2(Map<string,List<int> > mMat)
{

}

int cmpIdAlu(int a,int b)
{
   return a-b;
}

void punto3(Map<int,List<string> >& mAlu,Map<string,List<int> >& mMat,Map<int,RCurso>& mCur)
{
   FILE* f = fopen("REASIGNACION.dat","w+b");

   mapSortByKeys<int,List<string> >(mAlu,cmpIdAlu);

   mapReset<int,List<string> >(mAlu);
   while( mapHasNext<int,List<string> >(mAlu) )
   {
      int idAlu = mapNextKey<int,List<string> >(mAlu);
      List<string>* lst = mapGet<int,List<string> >(mAlu,idAlu);

      listReset<string>(*lst);
      while( listHasNext<string>(*lst) )
      {
         string* mat = listNext<string>(*lst);

         List<int>* lstCursosDisp = mapGet<string,List<int> >(mMat,*mat);

         listReset<int>(*lstCursosDisp);
         int* idCur = listNext<int>(*lstCursosDisp);

         // grabo registro en reasignacion
         write<Reasignacion>(f,reasignacion(idAlu,*idCur));

         // remuevo la materia donde ya lo reubique
         listRemove<string>(*lst,*mat,cmpString);

         if( listIsEmpty<string>(*lst) )
         {
            // si era la ultima materia, remuevo al alumno
            mapRemove<int,List<string> >(mAlu,idAlu);
         }

         // actualizo disponibilidad
         RCurso* rc = mapGet<int,RCurso>(mCur,*idCur);
         rc->contIA++;

         if( !quedanCupos(rc) )
         {
            listRemoveFirst<int>(*lstCursosDisp);
         }
      }
   }

   fclose(f);
}

void punto4(Map<int,List<string> >mAlu)
{

}

int main()
{
   Map<int,List<string> > mAlu = map<int,List<string> >();
   Map<int,RCurso> mCur = subirCursos();

   FILE* f = fopen("INSCRIPCIONES.dat","r+b");

   Inscripcion ins = read<Inscripcion>(f);
   while (!feof(f) )
   {
      punto1(ins,mAlu,mCur);

      ins = read<Inscripcion>(f);
   }

   Map<string,List<int> > mMat = punto2(mCur);

   mostrarPunto1(mAlu);
   mostrarPunto2(mMat);

   punto3(mAlu,mMat,mCur);

   punto4(mAlu);

   fclose(f);

   return 0;
}
