# Arrays — Ejercicio 4: mostrar un vector en orden inverso

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (recorrido inverso) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Arrays_Ejercicio_4` |

## Objetivo académico

Carga n enteros por teclado y los muestra del último al primero, recorriendo el array con índice decreciente.

## Estrategia de resolución

1. Leer n y cargar el vector con un for ascendente
2. Recorrer con for desde n-1 hasta 0 e imprimir cada elemento

## Estructuras de datos utilizadas

- array unidimensional (físico 100, lógico n)
- ciclo for ascendente (carga)
- ciclo for descendente (salida)

## Observaciones

No valida n &lt;= 100. El enunciado dice 'definir' un vector, pero el código lo lee por teclado.

## Compilar y ejecutar

```bash
g++ main.cpp -o arrays_ejercicio_04
./arrays_ejercicio_04
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_reverse() — `include/utn_algo.h`.
