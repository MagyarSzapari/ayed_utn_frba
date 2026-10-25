# Cadenas: invertir con strrev

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Invertir` |

## Objetivo académico

Invierte in place el contenido de un arreglo de char con strrev y lo muestra.

## Estrategia de resolución

1. Inicializar cadena1 con "Marco Aurelio"
2. Aplicar strrev(cadena1)
3. Imprimir la cadena invertida

## Estructuras de datos utilizadas

- arreglo de char inicializado con literal
- strrev

## Observaciones

strrev no es estándar: solo existe en MSVC/MinGW (no compila con gcc/glibc ni en C99 estricto).

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_invertir
./cadenas_invertir
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_reverse() — `include/utn_str.h`.
