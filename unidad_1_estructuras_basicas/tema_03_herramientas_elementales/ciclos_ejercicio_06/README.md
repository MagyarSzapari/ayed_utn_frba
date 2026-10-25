# Ciclos — Ejercicio 6: potencia x^y sin pow

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones exactas y no exactas) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_6` |

## Objetivo académico

Calcula x^y con enteros positivos mediante multiplicaciones sucesivas, validando la entrada con do-while.

## Estrategia de resolución

1. Validar con do-while que x > 0 e y > 0
2. Inicializar potencia = 1 y multiplicar por x y veces en un for
3. Mostrar el resultado

## Estructuras de datos utilizadas

- variables simples int
- acumulador multiplicativo (productoria)
- ciclo do-while (validación)
- ciclo for

## Observaciones

Desborda int con valores moderados (p. ej. 2^31). Usa conio.h/getch().

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_06
./ciclos_ejercicio_06
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_ipow() — `include/utn_math.h`.
