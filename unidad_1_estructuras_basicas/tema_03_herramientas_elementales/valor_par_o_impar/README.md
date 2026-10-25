# Determinar si un valor entero es par o impar

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección simple) |
| **Archivos** | [`valor_par_o_impar.cpp`](valor_par_o_impar.cpp) |
| **Origen en la cursada** | `Cursada/Valor_Par_o_Impar` |

## Objetivo académico

Lee un entero, calcula su resto módulo 2 y con una decisión simple (if-else) informa si es par o impar.

## Estrategia de resolución

1. Leer v (int)
2. Calcular resto = v % 2
3. if (resto == 0) informar par; else impar

## Estructuras de datos utilizadas

- variables simples int
- operador módulo %
- decisión simple if-else

## Observaciones

Proyecto Eclipse CDT. Mismo problema que Condicional_ejercicio_3 (que además trata el 0 aparte).

## Compilar y ejecutar

```bash
g++ valor_par_o_impar.cpp -o valor_par_o_impar
./valor_par_o_impar
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_is_even() — `include/utn_math.h`.
