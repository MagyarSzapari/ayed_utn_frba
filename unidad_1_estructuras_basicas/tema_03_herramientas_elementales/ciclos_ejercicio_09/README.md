# Ciclos — Ejercicio 9: factorial iterativo de n

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones exactas: for) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_9` |

## Objetivo académico

Productoria en un for exacto: calcula n! = 1·2·...·n de forma iterativa.

## Estrategia de resolución

1. Leer n
2. Inicializar factorial = 1 y multiplicar por i para i = 1..n
3. Mostrar el resultado

## Estructuras de datos utilizadas

- variables simples int
- acumulador multiplicativo (productoria)
- ciclo for

## Observaciones

int desborda para n > 12; no valida n negativo (devuelve 1). Usa conio.h/getch().

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_09
./ciclos_ejercicio_09
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_factorial() — `include/utn_math.h`.
