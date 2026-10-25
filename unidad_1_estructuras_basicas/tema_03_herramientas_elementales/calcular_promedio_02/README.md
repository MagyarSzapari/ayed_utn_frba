# Promedio 2: nota final como media ponderada (30/60/10)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U4 — Tipos, operadores y expresiones |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Calcular_Promedio_2` |

## Objetivo académico

Calcula la nota final de un estudiante como media ponderada de tres notas: práctica 30 %, teoría 60 % y participación 10 %.

## Estrategia de resolución

1. Leer las notas práctica, teórica y de participación (float)
2. Calcular final = practica\*0.3 + teorica\*0.6 + participacion\*0.1
3. Mostrar la nota final

## Estructuras de datos utilizadas

- variables simples float
- expresión aritmética
- asignación

## Observaciones

Incluye comentada una variante con operadores compuestos (\*=). La variable se llama final (identificador con significado especial en C++11, válido pero confuso).

## Compilar y ejecutar

```bash
g++ main.cpp -o calcular_promedio_02
./calcular_promedio_02
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_mean_int() — `include/utn_algo.h`.
