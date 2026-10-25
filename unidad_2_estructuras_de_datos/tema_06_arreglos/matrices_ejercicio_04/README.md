# Matrices — Ejercicio 4: matriz m×n de números aleatorios y su copia

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays multidimensionales: carga aleatoria y copia) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Matrices_Ejercicio4` |

## Objetivo académico

Llena una matriz m×n con números pseudoaleatorios entre 1 y 100 (srand(time(NULL)) + rand()), la copia a otra matriz y muestra la copia.

## Estrategia de resolución

1. Leer m y n
2. Inicializar la semilla con srand(time(NULL))
3. Llenar cada celda con 1 + rand() % 100
4. Copiar con doble for y mostrar la matriz nueva

## Estructuras de datos utilizadas

- arrays bidimensionales 100×100 con tamaño lógico m×n
- ciclos for anidados
- números pseudoaleatorios (rand/srand)

## Observaciones

Usa rand/srand sin incluir &lt;cstdlib> (compila por inclusión transitiva en MinGW; no portable). No valida m, n &lt;= 100.

## Compilar y ejecutar

```bash
g++ main.cpp -o matrices_ejercicio_04
./matrices_ejercicio_04
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_mat_fill_random() — `include/utn_mat.h`.
