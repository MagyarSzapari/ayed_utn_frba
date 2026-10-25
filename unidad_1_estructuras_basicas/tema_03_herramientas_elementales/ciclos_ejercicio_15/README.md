# Ciclos — Ejercicio 15: adivinar un número aleatorio entre 1 y 100

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones no exactas) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_15` |

## Objetivo académico

Ciclo indefinido con contador de intentos: genera un número aleatorio en [1,100] y orienta al usuario (mayor/menor) hasta que lo adivina.

## Estrategia de resolución

1. Sembrar el generador con srand(time(NULL)) y obtener dato = 1 + rand() % 100
2. do-while que lee un intento y muestra la pista 'menor' o 'mayor'
3. Contar intentos y repetir mientras numero != dato; al final mostrar la cantidad

## Estructuras de datos utilizadas

- variables simples int
- contador
- ciclo do-while
- decisiones simples (if)
- números pseudoaleatorios (srand/rand)

## Observaciones

Usa srand/rand sin incluir &lt;cstdlib>/&lt;stdlib.h> (compila porque iostream lo incluye de forma transitiva en MinGW; no es portable). Usa conio.h/getch().

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_15
./ciclos_ejercicio_15
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_rng_seed() / utn_rng_range() — `include/utn_math.h`.
