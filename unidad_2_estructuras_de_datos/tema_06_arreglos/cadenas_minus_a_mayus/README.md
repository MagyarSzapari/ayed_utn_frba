# Cadenas: minúsculas a mayúsculas con strupr

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Minus_a_Mayus` |

## Objetivo académico

Convierte in place una cadena a mayúsculas con strupr.

## Estrategia de resolución

1. Inicializar cadena1 con un literal en minúsculas
2. Aplicar strupr(cadena1)
3. Imprimir el resultado

## Estructuras de datos utilizadas

- arreglo de char inicializado con literal
- strupr

## Observaciones

strupr no es estándar (MSVC/MinGW).

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_minus_a_mayus
./cadenas_minus_a_mayus
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_to_upper() — `include/utn_str.h`.
