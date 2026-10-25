# Matrices — Ejercicio 6: suma de dos matrices 3×3

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays multidimensionales: suma de matrices) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Matrices_Ejercicio6` |

## Objetivo académico

Carga dos matrices 3×3 por teclado y calcula la matriz suma elemento a elemento, mostrándola a medida que se calcula.

## Estrategia de resolución

1. Cargar la matriz 1 y la matriz 2 con doble for
2. Doble for: numeros3[i][j] = numeros1[i][j] + numeros2[i][j] e imprimir

## Estructuras de datos utilizadas

- arrays bidimensionales 3×3
- ciclos for anidados

## Compilar y ejecutar

```bash
g++ main.cpp -o matrices_ejercicio_06
./matrices_ejercicio_06
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_mat_add() — `include/utn_mat.h`.
