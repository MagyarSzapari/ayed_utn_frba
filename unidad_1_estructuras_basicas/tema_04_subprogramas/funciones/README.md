# Funciones: mayor de dos números (definición antes de main)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (definición, argumentos y parámetros) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones` |

## Objetivo académico

Primer ejemplo de definición e invocación de una función con parámetros por valor y valor de retorno: encontrarMaximo(x, y) devuelve el mayor de dos enteros. La función se define antes de main, sin prototipo.

## Estrategia de resolución

1. Definir int encontrarMaximo(int x, int y) antes de main
2. Comparar con if/else y guardar el mayor en una variable local
3. Invocar la función dentro del cout de main

## Estructuras de datos utilizadas

- función con retorno int
- parámetros por valor
- variable local
- decisión compuesta (if/else)

## Observaciones

BUG: encontrarMaximo no tiene 'return numeroMaximo;'. Una función no-void que termina sin return produce comportamiento indefinido, así que el valor mostrado es basura o coincide por casualidad.

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones
./funciones
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_max2() — `include/utn_math.h`.
