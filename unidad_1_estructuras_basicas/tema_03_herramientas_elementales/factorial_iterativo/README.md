# Factorial iterativo con while

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones: while controlado por contador) |
| **Archivos** | [`factorial.cpp`](factorial.cpp) |
| **Origen en la cursada** | `Cursada/Factorial` |

## Objetivo académico

Calcula n! de un entero leído por teclado con un ciclo while y un acumulador de producto, todo dentro de main. No es recursivo.

## Estrategia de resolución

1. Leer x
2. Inicializar factorial = 1 (double) e i = 2
3. Mientras i &lt;= x, multiplicar factorial por i e incrementar i
4. Mostrar el resultado

## Estructuras de datos utilizadas

- variables int/double
- acumulador producto
- contador
- ciclo while

## Observaciones

Verificado: es ITERATIVO, no recursivo, por eso va a tema_03 y no a tema_11. Para x negativo devuelve 1 sin avisar. El formato de salida queda 'El factorial es: 5! 120' (falta el '='). El encabezado Eclipse lista como autor a 'Marco Szapari Marcos'.

## Compilar y ejecutar

```bash
g++ factorial.cpp -o factorial_iterativo
./factorial_iterativo
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_factorial() — `include/utn_math.h`.
