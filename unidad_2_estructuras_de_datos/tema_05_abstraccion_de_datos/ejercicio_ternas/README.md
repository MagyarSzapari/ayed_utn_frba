# Ternas: TAD Terna y promedios de menores, medios y mayores hasta la terna nula

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 5: Abstracción de datos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (TAD); U5 iteración no exacta con centinela |
| **Archivos** | [`ejercicio_ternas.cpp`](ejercicio_ternas.cpp), [`terna.hpp`](terna.hpp) |
| **Origen en la cursada** | `Cursada/Ejercicio_Ternas` |

## Objetivo académico

Define en terna.hpp un TAD Terna (struct a, b, c con constructora y operaciones esNula, obtenerMenor/Medio/Mayor) y lo usa para procesar ternas leídas hasta la terna (0, 0, 0), acumulando y promediando el menor, el medio y el mayor de cada una.

## Estrategia de resolución

1. Leer la primera terna y construirla con terna(a, b, c)
2. while (!ternaEsNula(t)) con lectura adelantada al final del cuerpo (centinela 0 0 0)
3. Acumular ternaObtenerMenor / Medio / Mayor y contar las ternas
4. Promediar cada acumulador dividiendo por (double)i

## Estructuras de datos utilizadas

- struct
- TAD en header con guarda #ifndef _TADTerna
- ciclo while con centinela y lectura adelantada
- acumuladores
- contador
- if / else if con condiciones compuestas

## Observaciones

Bug: menor/mayor/medio usan comparaciones estrictas y fallan con valores repetidos: ternaObtenerMenor(1,1,2) devuelve 2, ternaObtenerMayor(2,2,1) devuelve 1 y ternaObtenerMedio(2,2,1) devuelve 1. Si la primera terna ya es nula, i = 0 y los promedios dan NaN (0/0.0). return {a, b, c} requiere C++11. Funciones definidas en el .hpp sin inline. Va a tema_05 por el foco en el TAD Terna. Proyecto Eclipse CDT.

## Compilar y ejecutar

```bash
g++ ejercicio_ternas.cpp -o ejercicio_ternas
./ejercicio_ternas
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_sort3_int() / utn_math_median3_int() — `include/utn_math.h`.
