# Ordenamiento por el método de burbuja

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U9 — Patrones algorítmicos (ordenamiento: burbuja) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ordenamientos_Metodo_Burbuja` |

## Objetivo académico

Ordena ascendentemente un array de 5 enteros comparando pares adyacentes e intercambiándolos si están desordenados, repitiendo n pasadas; luego lo muestra en orden ascendente y descendente (recorrido inverso).

## Estrategia de resolución

1. Doble for: n pasadas y, en cada una, comparar numeros[j] con numeros[j+1]
2. Intercambiar con variable auxiliar si numeros[j] > numeros[j+1]
3. Mostrar de 0 a 4 (ascendente) y de 4 a 0 (descendente)

## Estructuras de datos utilizadas

- array unidimensional
- ciclos for anidados
- intercambio con variable auxiliar
- decisión simple

## Observaciones

BUG: el for interno llega a j &lt; 5 y accede a numeros[j+1] = numeros[5], fuera de rango (puede meter basura en el array). Debe ser j &lt; n-1-i. No tiene corte temprano por bandera. La traza del comentario usa un array distinto ({4,5,2,1,3}) del que ordena el código ({4,1,2,3,5}).

## Compilar y ejecutar

```bash
g++ main.cpp -o ordenamiento_burbuja
./ordenamiento_burbuja
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_bubble_sort() — `include/utn_algo.h`.
