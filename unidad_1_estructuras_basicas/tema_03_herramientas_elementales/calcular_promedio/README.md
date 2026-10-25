# Promedio de las notas de 4 alumnos

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U4 — Tipos, operadores y expresiones (división entera) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Calcular_Promedio` |

## Objetivo académico

Lee las notas finales de 4 alumnos en variables separadas y calcula su promedio aritmético.

## Estrategia de resolución

1. Leer 4 notas enteras en alumno1..alumno4
2. Sumar y dividir por 4
3. Mostrar el promedio

## Estructuras de datos utilizadas

- variables simples int
- expresión aritmética
- asignación

## Observaciones

Bug de tipos: promedio es int y la suma se divide por el literal 4, así que es división entera y se truncan los decimales (p. ej. 7, 8, 8, 8 da 7 en vez de 7.75).

## Compilar y ejecutar

```bash
g++ main.cpp -o calcular_promedio
./calcular_promedio
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_mean_int() — `include/utn_algo.h`.
