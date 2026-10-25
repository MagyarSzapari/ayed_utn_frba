# Arrays — Ejercicio 5: mayor elemento de un vector

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (recorrido con búsqueda del máximo) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Arrays_Ejercicio_5` |

## Objetivo académico

Carga n enteros por teclado y determina el máximo, actualizándolo durante la misma carga.

## Estrategia de resolución

1. Inicializar mayor con -2147483648 (mínimo de int)
2. En el ciclo de carga comparar cada valor con mayor y actualizarlo si es más grande
3. Mostrar el mayor

## Estructuras de datos utilizadas

- array unidimensional
- ciclo for
- decisión simple
- patrón máximo

## Observaciones

Inicializa con el literal -2147483648 (en C++ es un long long negado y convertido a int; mejor INT_MIN de &lt;climits> o el primer elemento). Con n = 0 informa INT_MIN. No valida n &lt;= 100. El array no hace falta para el cálculo.

## Compilar y ejecutar

```bash
g++ main.cpp -o arrays_ejercicio_05
./arrays_ejercicio_05
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_max_index() / utn_algo_min_index() — `include/utn_algo.h`.
