# Condicional — Ejercicio 10: nombre del mes según su número

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección múltiple) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_ejercicio_10` |

## Objetivo académico

Lee un número entre 1 y 12 y con un switch muestra el nombre del mes correspondiente; default informa valores inválidos.

## Estrategia de resolución

1. Leer mes (int)
2. switch con 12 case, uno por mes, cada uno con break
3. default para valores fuera de 1..12

## Estructuras de datos utilizadas

- variable simple int
- selección múltiple switch-case con default

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_ejercicio_10
./condicional_ejercicio_10
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_date_month_name() — `include/utn_date.h`.
