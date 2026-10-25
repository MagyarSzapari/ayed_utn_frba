# Archivos de texto — TP1 Ventas de artículos de ferretería (borrador incompleto)

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U10 — Almacenamiento físico (lectura de archivo de texto a arreglo de registros); relacionado con U7 y U8 |
| **Archivos** | [`tp1_art_fer_matias.cpp`](tp1_art_fer_matias.cpp) |
| **Origen en la cursada** | `Cursada/TP1ArtFerMatias.cpp` |

## Objetivo académico

Borrador del TP1 (alumno Matías Nemirovsky, prof. Hugo Cuello) que extiende G1Ej24: leer "VentasAF.txt" con ventas que además traen fecha (día, mes, año) para cargarlas en un arreglo de registros vrVentas[800] y totalizar por vendedor en vsVendedores[100], con salida a "SalidaAF.txt". Solo están las declaraciones y la función de lectura.

## Estrategia de resolución

1. Definir registros de fecha, de venta y los arreglos de registros vrVentas[MAX_REGS] y vsVendedores[MAX_VENS] (código, cantidad e importe por vendedor).
2. ObtDatos lee del ifstream codVendedor y, si no es 0 (centinela), cantidad, descripción de 20 caracteres, precio unitario y la fecha.
3. main abre los archivos de entrada/salida y declara totales/máximo, pero el procesamiento (ProcDatos) quedó sin implementar.

## Estructuras de datos utilizadas

- struct (registros de venta, fecha y vendedor)
- arreglos de registros
- cadena char[21]
- ifstream/ofstream
- #define de tamaños máximos

## Observaciones

Incompleto y NO compila: `struct{...} sFecha;` y `struct{...} sVenta;` declaran VARIABLES de tipo anónimo, no tipos (faltaría `struct sFecha {...};` o typedef), por lo que los parámetros `sVenta &` y `sFecha &` de ObtDatos y las variables de main son errores; `void ProcDatos()` no tiene cuerpo ni ';'. sFecha usa int y vrVentas ushort para la fecha (inconsistente). Salida nunca se escribe y no se valida la apertura. Los archivos VentasAF.txt/SalidaAF.txt no están en el zip. El encabezado tiene texto de relleno ("bla bla"). Autor indicado: Matías Nemirovsky (no es el titular). Emparentado con G1Ej24 LeeTxt.cpp (misma función ObtDatos con fecha).

## Compilar y ejecutar

```bash
g++ tp1_art_fer_matias.cpp -o tp1_ventas_articulos_ferreteria
./tp1_ventas_articulos_ferreteria
```

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
tp1_art_fer_matias.cpp:53:33: error: 'sVenta' is not a type
```

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_file_control_break() — `include/utn_file.h`.
