# Funciones — Ejercicio 6: plantilla maximo() de tres valores

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (generalidad de tipo) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Ejercicio6` |

## Objetivo académico

Plantilla de función con retorno genérico: maximo(x, y, z) devuelve el mayor de tres valores del mismo tipo. Se prueba con tres letras (char) globales.

## Estrategia de resolución

1. pedirDatos() lee tres char globales
2. La plantilla compara con if / else if / else y guarda el máximo en una variable local de tipo T
3. Devolver el máximo y mostrarlo desde main

## Estructuras de datos utilizadas

- plantilla de función (template) con retorno genérico
- parámetros por valor
- variables globales char
- decisión encadenada (if/else if/else)

## Observaciones

BUG con empates: como usa comparaciones estrictas (>), si x == y y ambos son mayores que z cae en el else y devuelve z. Por ejemplo, ('b','b','a') devuelve 'a'. Debería usar >= o comparar de a dos.

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_ejercicio_06
./funciones_ejercicio_06
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_max3() / utn_algo_max_index() — `include/utn_math.h`, `include/utn_algo.h`.
