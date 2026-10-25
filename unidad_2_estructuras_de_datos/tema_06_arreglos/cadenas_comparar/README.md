# Cadenas: comparación con strcmp

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Comparar` |

## Objetivo académico

Compara dos cadenas inicializadas con el mismo literal usando strcmp, que compara carácter a carácter por código ASCII, e informa si son iguales (resultado 0).

## Estrategia de resolución

1. Inicializar palabra1 y palabra2 con "Hola"
2. Evaluar strcmp(palabra1, palabra2) == 0
3. Mostrar mensaje solo si son iguales

## Estructuras de datos utilizadas

- arreglos de char inicializados con literal
- strcmp de &lt;string.h>
- decisión simple (if)

## Observaciones

El comentario afirma que strcmp devuelve -1/0/1; el estándar solo garantiza un valor &lt; 0, 0 o > 0 (glibc devuelve la diferencia entre caracteres). No hay rama else.

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_comparar
./cadenas_comparar
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_compare() — `include/utn_str.h`.
