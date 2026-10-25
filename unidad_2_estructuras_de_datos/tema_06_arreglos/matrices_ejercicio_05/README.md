# Matrices — Ejercicio 5: matriz traspuesta 3×3

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays multidimensionales: traspuesta) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Matrices_Ejercicio5` |

## Objetivo académico

Lee una matriz 3×3 y muestra la original y su traspuesta imprimiendo numeros[j][i] (índices intercambiados), sin construir una segunda matriz.

## Estrategia de resolución

1. Cargar la matriz con doble for
2. Mostrar la original recorriendo [i][j]
3. Mostrar la traspuesta recorriendo [j][i]

## Estructuras de datos utilizadas

- array bidimensional 3×3
- ciclos for anidados
- intercambio de índices

## Observaciones

El enunciado pide 'crear' la traspuesta, pero el código solo la imprime. Los valores salen sin separador.

## Compilar y ejecutar

```bash
g++ main.cpp -o matrices_ejercicio_05
./matrices_ejercicio_05
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_mat_transpose() / utn_mat_transpose_in_place() — `include/utn_mat.h`.
