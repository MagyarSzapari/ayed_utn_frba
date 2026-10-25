# Ciclos — Ejercicio 7: suma 1 + 2 + ... + n

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones exactas: for) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_7` |

## Objetivo académico

Acumulador en un for exacto: lee n y calcula la suma de los primeros n naturales.

## Estrategia de resolución

1. Leer n
2. for de i = 1 a n acumulando suma += i
3. Mostrar la suma

## Estructuras de datos utilizadas

- variables simples int
- acumulador
- ciclo for

## Observaciones

No valida n (con n &lt;= 0 devuelve 0). Usa conio.h/getch().

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_07
./ciclos_ejercicio_07
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
