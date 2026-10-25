# Ciclos — Ejercicio 12: serie alternada 1 - 2 + 3 - 4 + ... ± n

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones exactas: for) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_12` |

## Objetivo académico

Calcula la serie alternada separándola en dos sumas parciales (impares y pares) con dos for de paso 2 y restándolas.

## Estrategia de resolución

1. Leer n
2. Primer for (i = 1, 3, 5, ...) acumulando los impares hasta n
3. Segundo for (j = 2, 4, 6, ...) acumulando los pares hasta n
4. Resultado = suma de impares - suma de pares

## Estructuras de datos utilizadas

- variables simples int
- acumuladores
- dos ciclos for con paso 2

## Observaciones

Funciona; se podría resolver con un único ciclo alternando el signo. Usa conio.h/getch().

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_12
./ciclos_ejercicio_12
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
