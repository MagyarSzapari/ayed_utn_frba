# Ciclos — Ejercicio 16: descomposición en factores primos

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones anidadas) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_16` |

## Objetivo académico

Ciclos anidados: descompone un entero en factores primos por división sucesiva (trial division).

## Estrategia de resolución

1. for con divisor i desde 2, mientras numero > 1 (la condición controla el número, no el divisor)
2. while interno: mientras numero % i == 0, mostrar i y dividir numero por i
3. Los divisores compuestos nunca dividen porque sus factores primos ya se extrajeron antes

## Estructuras de datos utilizadas

- variables simples int
- ciclo for
- ciclo while anidado
- operador módulo (%)

## Observaciones

Con numero &lt;= 1 o negativo no imprime ningún factor. Usa conio.h/getch().

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_16
./ciclos_ejercicio_16
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_prime_factors() — `include/utn_math.h`.
