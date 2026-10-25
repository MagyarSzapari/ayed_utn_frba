# Ciclos — Ejercicio 10: suma de factoriales 1! + 2! + ... + n!

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones exactas: for) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_10` |

## Objetivo académico

Combina productoria y acumulador en un solo ciclo: el factorial de cada término se obtiene del anterior y se suma.

## Estrategia de resolución

1. Leer n
2. En cada vuelta i: factorial \*= i (reusa el factorial anterior)
3. Acumular suma += factorial y mostrarla al final

## Estructuras de datos utilizadas

- variables simples int
- acumulador
- acumulador multiplicativo (productoria)
- ciclo for

## Observaciones

int desborda para n > 12. Usa conio.h/getch().

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_10
./ciclos_ejercicio_10
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
