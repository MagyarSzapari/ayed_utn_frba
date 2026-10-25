# Condicional — Ejercicio 1: mayor de dos números

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección simple encadenada) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_ejercicio_1` |

## Objetivo académico

Lee dos enteros y determina cuál es el mayor, contemplando el caso de igualdad, con una decisión encadenada if / else if / else.

## Estrategia de resolución

1. Leer numero1 y numero2
2. if iguales informar igualdad
3. else if numero1 > numero2 informar numero1
4. else informar numero2

## Estructuras de datos utilizadas

- variables simples int
- operadores relacionales
- decisión encadenada if-else if-else

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_ejercicio_01
./condicional_ejercicio_01
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_max2() — `include/utn_math.h`.
