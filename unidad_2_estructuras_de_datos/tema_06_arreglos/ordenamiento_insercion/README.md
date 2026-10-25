# Ordenamiento por el método de inserción

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U9 — Patrones algorítmicos (ordenamiento: inserción) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ordenamientos_Metodo_por_Inserción` |

## Objetivo académico

Ordena un array de 5 enteros tomando cada elemento como 'auxiliar' y corriendo a la derecha los mayores que él hasta encontrar su lugar (como ordenar cartas); luego lo muestra ascendente y descendente.

## Estrategia de resolución

1. Para cada i guardar auxiliar = numeros[i] y posicion = i
2. Mientras posicion > 0 y numeros[posicion-1] > auxiliar, correr el elemento a la derecha y decrementar posicion
3. Colocar auxiliar en numeros[posicion]
4. Mostrar el array en ambos órdenes

## Estructuras de datos utilizadas

- array unidimensional
- for con while anidado de condición compuesta
- desplazamiento de elementos
- variable auxiliar

## Observaciones

Correcto (el for arranca en i = 0: una vuelta inútil pero inocua). La carpeta original tiene tilde en el nombre.

## Compilar y ejecutar

```bash
g++ main.cpp -o ordenamiento_insercion
./ordenamiento_insercion
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_insertion_sort() — `include/utn_algo.h`.
