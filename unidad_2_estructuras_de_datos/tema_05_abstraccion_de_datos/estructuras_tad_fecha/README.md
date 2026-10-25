# Estructuras: TAD Fecha con construcción, validación y conversión a cadena

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 5: Abstracción de datos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (struct + abstracción/TAD) |
| **Archivos** | [`estructuras.cpp`](estructuras.cpp), [`fecha.hpp`](fecha.hpp) |
| **Origen en la cursada** | `Cursada/Estructuras` |

## Objetivo académico

Define en fecha.hpp un TAD Fecha (struct dia/mes/anio) con función constructora y operaciones (toString, año bisiesto, días del mes, validar). El main lee una fecha y la muestra como d/m/a solo si es válida.

## Estrategia de resolución

1. struct Fecha {dia, mes, anio} y constructora fecha(d, m, a)
2. fechaDiasDelMes: 30 para abril/junio/septiembre/noviembre, 28 o 29 en febrero según bisiesto, 31 el resto
3. fechaValidar: mes en 1..12, año > 0 y día en 1..díasDelMes
4. fechaToString concatena to_string de cada campo con '/'

## Estructuras de datos utilizadas

- struct
- header con guarda #ifndef _TADFecha
- funciones de operación que reciben el struct por valor
- if anidados y encadenados con condiciones compuestas
- std::string y to_string

## Observaciones

Bug: fechaEsAnioBisiesto usa a%4 == 0 || (a%400 == 0 && a%100 != 0); el segundo término es imposible, así que equivale a a%4 == 0 y toma 1900 y 2100 como bisiestos. Lo correcto: (a%4 == 0 && a%100 != 0) || a%400 == 0. Las funciones se definen en el .hpp sin inline: si se incluye en dos .cpp hay definición múltiple. to_string requiere C++11. Va a tema_05 porque el foco es el TAD (constructora + operaciones encapsuladas en un header), no el struct en sí. Proyecto Eclipse CDT.

## Compilar y ejecutar

```bash
g++ estructuras.cpp -o estructuras_tad_fecha
./estructuras_tad_fecha
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_date_t / utn_date_make() / utn_date_format() — `include/utn_date.h`.
