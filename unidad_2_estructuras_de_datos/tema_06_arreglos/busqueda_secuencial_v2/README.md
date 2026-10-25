# Búsqueda secuencial — variante con for y break

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U9 — Patrones algorítmicos (búsqueda lineal) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Busqueda_Secuencial_Alternativa` |

## Objetivo académico

La misma búsqueda lineal que Busqueda_Secuencial, pero con un for que corta con break al encontrar el dato y una bandera int 0/1; el índice del for queda en la posición encontrada.

## Estrategia de resolución

1. Recorrer con for i de 0 a 4
2. Si array[i] == dato, encontrado = 1 y break
3. Usar i fuera del for como posición encontrada

## Estructuras de datos utilizadas

- array unidimensional
- ciclo for con break
- bandera int

## Observaciones

Correcto. Es una variante del mismo algoritmo (carpeta original 'Alternativa'); se nombra _v2.

## Compilar y ejecutar

```bash
g++ main.cpp -o busqueda_secuencial_v2
./busqueda_secuencial_v2
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_linear_search() — `include/utn_algo.h`.
