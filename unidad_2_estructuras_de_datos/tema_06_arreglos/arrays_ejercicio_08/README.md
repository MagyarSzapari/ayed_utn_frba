# Arrays — Ejercicio 8: copiar un vector duplicando sus valores

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (recorrido y copia) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Arrays_Ejercicio8` |

## Objetivo académico

Genera un segundo array con el doble de cada elemento del primero (recorrido con transformación elemento a elemento) y lo muestra.

## Estrategia de resolución

1. Recorrer numeros1 y guardar numeros1[i] \* 2 en numeros2[i]
2. Recorrer numeros2 e imprimir cada valor

## Estructuras de datos utilizadas

- dos arrays unidimensionales int
- ciclos for
- copia con transformación

## Observaciones

El comentario del enunciado está vacío; el título se dedujo del código.

## Compilar y ejecutar

```bash
g++ main.cpp -o arrays_ejercicio_08
./arrays_ejercicio_08
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_map_int() — `include/utn_algo.h`.
