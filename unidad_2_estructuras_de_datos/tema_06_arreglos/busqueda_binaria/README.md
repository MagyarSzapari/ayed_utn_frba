# Búsqueda binaria en un array ordenado

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U9 — Patrones algorítmicos (búsqueda binaria) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Busqueda_Binaria` |

## Objetivo académico

Busca un valor leído por teclado en un array de 5 enteros ordenado ascendentemente, partiendo el intervalo [inferior, superior] por la mitad y marcando el hallazgo con una bandera char 'V'/'F'.

## Estrategia de resolución

1. Inicializar inferior, superior y un contador de vueltas i
2. Mientras inferior &lt;= superior (y i &lt; 5), calcular mitad y comparar numeros[mitad] con el dato
3. Si coincide, flag = 'V' y salir con break; si no, mover superior o inferior a mitad
4. Informar la posición o que no se encontró

## Estructuras de datos utilizadas

- array unidimensional ordenado
- ciclo while con condición compuesta
- bandera char
- break
- decisiones simples

## Observaciones

BUGS de algoritmo: superior = 5 debería ser n-1 = 4; los límites se actualizan a mitad en lugar de mitad-1 / mitad+1, así que el intervalo no siempre se achica y el ciclo sería infinito sin el contador artificial i &lt; 5 (con arrays más grandes cortaría antes de encontrar). Los tres if no son excluyentes (no usa else if) y recalcula mitad dentro de cada rama. Con este array de 5 elementos encuentra todos los valores presentes.

## Compilar y ejecutar

```bash
g++ main.cpp -o busqueda_binaria
./busqueda_binaria
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_binary_search() / utn_algo_lower_bound() — `include/utn_algo.h`.
