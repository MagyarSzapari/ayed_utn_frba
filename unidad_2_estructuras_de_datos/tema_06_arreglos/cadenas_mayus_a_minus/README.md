# Cadenas: mayúsculas a minúsculas con strlwr

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Mayus_a_Minus` |

## Objetivo académico

Convierte in place una cadena en mayúsculas a minúsculas con strlwr.

## Estrategia de resolución

1. Inicializar cadena1 con "ROMAE ANTIQUAE"
2. Aplicar strlwr(cadena1)
3. Imprimir el resultado

## Estructuras de datos utilizadas

- arreglo de char inicializado con literal
- strlwr

## Observaciones

strlwr no es estándar (MSVC/MinGW).

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_mayus_a_minus
./cadenas_mayus_a_minus
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_to_lower() — `include/utn_str.h`.
