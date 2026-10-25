# Ordenamiento por el método de selección

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U9 — Patrones algorítmicos (ordenamiento: selección) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ordenamientos_Metodo_por_Seleccion` |

## Objetivo académico

Ordena un array de 5 enteros buscando en cada pasada el índice del mínimo del subarray restante e intercambiándolo con la posición i; luego lo muestra ascendente y descendente.

## Estrategia de resolución

1. Para cada i suponer elementoMinimo = i
2. Recorrer j = i+1..n-1 actualizando el índice del mínimo
3. Intercambiar numeros[i] con numeros[elementoMinimo]
4. Mostrar el array en ambos órdenes

## Estructuras de datos utilizadas

- array unidimensional
- ciclos for anidados
- patrón mínimo por índice
- intercambio con variable auxiliar

## Observaciones

Correcto. La última pasada (i = 4) sobra e intercambia aunque elementoMinimo == i.

## Compilar y ejecutar

```bash
g++ main.cpp -o ordenamiento_seleccion
./ordenamiento_seleccion
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_selection_sort() — `include/utn_algo.h`.
