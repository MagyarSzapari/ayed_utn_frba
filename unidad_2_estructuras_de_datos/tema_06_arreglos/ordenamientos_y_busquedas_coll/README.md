# Ordenamientos y búsquedas sobre el TAD Coll&lt;int>

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U9 — Patrones algorítmicos (ordenamiento y búsqueda lineal/binaria); usa U7 abstracción (TAD Coll) |
| **Archivos** | [`ordenamientos_y_busquedas.cpp`](ordenamientos_y_busquedas.cpp) |
| **Origen en la cursada** | `Cursada/Ordenamientos_y_Busquedas` |

## Objetivo académico

Reimplementa ordenamientos (burbuja, burbuja mejorada y dos 'inserción' por extracción del mínimo) y búsquedas (lineal y binaria) operando sobre la colección Coll&lt;int> de la cátedra mediante collGetAt, collSetAt, collAdd y collRemoveAt.

## Estrategia de resolución

1. bubbleSort: doble for con intercambio vía collSetAt
2. improvedBubbleSort: repite pasadas mientras haya intercambios (bandera ordenado)
3. insertionSort / advancedInsertionSort: extraen el mínimo y lo agregan a una colección auxiliar o al final de la misma (en realidad es selección)
4. linealSearch y binarySearch retornan la posición o -1
5. Heap sort ('por Montículo') y radix sort ('por Raíz') quedaron solo como comentario

## Estructuras de datos utilizadas

- TAD Coll&lt;T> de la cátedra (colección genérica serializada en string)
- plantillas
- ciclos for/while anidados
- bandera bool
- parámetro por referencia

## Observaciones

NO COMPILA solo: usa Coll, coll, collSize, collGetAt, collSetAt, collAdd, collRemoveAt, stringToInt e intToString sin ningún #include. Las definiciones están en Practica_Parciales/src/biblioteca/tads/Coll.hpp y Practica_Parciales/src/biblioteca/funciones/strings.hpp. BUG en insertionSort: al encontrar un menor hace `minimo = posicion; posicion = i;` (debería ser minimo = elemento; posicion = i), así que no ordena. Los dos 'insertion sort' son en realidad selección. main no llama a ninguna función. Va a tema_06 por el foco en los algoritmos; alternativa: tema_05 por el uso del TAD.

## Compilar y ejecutar

```bash
g++ ordenamientos_y_busquedas.cpp -o ordenamientos_y_busquedas_coll
./ordenamientos_y_busquedas_coll
```

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
ordenamientos_y_busquedas.cpp:12:6: error: variable or field 'insertionSort' declared void
```

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_coll_sort() / utn_coll_find() — `include/utn_coll.h`.
