# Ciclos — Ejercicio 3: suma de los cuadrados de los 10 primeros naturales

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones exactas: for) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_3` |

## Objetivo académico

Acumulador dentro de un ciclo exacto: calcula 1² + 2² + ... + 10².

## Estrategia de resolución

1. for de i = 1 a 10
2. Calcular cuadrado = i \* i y acumularlo con suma += cuadrado
3. Mostrar la suma final

## Estructuras de datos utilizadas

- variables simples int
- acumulador
- ciclo for

## Observaciones

Usa conio.h/getch() (no estándar).

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_03
./ciclos_ejercicio_03
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
