# Matrices — Ejercicio 7: ¿la matriz es simétrica?

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays multidimensionales: simetría) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Matrices_Ejercicio7` |

## Objetivo académico

Carga una matriz m×n y determina si es simétrica: tiene que ser cuadrada y cumplir numeros[i][j] == numeros[j][i] para todo i, j. Usa una bandera char.

## Estrategia de resolución

1. Cargar la matriz
2. Si m == n, comparar con la traspuesta y poner flag = 'F' ante la primera diferencia
3. Informar 'NO simétrica' si flag == 'F' o si no es cuadrada

## Estructuras de datos utilizadas

- array bidimensional 100×100
- ciclos for anidados
- bandera char
- break
- operadores lógicos

## Observaciones

El break solo corta el for interno (el externo sigue recorriendo: ineficiente, no incorrecto). Compara cada par dos veces y la diagonal consigo misma; alcanza con j > i. No valida m, n &lt;= 100.

## Compilar y ejecutar

```bash
g++ main.cpp -o matrices_ejercicio_07
./matrices_ejercicio_07
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_mat_is_symmetric() — `include/utn_mat.h`.
