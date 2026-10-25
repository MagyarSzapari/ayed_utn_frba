# Matrices — Ejercicio 3: copiar una matriz 2×2 a otra

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays multidimensionales: copia) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Matrices_Ejercicio3` |

## Objetivo académico

Copia elemento a elemento una matriz 2×2 inicializada en una segunda matriz y muestra la copia.

## Estrategia de resolución

1. Doble for asignando matrizNueva[i][j] = numeros[i][j]
2. Doble for para mostrar la nueva matriz por filas

## Estructuras de datos utilizadas

- arrays bidimensionales 2×2
- ciclos for anidados

## Observaciones

Imprime los valores sin separador (cout &lt;&lt; valor), así que salen pegados ('12' / '34').

## Compilar y ejecutar

```bash
g++ main.cpp -o matrices_ejercicio_03
./matrices_ejercicio_03
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_mat_copy() — `include/utn_mat.h`.
