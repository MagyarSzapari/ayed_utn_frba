# Cadenas — Ejercicio 3: igualdad y orden alfabético de dos cadenas

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Ejercicio3` |

## Objetivo académico

Lee dos cadenas y con strcmp determina si son iguales o cuál es mayor en orden lexicográfico (por código ASCII).

## Estrategia de resolución

1. Leer ambas cadenas con cin.getline
2. Si strcmp == 0, son iguales
3. Si strcmp == 1, la primera es mayor; en otro caso, la segunda

## Estructuras de datos utilizadas

- dos arreglos char[300]
- strcmp
- decisión encadenada (if / else if / else)

## Observaciones

Bug de portabilidad: compara strcmp(...) == 1, pero el estándar solo garantiza un valor > 0 (con glibc puede devolver 2, 15, etc. y caería en la rama de la segunda cadena). Debería ser > 0. Llama a strcmp dos veces en lugar de guardar el resultado. La comparación es por ASCII y distingue mayúsculas ('Z' &lt; 'a').

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_ejercicio_03
./cadenas_ejercicio_03
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_compare() — `include/utn_str.h`.
