# Ciclos — Ejercicio 13: serie de Fibonacci iterativa

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones exactas: for) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_13` |

## Objetivo académico

Genera los primeros n términos de Fibonacci de forma iterativa, desplazando dos variables auxiliares en cada vuelta.

## Estrategia de resolución

1. Leer la cantidad de términos
2. En cada vuelta: z = x + y, mostrar z, luego x = y e y = z

## Estructuras de datos utilizadas

- variables simples int
- variables auxiliares de desplazamiento
- ciclo for

## Observaciones

BUG: con x=0, y=1 y mostrando z=x+y antes de desplazar, la salida es 1 2 3 5 8 ... y falta el primer 1 de la serie pedida (1 1 2 3 5 8). El comentario dice 'Finobacci'. Usa conio.h/getch().

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_13
./ciclos_ejercicio_13
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_fibonacci() — `include/utn_math.h`.
