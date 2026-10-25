# Estructuras — Ejercicio 3 (v2): mayor y menor sueldo con moneda elegida

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (struct); U9 búsqueda de máximo/mínimo |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Estructuras_Ejercicio3_v.2` |

## Objetivo académico

Variante del ejercicio 3 que además pide al usuario un símbolo de moneda y lo muestra junto a los sueldos máximo y mínimo encontrados en el arreglo de structs.

## Estrategia de resolución

1. Leer N y un char con la moneda
2. Cargar los empleados y buscar en la misma pasada las posiciones de máximo y mínimo
3. Mostrar ambos sueldos seguidos de la moneda

## Estructuras de datos utilizadas

- struct
- arreglo de structs [100] (global)
- variable char
- ciclo for
- búsqueda de máximo y mínimo con posición

## Observaciones

Copia de Estructuras_Ejercicio3 con el agregado de la moneda; hereda los mismos problemas (no valida N &lt;= 100, centinela 999999.99, cin.ignore sobrante tras getline). moneda es un solo char: de "USD" solo guarda la 'U' (el resto lo descarta el cin.ignore del for).

## Compilar y ejecutar

```bash
g++ main.cpp -o estructuras_ejercicio_03_v2
./estructuras_ejercicio_03_v2
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_max_index() / utn_algo_min_index() con comparador de struct — `include/utn_algo.h`.
