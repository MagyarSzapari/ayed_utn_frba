# Cadenas: longitud con strlen

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Longitud` |

## Objetivo académico

Mide la longitud de una cadena C (cantidad de caracteres antes del '\0') con strlen.

## Estrategia de resolución

1. Inicializar palabra con "Hola Mundo"
2. longitud = strlen(palabra)
3. Mostrar la longitud

## Estructuras de datos utilizadas

- arreglo de char inicializado con literal
- variable int
- strlen

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_longitud
./cadenas_longitud
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_length() — `include/utn_str.h`.
