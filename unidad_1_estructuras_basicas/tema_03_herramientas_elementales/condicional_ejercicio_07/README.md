# Condicional — Ejercicio 7: edad en el rango [18; 25]

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección simple, operadores lógicos) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_ejercicio_7` |

## Objetivo académico

Lee una edad entera e indica si pertenece al intervalo cerrado [18; 25] combinando dos comparaciones con &&.

## Estrategia de resolución

1. Leer edad
2. if (edad >= 18 && edad &lt;= 25) informar dentro del rango
3. else informar fuera del rango

## Estructuras de datos utilizadas

- variable simple int
- operadores relacionales
- operador lógico &&
- decisión simple if-else

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_ejercicio_07
./condicional_ejercicio_07
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_in_range() — `include/utn_math.h`.
