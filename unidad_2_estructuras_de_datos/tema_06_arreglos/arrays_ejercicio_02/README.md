# Arrays — Ejercicio 2: producto acumulado de un vector

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays: recorrido) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Arrays_Ejercicio2` |

## Objetivo académico

Recorre un array fijo de 5 enteros y acumula la multiplicación de sus elementos con un acumulador inicializado en 1.

## Estrategia de resolución

1. Inicializar el array y producto = 1 (neutro de la multiplicación)
2. Recorrer con for multiplicando cada elemento
3. Mostrar el producto

## Estructuras de datos utilizadas

- array unidimensional int inicializado
- acumulador producto
- ciclo for

## Observaciones

Tamaño 5 hardcodeado. En int el producto desborda rápido con vectores más grandes.

## Compilar y ejecutar

```bash
g++ main.cpp -o arrays_ejercicio_02
./arrays_ejercicio_02
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_product_int() — `include/utn_algo.h`.
