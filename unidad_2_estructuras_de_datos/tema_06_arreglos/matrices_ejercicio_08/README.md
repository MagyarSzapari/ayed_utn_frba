# Matrices — Ejercicio 8: producto de dos matrices 3×3

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays multidimensionales: producto de matrices) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Matrices_Ejercicio8` |

## Objetivo académico

Carga dos matrices 3×3 y calcula su producto con el triple for clásico (r[i][j] = suma de a[i][k]·b[k][j]); muestra ambas matrices y el resultado.

## Estrategia de resolución

1. Cargar ambas matrices
2. Inicializar la matriz resultado en 0
3. Triple for i, j, k acumulando matriz1[i][k] \* matriz2[k][j]
4. Mostrar las tres matrices

## Estructuras de datos utilizadas

- arrays bidimensionales 3×3
- tres ciclos for anidados
- acumulador

## Compilar y ejecutar

```bash
g++ main.cpp -o matrices_ejercicio_08
./matrices_ejercicio_08
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_mat_mul() — `include/utn_mat.h`.
