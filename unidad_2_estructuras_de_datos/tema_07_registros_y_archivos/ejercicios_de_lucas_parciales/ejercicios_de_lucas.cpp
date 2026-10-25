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
#include "Principal buques.hpp"
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

#include "empresa ep.hpp"

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
#include "LineaDeCajas.hpp"

//Caja* descubrirCaja(Mov m,Map<int,Caja>& mCaja)
//{
//   Caja* caja;
//
//   if(!mapContains(mCaja,m.caja))
//  {
//    Queue<Mov> fila = queue<Mov>();
//    Caja c = cajaf(m.caja,fila,0,0,0,0,0);
//    caja = mapPut<int,Caja>(mCaja,m.caja,c);
//    return caja;
//  }
//   else
//   {
//     caja = mapGet<int,Caja>(mCaja,m.caja);
//     return caja;
//   }
//
//}
//void encolar(Mov m,Map<int,Caja>& mCaja)
//{
//   Caja* x = mapGet<int,Caja>(mCaja,m.caja);
//   queueEnqueue(x->cola,m);
//}
//
//void procesar1(Caja*& x, Mov s, Mov m)
//{
//   int resultado = m.hora-s.hora;
//   x->acumEspera += resultado;
//   x->contCompras ++;
//}
//
//void desencolar(Mov m,Map<int,Caja>& mCaja)
//{
//   Caja* x = mapGet<int,Caja>(mCaja,m.caja);
//   Mov s = queueDequeue(x->cola);
//
//   procesar1(x,s,m);
//}
//void procesar2(Mov m, Caja*& c)
//{
// c->tOscioso += (m.hora- c->hUltimo);
//}
//void procesar3(Caja*& c)
//{
//  int s = queueSize(c->cola);
//  if (s>c->colaMax)
//  {
//     c->colaMax = s;
//  }
//}
//
//void mostrarPunto1(Map<int,Caja> mCaja)
//{
//   int i = 1;
//   Caja* c;
//   while (c != NULL)
//   {
//      c = mapGet(mCaja,i);
//      double prom = c->acumEspera / c->contCompras;
//      cout<< "caja " << i << "Tiempo promedio de espera: " << prom <<endl;
//      i++;
//   }
//
//   cout<< "-------------" <<endl;
//}
//
//void mostrarPunto2(Map<int,Caja> mCaja)
//{
//   int i = 1;
//   Caja* c;
//     while (c != NULL)
//     {
//        c = mapGet(mCaja,i);
//        cout<< "caja " << i << "Tiempo oscioso: " << c->tOscioso <<endl;
//        i++;
//     }
//
//     cout<< "-------------" <<endl;
//}
//
//void mostrarPunto3(Map<int,Caja> mCaja)
//{
//   int i = 1;
//   Caja* c;
//   while (c != NULL)
//  {
//    c = mapGet(mCaja,i);
//    cout<< "caja " + i << "Cola maxima: " + c->colaMax <<endl;
//    i++;
//  }
//
//
//}
//int main()
//{
//
//   FILE* f = fopen("MOVIMIENTOS.DAT","r+b");
//
//   Mov m = read<Mov> (f);
//   Map<int,Caja> mCaja = map<int,Caja>();
//
//
//
//   while(!feof(f))
//   {
//      Caja* c =  descubrirCaja(m,mCaja);
//      if(m.mov == 'E')
//      {
//         encolar(m,mCaja);
//
//         if(queueIsEmpty(c->cola) && c->contCompras !=0)
//         {
//            procesar2(m,c);
//         }
//
//         procesar3(c);
//      }
//      else
//      {
//         desencolar(m,mCaja);
//         c->hUltimo=m.hora;
//      }
//
//    m = read<Mov> (f);
//   }
//mostrarPunto1(mCaja);
//mostrarPunto2(mCaja);
//mostrarPunto3(mCaja);
//
//   return 0 ;
//}

//-----------------------------------------------------------------
#include "Infracciones.hpp"

//int diaDelMes(int fecha)
//{
////   int ret = fecha/1000000; //aaaammdd  Hacer funcion y acordarse de sacar los 0 a la izquierda
//   return 0;
//}
//
//void crearCalendario(Map<int,RInfraccion>& mInf)
//{
//      for(int i=1;i!=31;i++)
//      {
//         mapPut(mInf.values.arr->mcont,i,0);
//      }
//}
//
//void subirInfracciones(Map<int,RInfraccion>& mInf)
//{
//   FILE* f = fopen("INFRACCIONES.dat","r+b");
//   Infraccion infraccion = read<Infraccion>(f);
//   while(!feof(f))
//   {
//      RInfraccion rInf = rInfraccion(infraccion,map<int,int>());
//      mapPut(mInf,infraccion.idInfraccion,rInf);
//      infraccion = read<Infraccion>(f);
//   }
//   crearCalendario(mInf);
//}
//
//void procesar1(Acta acta, Map<int,RInfraccion> mInf)
//{
//   int dia = diaDelMes(acta.fecha);
//   int idInf = acta.idInfraccion;
//
//   RInfraccion* rInf = mapGet(mInf,idInf);
//   int* cc = mapGet(rInf->mcont,dia);
//       *cc += 1;
//
//
//}
//
//int sumarDias(int fechaDeuda, int diasPromo)
//{
//   return 0;
//}
//int fechaActual(int fechaActual)
//{
//   return 0;
//}
//
//bool fechaAnterior(int fechaActual,int fechaPromo)
//{
//   return true;
//}
//
//double procesarDescuento(Acta acta,  RInfraccion* inf,Map<string,Deuda> mDeuda)
//{
//   int fechaDeuda= acta.fecha;
//   int fechaPromo = sumarDias(fechaDeuda,inf->inf.diasPromo);
//   int fechaActual = fechaActual(fechaActual);
//   bool fechaAnterior = fechaAnterior(fechaActual,fechaPromo);
//   double ret = 0;
//   if(fechaAnterior)
//   {
//      ret = inf->inf.penalidad * inf->inf.dtoPromo;
//   }
//
//   return ret;
//}
//
//void procesar2(Acta acta, Map<int,RInfraccion> mInf,Map<string,Deuda> mDeuda)
//{
//   RInfraccion* inf = mapGet(mInf,acta.idInfraccion);
//   int penalidad = inf->inf.penalidad;
//   double descuento = procesarDescuento(acta,inf,mDeuda);
//   int neto = penalidad - descuento;
//   string pat = acta.pat;
//   if(mapContains(mDeuda,pat))
//   {
//      mDeuda.values.arr->ttDeuda += penalidad;
//      mDeuda.values.arr->ttDescuento += descuento;
//      mDeuda.values.arr->neto += neto;
//   }
//   else
//   {
//      Deuda deu;
//      deu.ttDeuda = penalidad;
//      deu.ttDescuento = descuento;
//      deu.neto = neto;
//      mapPut(mDeuda,pat,deu);
//   }
//
//
//}
//
//void mostrar1(Map<int,RInfraccion> mInf)
//{
//
//   while(mapHasNext(mInf))
//   {
//      string infraccion = mInf.values.arr->inf.descr;
//      cout << infraccion + " tuvo esta cantidad de infracciones por dia:" <<endl;
//      while(mapHasNext(mInf.values.arr->mcont))
//      {
//      int* dia = mInf.values.arr->mcont.keys.arr;
//      int* cantidad = mInf.values.arr->mcont.values.arr;
//      mapNextKey(mInf.values.arr->mcont);
//
//      cout<< "dia: " + *dia << ", cantidad: " + *cantidad <<endl;
//
//      }
//      mapNextKey(mInf);
//   }
//}
//
//void mostrar2(Map<string,Deuda> mDeuda)
//{
//cout<<"Patente    Total Deuda    Total Desucento   Neto a Pagar" << endl;
//while(mapHasNext(mDeuda))
//{
//   string* patente = mDeuda.keys.arr;
//  cout << *patente + "    " << mDeuda.values.arr->ttDeuda + "    " << mDeuda.values.arr->ttDescuento + "    "<< mDeuda.values.arr->neto + "    " <<endl;
//  mapNextKey(mDeuda);
//}
//}
//
//int main()
//{
//   FILE* f = fopen("ACTAS.dat","r+b");
//   Acta acta = read<Acta>(f);
//   Map<int,RInfraccion> mInf= map<int,RInfraccion>();
//   Map<string,Deuda> mDeuda = map<string,Deuda>();
//   subirInfracciones(mInf);
//   while(!feof(f))
//   {
//      procesar1(acta,mInf);
//      procesar2(acta,mInf,mDeuda);
//      acta = read<Acta>(f);
//   }
//
//   mostrar1(mInf);
//   mostrar2(mDeuda);
//
//   return 0;
//}
//------------------------------------------------------------------------------------------------------

#include "ART.hpp"


//Map<int,REmpresa> subirEmpresas(Map<int,REmpresa>& mEmpresa)
//{
//   FILE* f = fopen("EMPRESAS.dat","r+b");
//   Empresa empresa = read<Empresa>(f);
//   while(!feof(f))
//   {
//      Map<int,int> trabAcciedentados = map<int,int>();
//      REmpresa rEmp = rEmpresa(empresa,0,0,trabAcciedentados);
//      mapPut(mEmpresa,empresa.idEmpresa,rEmp);
//      read<Empresa>(f);
//   }
//   return mEmpresa;
//}
//
//void procesarPuntos(Accidente accidente,Map<int,REmpresa>& mEmpresa)
//{
////   int trabAsegurados = mEmpresa.values.arr->emp.cantTrabAsegurados;  creo q no sirve para esta funcion, se va a usar en mostrar
//   int legajo = accidente.legajo;
//   int idEmpresa = accidente.idEmpresa;
//   REmpresa* rEmp = mapGet(mEmpresa,idEmpresa);
//   int* diasLic = mapGet(rEmp->trabAccidentados,legajo);
//   if(diasLic != NULL)
//   {
//      rEmp->ttAccidetes += 1;
//      *diasLic += accidente.cantDiasLicencia;
//   }
//   else
//   {
//   rEmp->ttAccidetes += 1;
//   mapPut(rEmp->trabAccidentados,legajo,accidente.cantDiasLicencia);
//   }
//}
//double porcentaje(int cantTrabajadores,int cantAccidentes)
//{
//   return 0;
//}
//
//void procesarPorcentaje(REmpresa*& rEmp)
//{
//   int trabAsegurados = rEmp->emp.cantTrabAsegurados;
//   int totalAccidentes = rEmp->ttAccidetes;
//   double porcent = porcentaje(trabAsegurados,totalAccidentes);
//   rEmp->porcentaje = porcent;
//}
//
//void mostrar1(Map<int,REmpresa>& mEmpresa)
//{
//   cout<<"LISTADO DE PORCENTAJE DE REAJUSTE" <<endl;
//   cout<<"Razon social" << "Porcentaje"<<endl;
//   while(mapHasNext(mEmpresa))
//   {
//     REmpresa* rEmp = mapNextValue(mEmpresa);
//     procesarPorcentaje(rEmp);
//     string razonSocial= rEmp->emp.razonSocial;
//     double porcentaje = rEmp->porcentaje;
//     cout<<  razonSocial << "    " <<porcentaje <<endl;
//   }
//
//}
//
//int porcentajeMasAlto(Map<int,REmpresa> mEmpresa)
//{
//   int idEmpresa = 0;
//   double porcentajeMasAlto = 0;
//   while(mapHasNext(mEmpresa))
//   {
//      REmpresa* rEmp = mapNextValue(mEmpresa);
//      int porcentajeEmpresa = rEmp->porcentaje;
//
//      if(porcentajeMasAlto < porcentajeEmpresa)
//      {
//         porcentajeMasAlto = porcentajeEmpresa;
//         idEmpresa = rEmp->emp.idEmpresa;
//      }
//   }
//   return idEmpresa;
//}
//
//void mostrar2(Map<int,REmpresa> mEmpresa)
//{
//  int idEmpresa = porcentajeMasAlto(mEmpresa);
//  REmpresa* rEmp = mapGet(mEmpresa,idEmpresa);
//  string razonSocial = rEmp->emp.razonSocial;
//  cout<<"Razon social: " << razonSocial <<endl;
//  Map<int,int> trabAccidentados = rEmp->trabAccidentados;
//  cout<< "Legajo   " << "Total de dias ausente" <<endl;
//  while(mapHasNext(trabAccidentados))
//  {
//     int legajo = mapNextKey(trabAccidentados);
//     int* diasAusente = mapGet(trabAccidentados,legajo);
//     cout << legajo << *diasAusente <<endl;
//  }
//
//}
//
//int main()
//{
//   FILE* f = fopen("ACCIDENTES.dat","r+b");
//   Accidente accidente = read<Accidente>(f);
//   Map<int,REmpresa> mEmpresa = subirEmpresas(mEmpresa);
//
//   while(!feof(f))
//   {
//      procesarPuntos(accidente,mEmpresa);
//
//
//      read<Accidente>(f);
//   }
//   mostrar1(mEmpresa);
//   mostrar2(mEmpresa);
//
//   return 0;
//}

#include "Aviacion.hpp"

//Map<int,RCiudad> subirCiudades(Map<int,RCiudad> mCiudades)
//{
//   FILE* f = fopen("CIUDADES.dat","r+b");
//   Ciudad ciu = read<Ciudad>(f);
//   while(!feof(f))
//   {
//      RCiudad rCiu = rCiudad(ciu,0);
//      mapPut(mCiudades,ciu.idCiu,rCiu);
//      ciu = read<Ciudad>(f);
//   }
//
//   return mCiudades;
//}
//Map<int,RVuelo> subirVuelos(Map<int,RVuelo> mVuelo)
//{
//   FILE* f = fopen("VUELOS.dat","r+b");
//   Vuelo vue = read<Vuelo>(f);
//   while(!feof(f))
//   {
//      RVuelo rVue = rVuelo(vue,0,false);
//      mapPut(mVuelo,vue.idVue,rVue);
//      vue = read<Vuelo>(f);
//   }
//   return mVuelo;
//}
//
//int* descubrirClientes(Map<int,int>& mCliente,Reserva res)
//{
//   int idCliente = res.idCli;
//   if(!mapContains(mCliente,idCliente))
//   {
//      int* acumMillas = mapPut(mCliente,idCliente,0);
//      return acumMillas;
//   }
//   else
//   {
//      int* acumMillas = mapGet(mCliente,idCliente);
//      return acumMillas;
//   }
//}
//
//void procesar1(Map<int,RCiudad>& mCiudades,Map<int,RVuelo> mVuelo,Reserva res)
//{
//   int idVue = res.idVue;
//   RVuelo* rVue = mapGet(mVuelo,idVue);
//   int idDes = rVue->vuelo.idDes;
//   RCiudad* rCiu = mapGet(mCiudades,idDes);
//   rCiu->contFlia +=1;
//}
//
//void procesarReserva(RVuelo*& rVue,int cantReserva)
//{
//   int cap = rVue->vuelo.cap;
//   if(cantReserva <= cap)
//   {
//      cap -= cantReserva;
//      rVue->vuelo.cap = cap;
//   }
//   else
//   {
//      rVue->cantRechazada += cantReserva;
//   }
//
//   if(cap == 0)
//   {
//      rVue->estaLleno = true;
//   }
//
//}
//
//void procesar2(Map<int,RVuelo> mVuelo,Reserva res)
//{
//   int idVue = res.idVue;
//   int cantReserva = res.cant;
//   RVuelo* rVue = mapGet(mVuelo,idVue);
//   procesarReserva(rVue,cantReserva);
//
//}
//
//int calcularMillas(RCiudad* ciuOri,RCiudad* ciuDest,int cantPlazas)
//{
//   int millasOri = ciuOri->ciu.millas;
//   int millasDest = ciuDest->ciu.millas;
//   int millas = 0;
//   if(millasOri < millasDest)
//   {
//      millas = millasDest - millasOri;
//   }
//   else
//   {
//      millas = millasOri - millasDest;
//   }
//
//   return millas*cantPlazas;
//}
//
//int procesarMillas(RVuelo* rVue,Map<int,RCiudad> mCiudades,int cantPlazas)
//{
//   int idOri = rVue->vuelo.idOri;
//   int idDest = rVue->vuelo.idDes;
//   RCiudad* ciuOri = mapGet(mCiudades,idOri);
//   RCiudad* ciuDest = mapGet(mCiudades,idDest);
//   int millas = calcularMillas(ciuOri,ciuDest,cantPlazas);
//   return millas;
//}
//
//void procesar3(Map<int,RCiudad> mCiudades,Map<int,RVuelo> mVuelo, Reserva res,int*& acumMillas)
//{
//   int cantPlazas = res.cant;
//   int idVue = res.idVue;
//   RVuelo* rVue = mapGet(mVuelo,idVue);
//   int millas = procesarMillas(rVue,mCiudades,cantPlazas);
//   *acumMillas += millas;
//}
//
//void mostrar1(Map<int,RCiudad> mCiudades)
//{
//  string ciudad = "";
//  int cantFlias = 0;
//  while (mapHasNext(mCiudades))
//  {
//     RCiudad* rCiu = mapNextValue(mCiudades);
//     ciudad = rCiu->ciu.descr;
//     cantFlias = rCiu->contFlia;
//     cout<< ciudad << ": " << cantFlias <<endl;
//  }
//}
//void mostrar2(Map<int,RVuelo> mVuelo)
//{
//   int idVuelo =0;
//   string lleno;
//   int plzRechazadas = 0;
//   while (mapHasNext(mVuelo))
//   {
//      RVuelo* rVue = mapNextValue(mVuelo);
//      lleno = "Incompleto";
//      idVuelo = rVue->vuelo.idVue;
//      plzRechazadas = rVue->cantRechazada;
//      if(rVue->estaLleno == true)
//      {
//         lleno = "Completo";
//      }
//      cout<< "El vuelo " << idVuelo << " saldra " << lleno << ". en Este se rechazaron esta cantidad de plazas:" << plzRechazadas <<endl;
//
//   }
//}
//void mostrar3(Map<int,int> mCliente)
//{
//   int* millas;
//   int idCliente;
//   while(mapHasNext(mCliente))
//   {
//     idCliente =  mapNextKey(mCliente);
//     millas = mapGet(mCliente,idCliente);
//
//     cout<<"El cliente con esta id " << idCliente << "tiene estas millas acumuladas " << *millas <<endl;
//   }
//
//}
//int main()
//{
//   Map<int,RCiudad> mCiudades = subirCiudades(mCiudades);
//   Map<int,RVuelo> mVuelo = subirVuelos(mVuelo);
//   Map<int,int> mCliente = map<int,int>();
//   FILE* f = fopen("RESERVAS.dat","r+b");
//   Reserva res = read<Reserva> (f);
//   while(!feof(f))
//   {
//     int* acumMillas = descubrirClientes(mCliente,res);
//     procesar1(mCiudades,mVuelo,res);
//     procesar2(mVuelo,res);
//     procesar3(mCiudades,mVuelo,res,acumMillas);
//
//      res = read<Reserva> (f);
//   }
//   mostrar1(mCiudades);
//   mostrar2(mVuelo);
//   mostrar3(mCliente);
//}

#include "Fulvo.hpp"

//int main()
//{
//   FILE* f = fopen("RESULTADOS.dat","r+b");
//   int posseek = 0;
//   Resultado resul = read<Resultado>(f);
//   Map<int,Equipo> mEquipo = map<int,Equipo>();
//   Map<string,List<int>> mEstadio = map<string,List<int> >();
//
//   while(!feof(f))
//   {
//
//   }
//
//
//
//}

#include "Gas.hpp"

void subirCategoria(Map<string,RCategoria>& mCat)
{
   FILE* f =fopen("CATEGORIAS.dat","r+b");
   Categoria cat = read<Categoria> (f);
   string idCat = cat.idCat;
   while (!feof(f))
   {  idCat = cat.idCat;
      RCategoria rCat = rCategoria(cat,list<int>(),list<int>(),list<int>(),0);
      mapPut(mCat,idCat,rCat);
      cat = read<Categoria> (f);
   }
}

int buscarCliente(FILE* fCli,int idCli,bool& encontrado)
{
   encontrado = false;
   int i = 0;
   int j = fileSize<int>(fCli);
   int k;
   Cliente c;
   while(i<=j && !encontrado)
   {
      k = (i+j)/2;

      seek<Cliente>(fCli,k);
      c = read<Cliente>(fCli);

      i= idCli>c.idCli?k+1:i;
      j= idCli<c.idCli?k-1:j;
   }

   return k;
}

string procesarCategoria(Map<string,RCategoria> mCat,int consumido)
{
   mapReset(mCat);
   int m3Desde;
   int m3Hasta;
   while(mapHasNext(mCat))
   {
      RCategoria* rCat = mapNextValue(mCat);
      m3Desde = rCat->cat.m3Desde;
      m3Hasta = rCat->cat.m3Hasta;
      if(consumido >= m3Desde && consumido <= m3Hasta)
      {
         return rCat->cat.idCat;
      }
   }
   return 0;
}

void actualizarListas(Map<string,RCategoria>& mCat,RCategoria* rCatAnt,string catNueva, int posCli)
{
   RCategoria* rCatNueva = mapGet(mCat,catNueva);
   int m3DesdeAnt = rCatAnt->cat.m3Desde;
   int m3DesdeNuevo = rCatNueva->cat.m3Desde;
   if (m3DesdeAnt < m3DesdeNuevo)
   {
      listAdd(rCatAnt->cliAsci,posCli);
      listAdd(rCatNueva->cliNuevo,posCli);
   }
   else
   {
      listAdd(rCatAnt->cliDes,posCli);
      listAdd(rCatNueva->cliNuevo,posCli);
   }
}

string procesar1 (Map<string,RCategoria>& mCat,Medicion med,Cliente cli,int posCli)
{
   string catAnt = cli.idCatAnt;
   RCategoria* rCatAnt = mapGet(mCat,catAnt);
   Array<Consumo> arConsumo = decodeConsumo(cli.consumos);
   int consumoActual = med.lecturaActual-cli.lecturaAnterior;
   int consumido = calculoConsumoAnual(arConsumo,consumoActual);
   string catNueva = procesarCategoria(mCat,consumido);
   if(catAnt != catNueva)
   {
      actualizarListas(mCat,rCatAnt,catNueva,posCli);
   }
   rCatAnt->numCli ++;

   return catNueva;
}

void calcularAhorro (Cliente cli,Map<string,RCategoria> mCat,string catNueva,Medicion med)
{
   string catAnt = cli.idCatAnt;
   RCategoria* rCatAnt = mapGet(mCat,catAnt);
   RCategoria* rCatNueva = mapGet(mCat,catNueva);

   double valorAnt = rCatAnt->cat.valorM3;
   double valorActual = rCatNueva->cat.valorM3;
   int consumo = med.lecturaActual - cli.lecturaAnterior;

   double pagoAnt= consumo*valorAnt;
   double pagoActual= consumo*valorActual;

   double ahorro;

   if(pagoAnt<pagoActual)
   {
      ahorro = pagoActual-pagoAnt;
   }
   else
   {
      ahorro = pagoAnt-pagoActual;
   }

}

void procesar2 (Cliente cli,Map<string,RCategoria> mCat,string catNueva,Medicion med)
{
   calcularAhorro(cli,mCat,catNueva,med);
}

int main()
{
  Map<string,RCategoria> mCat = map<string,RCategoria>();
  subirCategoria(mCat);
  FILE* fCli = fopen("CLIENTES.dat","r+b");
  FILE* fMed =fopen("MEDICIONES.dat","r+b");
  Medicion med = read<Medicion> (fMed);
  bool encontrado;
  int posCli= buscarCliente(fCli,med.idCli,encontrado);

  while(!feof(fMed))
  {
     seek<Cliente>(fCli,posCli);
     Cliente cli = read<Cliente>(fCli);
    string catNueva = procesar1 (mCat,med,cli,posCli);
     procesar2 (cli,mCat,catNueva,med);
  }
}


#endif
