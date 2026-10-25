# Arrays — Ejercicio 6: ¿hay un elemento igual a la suma del resto?

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (recorrido con acumulador y máximo) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Arrays_Ejercicio6` |

## Objetivo académico

Carga n enteros y determina si alguno es igual a la suma de los demás, usando que ese candidato tendría que ser el mayor y que x == S - x.

## Estrategia de resolución

1. Cargar el vector
2. En un recorrido acumular la suma total S y obtener el mayor
3. Comparar mayor == S - mayor e informar

## Estructuras de datos utilizadas

- array unidimensional
- acumulador
- patrón máximo
- ciclo for
- decisión compuesta

## Observaciones

El razonamiento 'solo el mayor puede ser la suma de los demás' vale solo con valores no negativos: con negativos falla (p. ej. {-3, -1, -2}: -3 = -1 + -2 y no es el mayor). mayor arranca en 0, así que con todos negativos tampoco funciona. Solución general: buscar i con 2\*a[i] == S. No valida n &lt;= 100.

## Compilar y ejecutar

```bash
g++ main.cpp -o arrays_ejercicio_06
./arrays_ejercicio_06
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_balance_index_int() — `include/utn_algo.h`.
