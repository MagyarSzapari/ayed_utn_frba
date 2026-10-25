# Búsqueda secuencial con bandera

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U9 — Patrones algorítmicos (búsqueda lineal) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Busqueda_Secuencial` |

## Objetivo académico

Busca un entero leído por teclado recorriendo un array de 5 elementos desde la posición 0 hasta encontrarlo o llegar al final, controlando el ciclo con una bandera char.

## Estrategia de resolución

1. Inicializar i = 0 y flag = 'F'
2. Mientras flag == 'F' e i &lt; 5: si array[i] == dato poner flag = 'V'; incrementar i
3. Informar la posición como i-1 (i ya se incrementó después de encontrar)

## Estructuras de datos utilizadas

- array unidimensional
- ciclo while con condición compuesta
- bandera char

## Observaciones

Correcto. Comentario inicial con un '/\*//' sobrante. La variante con for + break está en Busqueda_Secuencial_Alternativa.

## Compilar y ejecutar

```bash
g++ main.cpp -o busqueda_secuencial
./busqueda_secuencial
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_linear_search() — `include/utn_algo.h`.
