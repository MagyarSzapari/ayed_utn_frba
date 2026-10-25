# Ciclos — Ejercicio 8: suma de los n primeros impares (1 + 3 + ... + 2n-1)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones exactas: for) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_8` |

## Objetivo académico

Ciclo for con paso 2: suma los impares desde 1 hasta 2n-1.

## Estrategia de resolución

1. Leer n
2. for con i de 1 hasta 2n-1 en pasos de 2, acumulando i
3. Mostrar la suma (que equivale a n²)

## Estructuras de datos utilizadas

- variables simples int
- acumulador
- ciclo for con paso 2

## Observaciones

Usa conio.h/getch().

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_08
./ciclos_ejercicio_08
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
