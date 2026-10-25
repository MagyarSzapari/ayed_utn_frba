# Arrays — Ejercicio 1: suma de los elementos de un vector

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays: recorrido) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Arreglos_Ejercicio1` |

## Objetivo académico

Primer recorrido de un array inicializado en la declaración: acumula la suma de sus 5 elementos y la muestra.

## Estrategia de resolución

1. Inicializar int numeros[] = {1,2,3,4,5}
2. Recorrer con for de 0 a 4 acumulando en suma
3. Mostrar la suma

## Estructuras de datos utilizadas

- array unidimensional int inicializado
- acumulador
- ciclo for

## Observaciones

Tamaño 5 hardcodeado en el for (no se calcula con sizeof). La carpeta original dice 'Arreglos' y el resto de la familia 'Arrays'; se unifica como arrays_ejercicio_NN.

## Compilar y ejecutar

```bash
g++ main.cpp -o arrays_ejercicio_01
./arrays_ejercicio_01
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_sum_int() — `include/utn_algo.h`.
