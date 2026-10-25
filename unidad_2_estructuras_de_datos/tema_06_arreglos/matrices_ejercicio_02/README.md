# Matrices — Ejercicio 2: diagonal principal de una matriz 3×3

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays multidimensionales: diagonal) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Matrices_Ejercicio2` |

## Objetivo académico

Inicializa una matriz 3×3, la imprime y luego muestra los elementos de la diagonal principal (i == j).

## Estrategia de resolución

1. Inicializar la matriz con llaves por filas
2. Imprimir todos los elementos con doble for
3. Recorrer con doble for y mostrar solo cuando i == j

## Estructuras de datos utilizadas

- array bidimensional 3×3 inicializado
- ciclos for anidados
- decisión simple

## Observaciones

La primera impresión no separa filas (sale todo en una línea). Para la diagonal alcanza un solo for con numeros[i][i]; el doble for con i == j es O(n²) innecesario.

## Compilar y ejecutar

```bash
g++ main.cpp -o matrices_ejercicio_02
./matrices_ejercicio_02
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_mat_diagonal() / utn_mat_trace() — `include/utn_mat.h`.
