# Corte de control — Guía 1 Ejercicio 24: ventas de ferretería por vendedor desde archivo de texto

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U9 — Patrones algorítmicos (corte de control, búsqueda de máximo) sobre archivo de texto (U10) |
| **Archivos** | [`g1_ej24_lee_txt.cpp`](g1_ej24_lee_txt.cpp) |
| **Origen en la cursada** | `Cursada/G1Ej24 LeeTxt.cpp` |

## Objetivo académico

Ejercicio resuelto del Lic. Hugo Cuello: lee "VentasFerreteria.Txt" con ventas agrupadas por código de vendedor, aplica corte de control para listar cada venta y el total por vendedor, y al final informa el total general y el vendedor de mayor importe, escribiendo un listado formateado en "Sld.Txt".

## Estrategia de resolución

1. ObtDatos lee un registro sVen del ifstream (codVen, cant, descripción de 20 caracteres con get(descrip,21), preUni); codVen = 0 actúa como centinela de fin.
2. Corte de control con dos while anidados: el externo mientras codVen != 0 emite la cabecera e inicializa tVen guardando codVenAnt; el interno procesa mientras codVen == codVenAnt (calcula total de ítem, acumula y emite el detalle).
3. Al cortar cada vendedor: acumula al total general y actualiza el máximo (impMaxVta/codVenMax); emite el pie de vendedor.
4. Salida formateada en archivo con iomanip (setw, setfill, fixed, precision(2)) y una función Replicate que arma líneas separadoras.
5. Modularización top-down: EmiteInic, ObtDatos, EmiteInicCabVen, CalcDet, EmiteDet, CalcVerifMaxVtaPieVen, EmitePieVen, EmitePieLst.

## Estructuras de datos utilizadas

- struct sVen con cadena char[21]
- ifstream/ofstream (archivos de texto)
- corte de control (while anidados)
- acumuladores
- máximo
- iomanip (setw/setfill/fixed)
- parámetros por referencia

## Observaciones

Autor: Lic. Hugo Cuello (material de cátedra, "Compilar con Borland 5.5"). El archivo de datos VentasFerreteria.Txt NO está en el zip (no se encontró en D:\Para Valen), así que no se puede ejecutar tal cual; formato esperado por línea: `codVen cant descrip(20 car.) preUni`, terminado en una línea con 0. No valida la apertura de archivos; codVenMax queda sin inicializar si no hay vendedores o todos venden 0. Usa string sin #include &lt;string> (compila vía &lt;fstream>/&lt;iomanip> en g++). Sld no se cierra explícitamente (lo hace el destructor).

## Compilar y ejecutar

```bash
g++ g1_ej24_lee_txt.cpp -o g1_ejercicio_24_lee_txt
./g1_ejercicio_24_lee_txt
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_file_control_break() (patrón corte de control) — `include/utn_file.h`.
