# Condicional — Ejercicio 2: mayor de tres números

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección simple encadenada, operadores lógicos) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_ejercicio_2` |

## Objetivo académico

Lee tres enteros y determina el mayor con una decisión encadenada cuyas condiciones combinan comparaciones con el operador lógico && (AND).

## Estrategia de resolución

1. Leer los tres números
2. Si los tres son iguales, informarlo
3. else if numero1 supera a los otros dos, es el mayor; idem numero2
4. En otro caso informar numero3

## Estructuras de datos utilizadas

- variables simples int
- operadores relacionales
- operador lógico &&
- decisión encadenada if-else if-else

## Observaciones

Bug: con empate en el máximo sin que los tres sean iguales (p. ej. 5 5 3) ninguna comparación estricta (>) se cumple y cae en el else, informando 3 como mayor. Debería usar >=.

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_ejercicio_02
./condicional_ejercicio_02
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_max3() — `include/utn_math.h`.
