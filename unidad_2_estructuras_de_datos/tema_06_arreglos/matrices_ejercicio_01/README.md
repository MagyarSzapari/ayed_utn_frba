# Matrices — Ejercicio 1: carga y muestra de una matriz m×n

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays multidimensionales; tamaño lógico/físico) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Matrices_Ejercicio1` |

## Objetivo académico

Carga por teclado una matriz de m filas por n columnas (tamaño físico 100×100) y la muestra fila por fila.

## Estrategia de resolución

1. Leer m y n
2. Doble for para cargar numeros[i][j] indicando la posición
3. Doble for para imprimir cada fila con salto de línea al final

## Estructuras de datos utilizadas

- array bidimensional int[100][100] con tamaño lógico m×n
- ciclos for anidados
- entrada/salida estándar

## Observaciones

No valida m, n &lt;= 100.

## Compilar y ejecutar

```bash
g++ main.cpp -o matrices_ejercicio_01
./matrices_ejercicio_01
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_mat_init() / utn_mat_print() — `include/utn_mat.h`.
