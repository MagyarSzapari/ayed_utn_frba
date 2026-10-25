/*
	Id.Programa: TP1 VentasArtFer.cpp
	Autor......: Matías Nemirovsky
	Profesor...: Lic. Hugo Cuello
	Fecha......: Junio-2022
	Comentario.:    Este es comentario bobo en el que hablo del código.
                    bla bla bla bla bla.
                    Acá va a ir la info de qué es lo que hace y quienes lo hicieron (yo)
					Compilar con el compilador de Borland V 5.5
*/


#include <fstream>
#include <iomanip>

#define MAX_REGS 800
#define MAX_VENS 100

using namespace std;

typedef unsigned short ushort;
typedef char str20[21];

struct{
    int dia,
        mes,
        anio;} sFecha;

struct{
	ushort codigoVendedor,
           cantidad;
	str20  descripcion; // cadena de caracteres al estilo Leng. C
	float  precioUnitario;
} sVenta;

struct{
    ushort  codigoVendedor,
            cantidad;
    str20   descripcion;
    float   precioUnitario;
    ushort  dia,
            mes,
            anio;

} vrVentas[MAX_REGS];

struct{
    ushort  codigoVendedor,
            cantidadVendedor;
    float   importeVendedor;
} vsVendedores[MAX_VENS];

void ObtDatos(ifstream &Ventas, sVenta & rVendedor, sFecha & rFecha) {

	Ventas >> rVendedor.codigoVendedor;
	if(rVendedor.codigoVendedor) {
		Ventas >> rVendedor.cantidad;
        Ventas.ignore();
		Ventas.get(rVendedor.descripcion,21);
		Ventas >> rVendedor.precioUnitario;
		Ventas >> rFecha.dia;
		Ventas >> rFecha.mes;
		Ventas >> rFecha.anio;
	}
};

void ProcDatos()


int main()  {
    ushort      codigoVendedorAnterior,
                codigoVendedorMax;
    sVenta      rVendedor;
    sFecha      rFecha;
    float       totalVenta,
                totalGral,
                importeMaximoVenta,
                totalItem;
    ifstream    Ventas("VentasAF.txt");
    ofstream    Salida("SalidaAF.txt");

    Ventas.close();

    return 0;
};

