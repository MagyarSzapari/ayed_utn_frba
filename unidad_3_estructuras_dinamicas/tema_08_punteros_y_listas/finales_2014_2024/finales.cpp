#ifndef _MAIN
#define _MAIN
//============================================================================

// Name        : Finales.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>

using namespace std;

#include "funciones_catedra.hpp"

//----------------------------   FINAL 04-03-2024   ----------------------------

//Punto 1.
const int actividades = 4;
const int institucion = 4;
const int lenguajesDisp = 5;

struct Lenguaje{
   char nombre[30];
   int cantVotos;
};

struct Nodo{
   Lenguaje leng;
   Nodo* sig;
};

struct xx{
   int lenguajes[5];
   Nodo* otros;
};

void cargarMatriz(xx mDatos[][institucion]){
   //
}

//CIERRE*/

/*----------------------------   FINAL 26-02-2024   ----------------------------

//CIERRE*/

/*----------------------------   FINAL 19-02-2024   ----------------------------

//Se dispone de esta función:
int formulario(int form[]){
   bool hayFormulario = true; //Esto lo agrego para que funcione el código.

   return hayFormulario?1:0;
}

//Se dispone de esta función:
void ordenarDecreciente(int vPorcentajeLenguajes[], int cantidadLenguajes){}

//Ejercicio 1 - Declarar todas las estructuras de datos necesarias.
const int cantActividades = 3;
const int cantInstitutos = 3;
const int cantLenguajes = 7;

struct NodoFormulario{
   int form[13];
   NodoFormulario* sig;
};

struct Eleccion{
    int cantDeVotosPorLenguajes[cantLenguajes];
};

struct Lenguaje{
    int cantDeVotos;
    char nombreLenguaje[30];
};

//Función dada en el ejercicio 3. La misma devuelve qué opción fue la elegida entre las posiciones que se le indican.
//A su vez, el número que devuelve será el utilizado en la matriz para subir la información.
int xx(int v[], int inicio, int fin){
    int i = inicio;

    for(; i <= fin; i++){
        if(v[i]){
           return (i - inicio);
        }
    }

    return -1;
}

//Punto 2.
void cargarFormularios(NodoFormulario* listaDeFormulariosHastaElMomento, Eleccion mElecciones[][cantInstitutos]){
    int actividad;
    int instituto;
    int lenguaje;

    NodoFormulario* aux = listaDeFormulariosHastaElMomento;

    // Recorremos la lista de formularios, y vamos volcando la informacion a la matriz:
    while(aux != NULL){
        actividad = xx(aux->form, 0, 2); // Me devuelve la posicion de una de las actividades de mi matriz [0..2]
        instituto = xx(aux->form, 3, 5); // Me devuelve la posicion de una de los institutos de mi matriz [0..2]
        lenguaje = xx(aux->form, 6, 13); // Me devuelve la posicion de uno de mis lenguajes [0..6]

        if(actividad != -1 && instituto != -1 && lenguaje != -1){
            mElecciones[actividad][instituto].cantDeVotosPorLenguajes[lenguaje]++;
        }

        aux = aux->sig;
    }
}

//Punto 4.
//Función auxiliar.
void inicializarNombresDeLenguajes(Lenguaje vLenguajes[], int cantLenguajes);

//Función auxiliar.
void ordenar(Lenguaje vLenguajes[], int cantLenguajes){
   unsigned i = 1;
   Lenguaje aux;
   bool cambio;

   do{
       cambio = false;

       for(unsigned j = 0; j < cantLenguajes - i; j++){
           if(vLenguajes[j].cantDeVotos > vLenguajes[j + 1].cantDeVotos){
               aux = vLenguajes[j];
               vLenguajes[j] = vLenguajes[j + 1];
               vLenguajes[j + 1] = aux;
               cambio = true;
           }
       }

       i++;
   } while((i < cantLenguajes) && (cambio));
}

void mostrarResultados(Eleccion mElecciones[][cantInstitutos], int actividad, int instituto){
    int votosTotales = 0;
    Lenguaje vLenguajes[cantLenguajes];

    inicializarNombresDeLenguajes(vLenguajes, cantLenguajes);

    for(int i = 0; i < cantLenguajes; i++){
       votosTotales += mElecciones[actividad][instituto].cantDeVotosPorLenguajes[i];
        vLenguajes[i].cantDeVotos = mElecciones[actividad][instituto].cantDeVotosPorLenguajes[i];
    }

    ordenar(vLenguajes, cantLenguajes); //Ordeno al vector por cantidad de votos.

    for(int i = 0; i < cantLenguajes; i++){
        if(i == 0){
            cout << "El Lenguaje con mayor cantidad de votos fue: " << vLenguajes[i].nombreLenguaje;
        }

        cout << "\nPorcentaje de votos fue: " << (vLenguajes[i].cantDeVotos / votosTotales)*100 << "%" << endl;
    }
}

//Punto 5.
//Función auxiliar.
void calcularCantidadAlumnos(int& alumnosTotales){
   //
}

//Función auxiliar.
int calcularEncuestadosTotales(Eleccion mElecciones[][cantInstitutos]){
   return 0;
}

void mostrarTotalEncuestadosYAlumnos(Eleccion mElecciones[][cantInstitutos]){
   int votosTotales = 0;
   int alumnosTotales = 0;

   votosTotales = calcularEncuestadosTotales(mElecciones);
   calcularCantidadAlumnos(alumnosTotales);
}

//No es necesario, pero es para hacerse una idea.
int main(){
    Eleccion mElecciones[cantActividades][cantInstitutos];
    NodoFormulario *listaDeFormulariosHastaElMomento; //Asumo que la lista ya esta cargada!

    mostrarTotalEncuestadosYAlumnos(mElecciones);

    return 0;
}

//CIERRE*/

/*----------------------------   FINAL 11-12-2023   ----------------------------

//Punto 1.a.
struct Nodo{
   int info;
   Nodo* sig;
};

//Asumimos que funciona.
void insertarOrdenado(Nodo*& listaOrdenada, int info){}

//Asumimos que funciona.
int pop(Nodo* pila){
   return pila->info;
}

//Asumimos que funciona.
int desencolar(Nodo* primero){
   return primero->info;
}

Nodo* unirPilaYColaOrdenadamente(Nodo* pila, Nodo* primero, Nodo* ultimo){
   Nodo* auxPila = pila;
   Nodo* auxPrimero = primero;
   Nodo* listaOrdenada = NULL;

   while(auxPila != NULL){
      insertarOrdenado(listaOrdenada, auxPila->info);
      pop(auxPila);
   }

   if(ultimo != NULL){
      while(auxPrimero != NULL){
         insertarOrdenado(listaOrdenada, auxPrimero->info);
         desencolar(auxPrimero);
      }
   }

   return listaOrdenada;
}

//Punto 1.b.
Nodo* buscar(Nodo* lista, int elemento){
   Nodo* aux = lista;

   while((aux != NULL) && (aux->info != elemento)){
      aux = aux->sig;
   }

   return aux;
}

void agregar(Nodo*& lista, int elemento){
   Nodo* nuevo = new Nodo();
   nuevo->info = elemento;
   nuevo->sig = NULL;

   if(lista != NULL){
      Nodo* aux = lista;

      while(aux->sig != NULL){
         aux = aux->sig;
      }

      aux->sig = nuevo;
   }
   else{
      lista = nuevo;
   }
}

void intersecarDosListas(Nodo*& nuevaLista, Nodo* lista1, Nodo* lista2){
   Nodo* aux1 = lista1;
   Nodo* aux2 = lista2;
   Nodo* nodoAgregar = NULL;

   while(aux1 != NULL){
      nodoAgregar = buscar(aux2, aux1->info);

      if(nodoAgregar != NULL){
         agregar(nuevaLista, nodoAgregar->info);
      }

      aux1 = aux1->sig;
   }
}

//Punto 2.
struct ReservaHotel{
   int codHotel;
   int cantReservas;
   int diasDisponiblesXTemp;
};

struct Reservas{
   int codHotel;
   int cantDiasReservados;
};

struct NodoReserva{
   Reservas reserva;
   NodoReserva* sig;
};

const unsigned cantHoteles = 50;
ReservaHotel hoteles[cantHoteles];
NodoReserva* listaReservas;

int busquedaSecuencial(ReservaHotel vector[], unsigned dimension, int datoBuscado){
    unsigned i = 0;

    while(i < dimension && vector[i].codHotel != datoBuscado){
        i++;
    }

    if(i == dimension){
        return -1;
    }
    else{
        return i;
    }
}

void actualizarReservas(ReservaHotel hoteles[], NodoReserva* listaReservas){
   NodoReserva* aux = listaReservas;
   int pos = 0;

   while(aux != NULL){
      pos = busquedaSecuencial(hoteles, cantHoteles, listaReservas->reserva.codHotel);

      if(pos != -1){
         hoteles[pos].cantReservas++;
         hoteles[pos].diasDisponiblesXTemp -= aux->reserva.cantDiasReservados;
      }

      aux = aux->sig;
   }
}

//Punto extra 1.
//Ni idea.

//Punto 3.a y b.
struct Bulto{
   int codProd;
   short pesoXBulto;
   char tipo;
   int bultosEnStock;
};

struct NodoBulto{
   Bulto bulto;
   NodoBulto* sig;
};

//Asumimos que funciona.
NodoBulto* insertarOrdenado(NodoBulto*& archOrdenado, Bulto bulto){
   NodoBulto* nuevo = new NodoBulto();
   nuevo->bulto = bulto;
   nuevo->sig = NULL;

   if((archOrdenado == NULL) || (bulto.codProd < archOrdenado->bulto.codProd)){
      archOrdenado = nuevo;
      return nuevo;
   }

   NodoBulto* aux = archOrdenado;
   while((aux->sig !=NULL) && (bulto.codProd > aux->sig->bulto.codProd)){
      aux = aux->sig;
   }

   nuevo -> sig = aux->sig;
   aux -> sig = nuevo;
   return nuevo;
}

//Asumimos que funciona.
void mostrar(NodoBulto* lista){}

void ordenarArchivo(FILE* fBultos, NodoBulto*& listaBultos){
   Bulto rBulto1, bultoAux, rBulto2;

   //Leo el archivo.
   fread(&rBulto1, sizeof(Bulto), 1, fBultos);
   while(!feof(fBultos)){
      bultoAux.codProd = rBulto1.codProd;
      bultoAux.pesoXBulto = rBulto1.pesoXBulto;
      bultoAux.tipo = rBulto1.tipo;
      bultoAux.bultosEnStock = rBulto1.bultosEnStock;

      insertarOrdenado(listaBultos, bultoAux);
      fread(&rBulto1, sizeof(Bulto), 1, fBultos);
   }

   //Actualizo el archivo.
   NodoBulto* listaAux = listaBultos;
   while(listaAux != NULL){
      rBulto2.codProd = listaAux->bulto.codProd;
      rBulto2.pesoXBulto = listaAux->bulto.pesoXBulto;
      rBulto2.tipo = listaAux->bulto.tipo;
      rBulto2.bultosEnStock = listaAux->bulto.bultosEnStock;

      fwrite(&rBulto2, sizeof(Bulto), 1, fBultos);
      listaAux = listaAux->sig;
   }
}

NodoBulto* clasificarSinStock(NodoBulto* listaBultos){
   NodoBulto* listaAux = listaBultos;
   NodoBulto* listaSinStock = NULL;

   while(listaAux != NULL){
      if(listaAux->bulto.bultosEnStock == 0){
         insertarOrdenado(listaSinStock, listaAux->bulto); //Podria no ser ordenado
      }

      listaAux = listaAux->sig;
   }

   return listaSinStock;
}

NodoBulto* clasificarPesadosYBebidas(NodoBulto* listaBultos){
   NodoBulto* listaAux = listaBultos;
   NodoBulto* listaPesadosYBebidas = NULL;

   while(listaAux != NULL){
      if(listaAux->bulto.pesoXBulto > 100 || listaAux->bulto.tipo == 'B'){
         insertarOrdenado(listaPesadosYBebidas, listaAux->bulto); //Podria no ser ordenado
      }

      listaAux = listaAux->sig;
   }
   return listaPesadosYBebidas;
}

int main(){
   NodoBulto* listaBultos=NULL;
   FILE* fBultos=fopen("Stock.dat","r+b");

   if(!feof(fBultos)){
      ordenarArchivo(fBultos, listaBultos);
   }

   NodoBulto* listaSinStock;
   NodoBulto* listaPesadosYBebidas;
   listaSinStock = clasificarSinStock(listaBultos);
   if(listaSinStock != NULL){
      mostrar(listaSinStock);
   }

   listaPesadosYBebidas = clasificarPesadosYBebidas(listaBultos);

   if(listaPesadosYBebidas != NULL){
      mostrar(listaPesadosYBebidas);
   }

   return 0;
}

//Punto extra 2.
//Se podría haber utilizado un vector, pero sería necesario saber su tamaño; luego,
//ordenar el vector y escribirlo en el mismo archivo.

//CIERRE*/

/*----------------------------   FINAL 04-12-2023   ----------------------------

//Punto 1.
typedef char str40[40];
typedef char str30[30];
typedef char str06[6];

struct Pasajero{
   str40 apellidoYNombre;
   str30 destino;
   str06 vuelo;
   int asiento;
   int salida; //ddhhmm
   int llegada; //ddhhmm
};

struct ListaPasajeros{
   Pasajero pasajero;
   ListaPasajeros* sgte;
};

//Punto 3.
void ingresarPasajero(ListaPasajeros*& listaPasajeros, Pasajero pasajero){ //Implementación de encolar sobre una lista circular.
   ListaPasajeros*& nuevo = new ListaPasajeros();
   nuevo->pasajero = pasajero;

   if(listaPasajeros != NULL){
      nuevo->sgte = listaPasajeros->sgte;
      listaPasajeros->sgte = nuevo;
   }
   else{
      nuevo->sgte = nuevo;
   }

   listaPasajeros = nuevo;
}

//Función auxiliar.
ListaPasajeros* buscarPasajeroPorNombre(ListaPasajeros* listaPasajeros, str40 nombrePasajero){
   ListaPasajeros* aux = listaPasajeros->sgte;

   while((aux != NULL) && (strcmp(aux->pasajero.apellidoYNombre, nombrePasajero) != 0)){
      aux = aux->sgte;
   }

   return aux;
}

//Función auxiliar.
void mostrarDatosPasajero(ListaPasajeros* listaPasajeros){
   cout << "Apellido y nombre: " << listaPasajeros->pasajero.apellidoYNombre;
   cout << "\nDestino: " << listaPasajeros->pasajero.destino;
   cout << "\nVuelo: " << listaPasajeros->pasajero.vuelo;
   cout << "\nAsiento: " << listaPasajeros->pasajero.destino;
   cout << "\nSalida (en formato ddhhmm): " << listaPasajeros->pasajero.salida;
   cout << "\nLlegada (en formato ddhhmm): " << listaPasajeros->pasajero.llegada;
}

void visualizarPasajero(ListaPasajeros* listaPasajeros, str40 nombrePasajero){
   ListaPasajeros* aux = buscarPasajeroPorNombre(listaPasajeros, nombrePasajero);

   mostrarDatosPasajero(aux);
}

void visualizarListaTotal(ListaPasajeros* listaPasajeros){
   ListaPasajeros* aux = listaPasajeros->sgte;

   while(aux != NULL){
      mostrarDatosPasajero(aux);

      aux = aux->sgte;
   }
}

void visualizarListaDestino(ListaPasajeros* listaPasajeros, str30 destinoSolicitado){
   ListaPasajeros* aux = listaPasajeros->sgte;

   while(aux != NULL){
      if(strcmp(aux->pasajero.destino, destinoSolicitado) == 0){
         mostrarDatosPasajero(aux);
      }

      aux = aux->sgte;
   }
}

void eliminarPasajero(ListaPasajeros*& listaPasajeros, str40 nombrePasajero){
   ListaPasajeros* aux = buscarPasajeroPorNombre(listaPasajeros, nombrePasajero);

   if(aux == listaPasajeros){
      listaPasajeros = NULL;
   }

   delete aux;
}

void modificarDatosPas(ListaPasajeros*& listaPasajeros, Pasajero pasajeroActualiz, str40 nombrePasajero){
   ListaPasajeros* aux = buscarPasajeroPorNombre(listaPasajeros, nombrePasajero);

   if(aux != NULL){
      aux->pasajero = pasajeroActualiz;
   }
}

//Punto 2.
//Función auxiliar.
void pedirDatos(Pasajero& pasajero){
   cout << "Ingrese los datos del pasajero." << endl;
   cout << "\nApellido y nombre: ";
   cin >> pasajero.apellidoYNombre;
   cout << "\nDestino: ";
   cin >> pasajero.destino;
   cout << "\nVuelo: ";
   cin >> pasajero.vuelo;
   cout << "\nAsiento: ";
   cin >> pasajero.asiento;
   cout << "\nSalida (en formato ddhhmm): ";
   cin >> pasajero.salida;
   cout << "\nLlegada (en formato ddhhmm): ";
   cin >> pasajero.llegada;
}

//Función auxiliar.
void pedirApellidoYNombre(str40& apellidoYNombre){
   cout << "Ingrese apellido y nombre del pasajero: ";
   cin >> apellidoYNombre;
}

int main(){
   int opcion = 0;
   ListaPasajeros* listaPasajeros = new ListaPasajeros();
   Pasajero pasajero;
   str40 nombrePasajero;

   cout << "Ingrese el numero de la opcion que desea elegir:\n" << endl;
   cout << "1. Agrega un nuevo pasajero a la estructura de datos." << endl;
   cout << "2. Dado el nombre de un pasajero visualiza la totalidad de los datos." << endl;
   cout << "3. Muestra por dispositivo estándar la totalidad de datos de los pasajeros." << endl;
   cout << "4. Muestra la totalidad de los pasajeros de un destino determinado." << endl;
   cout << "5. Dado un nombre saca a ese pasajero de la lista." << endl;
   cout << "6. Dado un nombre permite modificar el resto de los datos de un pasajero." << endl;
   cin >> opcion;

   switch(opcion){
      case 1:
         pedirDatos(pasajero);
         ingresarPasajero(listaPasajeros, pasajero);
         break;

      case 2:
         pedirApellidoYNombre(nombrePasajero);
         visualizarPasajero(listaPasajeros, nombrePasajero);
         break;

      case 3:
         visualizarListaTotal(listaPasajeros);
         break;

      case 4:
         str30 destino;

         cout << "Ingrese el destino: ";
         cin >> destino;
         visualizarListaDestino(listaPasajeros, destino);
         break;

      case 5:
         pedirApellidoYNombre(nombrePasajero);
         eliminarPasajero(listaPasajeros, nombrePasajero);
         break;

      case 6:
         pedirDatos(pasajero);
         modificarDatosPas(listaPasajeros, pasajero, pasajero.apellidoYNombre);
         break;

      default:
         cout << "\nEl numero ingresado no es valido." << endl;
         break;
   }

   return 0;
}

//Punto 4.
//

//CIERRE*/

/*----------------------------   FINAL 28-07-2017   ----------------------------

//Viene dado.
int hora(){
   return 0; //En realidad devuelve un número con formato hhmmss.
}

//Punto 1.
struct InfoPedido{
   string nombreCliente; //Si se usaran archivos, trabajaría con: char nombreCliente[30];
   int variedad, tamanio, tipo, cantPizzas, precio, hora;
};

struct NodoCola{
   InfoPedido pedido;
   NodoCola* sig;
};

//Se utiliza una cola porque el enunciado dice que se sigue un estricto orden de atención, tomando en cuenta orden de llegada.

struct InfoResultados{
   int variedad, tamanio, tipo, hora, importeTotal;
};

struct NodoLista{
   InfoResultados resultado;
   NodoLista* sig;
};

//Se utiliza una lista porque es necesario ordenar los resultados bajo un criterio distinto a FIFO (o LIFO).

//Punto 2.
void facturarPedido(InfoPedido pedido);

//Recibe la información del pedido y la muestra en la factura. Retorna void porque es un procedimiento que emite una lista.

//Punto 4.
//Función auxiliar. Asumimos que funciona.
void insertarOrdenado(NodoLista*& lista, InfoResultados elemento){}

void agregarPedido(NodoLista*& listaPedidos, InfoResultados resultado){
   insertarOrdenado(listaPedidos, resultado); //Ordenado por importeTotal decreciente.
}

//Punto 5.
void informarHorarioDePedidosConElMayorImporte(NodoLista* listaPedidos){
   int importe = listaPedidos->resultado.importeTotal;

   while((listaPedidos != NULL) && (listaPedidos->resultado.importeTotal == importe)){
      cout << listaPedidos->resultado.hora;
      listaPedidos = listaPedidos->sig;
   }
}

//Punto 3.
//Función auxiliar. Asumimos que funciona.
void encolar(NodoCola* inicio, NodoCola* fin, InfoPedido pedido){}

//Función auxiliar. Asumimos que funciona.
void insertarSinRepetir(NodoLista* listaPedidos, InfoResultados resultado){}

//Vienen dadas.
void mostrarPedidos(NodoLista* listaVariedad){}
void ranking(NodoLista* listaVariedad){}

int main(){
   //Inicializo la cola.
   NodoCola* inicio = NULL;
   NodoCola* fin = NULL;
   //Inicializo las listas.
   NodoLista* listaPedidos = NULL;
   NodoLista* listaVariedad = NULL;
   //Declaro las variables que utilizaré.
   InfoPedido pedido;
   InfoResultados resultado;
   int totalFacturado = 0;

   cout << "Ingrese el tipo de pizza: ";
   cin >> pedido.tipo;

   while(pedido.tipo != 0){
      resultado.tipo = pedido.tipo;

      cout << "\nNombre del cliente: ";
      cin >> pedido.nombreCliente;

      cout << "\nVariedad de pizza: ";
      cin >> pedido.variedad;
      resultado.variedad = pedido.variedad;

      cout << "\nTamaño de la pizza: ";
      cin >> pedido.tamanio;
      resultado.tamanio = pedido.tamanio;

      cout << "\nPrecio a pagar: ";
      cin >> pedido.precio;

      cout << "\nCantidad de pizzas: ";
      cin >> pedido.cantPizzas;
      resultado.importeTotal = pedido.precio * pedido.cantPizzas;
      totalFacturado += resultado.importeTotal;

      pedido.hora = hora();
      resultado.hora = hora();

      encolar(inicio, fin, pedido);
      facturarPedido(pedido);
      agregarPedido(listaPedidos, resultado);
      insertarSinRepetir(listaVariedad, resultado);

      cout << "Ingrese el tipo de pizza: ";
      cin >> pedido.tipo;
   }

   cout << "El importe total facturado fue de: " << totalFacturado << endl;

   mostrarPedidos(listaVariedad);
   informarHorarioDePedidosConElMayorImporte(listaPedidos);
   ranking(listaVariedad);

   return 0;
}

//CIERRE*/

/*----------------------------   FINAL 14-12-2016   ----------------------------

//Se cuenta con las siguientes funciones y tipo abstracto:
struct Mensaje{};

string numeroTelefonicoDelUsuario(int idUsuario){
   return {};
}

string vistaPreviaMensaje(Mensaje mensaje){
   return {};
}

void emitirNotificación(string titulo, string descripcion){}

//Punto 1.
int maxContactos = 200;

struct Conversacion{
   int idConversacion;
   string nombre; //"" si es un chat individual.
   bool notificar;
   bool vistaPrevia;
};

struct ListaConversaciones{
   Conversacion chat;
   ListaConversaciones* sig;
};

struct Contacto{
   int idUsuario;
   string nombreContacto;
   bool bloqueado;
};

Contacto contactosUsuario[maxContactos];

//Puntos 2 y 3.
//Función auxiliar.
ListaConversaciones* buscarConversacion(ListaConversaciones* conversaciones, int idConversacion){
   ListaConversaciones* aux = conversaciones;

   while((aux != NULL)  &&  (aux->chat.idConversacion != idConversacion)){
      aux = aux->sig;
   }

   return aux;
}

//Función auxiliar.
bool esContacto(Contacto contactosUsuario[], int maxContactos, int idUsuarioEmisor){
   for(int i=0; i<maxContactos; i++){
      if(contactosUsuario[i].idUsuario == idUsuarioEmisor){
         return true;
      }
   }

   return false;
}

//Función auxiliar.
Contacto buscarContacto(){
   return {};
}

void notificarMensajeRecibido(ListaConversaciones* conversaciones, Contacto contactosUsuario[],
                                    int maxContactos, int idConversacion, int idUsuarioEmisor, Mensaje mensaje){
   //
   ListaConversaciones* conversacionBuscada = buscarConversacion(conversaciones, idConversacion);


   Contacto contactoBuscado;


}

//CIERRE*/

/*----------------------------   FINAL 03-12-2014   ----------------------------

//Punto 1.
struct InfoPiso{
   int nroPiso;
   int genteBaja;
   int genteSube;
};

struct Piso{
   InfoPiso info;
   Piso* ant;
   Piso* sig;
};

//Punto 4.
void medirDistanciaAPisosExtremos(const Piso* unPiso, unsigned& masBajo, unsigned& masAlto){
   masBajo = 0;
   masAlto = 0;

   Piso* pisoAbajo = unPiso->ant;
   while(pisoAbajo != NULL){
      masBajo++;
      pisoAbajo = pisoAbajo->ant;
   }

   Piso* pisoArriba = unPiso->sig;
      while(pisoArriba != NULL){
         masAlto++;
         pisoArriba = pisoArriba->sig;
      }
}

//Puntos 2 y 3.
//Función auxiliar.
void insertarPisoArribaDelActual(Piso* unNuevoPiso, Piso* unPisoActual){
   unNuevoPiso->ant = unPisoActual;
   unNuevoPiso->sig = unPisoActual->sig;

   unPisoActual->sig->ant = unNuevoPiso;
   unPisoActual->sig = unNuevoPiso;
}


unsigned insertarPisoArribaDelActualYMedir(Piso* unPisoActual, Piso* unNuevoPiso,
      unsigned& masBajo, unsigned& masAlto){
   unsigned distanciaPB = 0;
   Piso* pisoPB = unNuevoPiso;

   insertarPisoArribaDelActual(unNuevoPiso, unPisoActual);
   medirDistanciaAPisosExtremos(unNuevoPiso, masBajo, masAlto);

   while((pisoPB != NULL) && (pisoPB->info.nroPiso != 0)){
      distanciaPB++;

      pisoPB = (unNuevoPiso->info.nroPiso > 0) ? pisoPB->ant : pisoPB->sig;
   }

   return distanciaPB;
}

//Punto 5.
int main(){
   Piso* unPisoActual;
   Piso* unNuevoPiso;
   unsigned masBajo, masAlto, distanciaConPB;

   distanciaConPB = insertarPisoArribaDelActualYMedir(unPisoActual, unNuevoPiso, masBajo, masAlto);

   return 0;
}

//CIERRE*/

/*----------------------------   FINAL 10-12-2014   ----------------------------

//Punto 1.
struct InfoPiso{
   int nroPiso;
   unsigned genteBaja;
   unsigned genteSube;
};

struct Piso{
   InfoPiso infoPiso;
   Piso* ant;
   Piso* sig;
};

struct TipoPisoEliminado{
   int nroPiso;
   int diffSubeBaja;
};

//Puntos 2 y 5.
//Función auxiliar:
void GuardarPisoEliminado(FILE* unFlujoDeEscritura, Piso* unPiso){
   TipoPisoEliminado tpe;

   tpe.nroPiso = unPiso->infoPiso.nroPiso;
   tpe.diffSubeBaja = unPiso->infoPiso.genteSube - unPiso->infoPiso.genteBaja; //Puede dar un nro negativo.

   fwrite(&tpe, sizeof(tpe), 1, unFlujoDeEscritura);
}

unsigned EliminarLosPisosPrimosArribaDe(Piso* unPisoActual, FILE* unFlujoDeEscritura){
   unsigned cantPisosEliminados = 0;
   Piso* unPisoAbajo = unPisoActual;

   unPisoActual = unPisoActual->sig; // para “saltar” el actual

   while(unPisoActual != NULL){
      unPisoAbajo = unPisoActual; // se lo retiene para procesarlo si corresponde

      unPisoActual = unPisoActual->sig; // Subir al piso próximo

      if(EsPrimo(abs(unPisoAbajo->infoPiso.nroPiso))){ // en caso de procesar al piso de abajo
         GuardarPisoEliminado(unFlujoDeEscritura, unPisoAbajo);
         EliminarPiso(unPisoAbajo);
         cantPisosEliminados++;
      }
   }

   return cantPisosEliminados;
}

//Punto 3.
bool EsPrimo(int numero){
   for(int i = 2; i < numero ; i++){
      if((numero % i) == 0){
         return false;
      }
   }

   return true;
}

//Punto 4.
void EliminarPiso(Piso*& unPiso){
   if(unPiso->sig != NULL){
      unPiso->sig->ant = unPiso->ant;
   }

   if(unPiso->ant != NULL){
      unPiso->ant->sig = unPiso->sig;
   }

   delete(unPiso);
}

//CIERRE*/

#endif
