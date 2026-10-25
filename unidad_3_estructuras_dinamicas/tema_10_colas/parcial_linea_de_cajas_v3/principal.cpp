#ifndef _MAIN
#define _MAIN

#include <iostream>
#include <string>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/funciones/files.hpp"
#include "biblioteca/tads/Array.hpp"
#include "biblioteca/tads/Map.hpp"
#include "biblioteca/tads/List.hpp"
#include "biblioteca/tads/Stack.hpp"
#include "biblioteca/tads/Queue.hpp"
#include "biblioteca/tads/Coll.hpp"
// #include "Principal buques.hpp"  (cabecera ausente en el original)
using namespace std;

//void cargarBuques (Map<int, RBuque>& mBuques)
//{
//   FILE* f= fopen("BUQUES.DAT","r+b");
//   Buque b = read<Buque>(f);
//   while(!feof(f))
//   {
//      RBuque rb = rBuque(b,list<Container>());
//      mapPut<int,RBuque>(mBuques,b.idBuque,rb);
//      b = read<Buque>(f);
//   }
//
//
//   fclose(f);
//}
//void cargarContainers (Map<int, RBuque>& mBuques)
//{
//   FILE* f= fopen("CONTAINERS.DAT","r+b");
//   Container c = read<Container>(f);
//   while(!feof(f))
//   {
//      RBuque* rb = mapGet<int,RBuque>(mBuques,c.idBuque);
//      listAdd<Container>(rb->lst,c);
//      c = read<Container>(f);
//   }
//
//
//   fclose(f);
//
//}
//
//bool estable(int peso,int longitud,int cteFlotacion)
//{
//
//   return true;
//}
//int cmpContainerId(Container c, int id)
//{
//   return c.idContainer-id;
//}
//void imprimirListadoOrdenContainers(RBuque* rb)
//{
//   //Encabezado
//   cout <<"Orden, Id . Container, Peso, Longitud" <<endl;
//
//   //Listado de containers
//   int orden = 1;
//   while(!listIsEmpty<Container>(rb->lst))
//   {
//      bool encontre = false;
//     listReset<Container>(rb->lst);
//     while (!encontre && listHasNext<Container>(rb->lst))
//     {
//       Container*c = listNext<Container>(rb->lst);
//       if(estable(c->peso,c->longitud,rb->bu.cteFlotacion))
//       {
//          cout <<orden<<c->idContainer<<c->peso<<c->longitud <<endl;
//          listRemove<Container>(rb->lst,c->idContainer,cmpContainerId);
//          encontre = true;
//          orden++;
//       }
//     }
//   }
//}
//
//Fecha fechaHoy()
//{
//   return{};
//}
//int fechaCmp(Fecha f, Fecha h)
//{
//   return 0;
//}
//
//char actividad(Fecha f)
//{
//   Fecha fHoy = fechaHoy();
//   return fechaCmp(f,fHoy)<0?'D':'C';
//}
//
//
//void imprimirListado (Map<int, RBuque> mBuques)
//{
//   mapReset<int,RBuque>(mBuques);
//   while ( mapHasNext<int,RBuque>(mBuques))
//   {
//      RBuque* rb = mapNextValue<int,RBuque>(mBuques);
//
//      char activ = actividad(rb->bu.fecha);
//      string cargaODescarga = activ=='C'?"CARGA":"DESCARGA";
//      string salidaOLlegada = activ=='C'?"SALIDA":"LLEAGADA";
//
//      //Cabecera del listado
//      cout<< rb->bu.idBuque <<cargaODescarga << rb->bu.grua <<rb->bu.nombre;
//      cout<<rb->bu.darsena<<fechaToString(rb->bu.fecha) << salidaOLlegada << rb->bu.cantContainers << endl;
//
//      //Listado de containers y en que orden deben ser manipulados
//      imprimirListadoOrdenContainers(rb);
//   }
//}
//
//
//int main()
//{
//   Map<int, RBuque> mBuques;
//   cargarBuques(mBuques);
//   cargarContainers(mBuques);
//   imprimirListado(mBuques);
//
//   return 0;
//}
//

//
//--------------------------------------------------------------------------------------------------------------------------------

// #include "empresa ep.hpp"  (cabecera ausente en el original)

//Map<int,RSocio> subirSocios()
//{
//
//}
//
//bool esElJefe (RSocio* rs)
//{
//   return rs->s.idSocioRef<0;
//}
//void liquidarComision(RSocio* rs,double impCom,Map<int,RSocio> mSocios)
//{
//
//      if(esElJefe(rs))
//      {
//         //liquido la comisión
//         rs->acumCom += impCom;
//      }
//      else
//      {
//         rs->acumCom += impCom*0.7;
//         //liquido al referente
//         rs = mapGet<int,RSocio>(mSocios,rs->s.idSocioRef);
//         liquidarComision(rs,impCom*0.3,mSocios);
//      }
//}
//
//
//void procesarVenta(Venta v,Map<int,RSocio>& mSocios)
//{
//   RSocio* rs = mapGet<int,RSocio>(mSocios,v.idSocio);
//   rs->acumVta += v.importe;
//   double com = v.importe*0.30;
//   liquidarComision(rs,com,mSocios);
//
//}
//
//void punto1(Map<int,RSocio> mSocios)
//{
//
//}
//void punto2(Map<int,RSocio> mSocios)
//{
//
//}
//
//
//int main()
//{
//   Map<int,RSocio> mSocios = subirSocios();
//   FILE* f =fopen("VENTAS.DAT","r+b");
//
//   Venta v = read<Venta> (f);
//   while (!feof(f))
//   {
//     procesarVenta(v,mSocios);
//     v = read<Venta> (f);
//   }
//
//   punto1(mSocios);
//   punto2(mSocios);
//
//   fclose(f);
//   return 0;
//}

//-----------------------------------------------------------------------------------------------------------------------
#include "linea_de_cajas.hpp"

Caja* descubrirCaja(Mov m,Map<int,Caja> mCaja)
{
   Caja* caja;

   if(!mapContains(mCaja,m.caja))
  {
    Queue<Mov> fila = queue<Mov>();
    Caja c = cajaf(c.caja,fila,0,0,0,0,0);
    caja = mapPut<int,Caja>(mCaja,c.caja,c);
    return caja;
  }
   else
   {
     caja = mapGet<int,Caja>(mCaja,m.caja);
     return caja;
   }

}
void encolar(Mov m,Map<int,Caja>& mCaja)
{
   Caja* x = mapGet<int,Caja>(mCaja,m.caja);
   queueEnqueue(x->cola,m);
}

void procesar1(Caja*& x, Mov s, Mov m)
{
   int resultado = m.hora-s.hora;
   x->acumEspera += resultado;
   x->contCompras ++;
}

void desencolar(Mov m,Map<int,Caja>& mCaja)
{
   Caja* x = mapGet<int,Caja>(mCaja,m.caja);
   Mov s = queueDequeue(x->cola);

   procesar1(x,s,m);


}
void procesar2(Mov m, Caja*& c)
{
 c->tOscioso += (c->hUltimo-m.hora);
}
void procesar3(Caja*& c)
{
  int s = queueSize(c->cola);
  if (s>c->colaMax)
  {
     c->colaMax = s;
  }
}
void mostrarPunto1(Map<int,Caja> mCaja)
{
   int i = 1;
   Caja* c = mapGet(mCaja,i);
   while (c != NULL)
   {
      double prom = c->acumEspera / c->contCompras;
      cout<< "caja " + i << "Tiempo promedio de espera: " + prom <<endl;
      i++;
   }

   cout<< "-------------" <<endl;
}
void mostrarPunto2(Map<int,Caja> mCaja)
{
   int i = 1;
   Caja* c = mapGet(mCaja,i);
     while (c != NULL)
     {

        cout<< "caja " + i << "Tiempo oscioso: " + c->tOscioso <<endl;
        i++;
     }

     cout<< "-------------" <<endl;
}

void mostrarPunto3(Map<int,Caja> mCaja)
{
   int i = 1;
   Caja* c = mapGet(mCaja,i);
   while (c != NULL)
  {

    cout<< "caja " + i << "Cola maxima: " + c->colaMax <<endl;
    i++;
  }


}
int main()
{

   FILE* f = fopen("MOVIMIENTOS.DAT","r+b");

   Mov m = read<Mov> (f);
   Map<int,Caja> mCaja = map<int,Caja>();



   while(!feof(f))
   {
      Caja* c =  descubrirCaja(m,mCaja);
      if(m.mov == 'E')
      {
         encolar(m,mCaja);

         if(queueIsEmpty(c->cola) && c->contCompras !=0)
         {
            procesar2(m,c);
         }

         procesar3(c);

      }
      else
      {
         desencolar(m,mCaja);
         c->hUltimo=m.hora;

      }


   }
mostrarPunto1(mCaja);
mostrarPunto2(mCaja);
mostrarPunto3(mCaja);

   return 0 ;
}

#endif
