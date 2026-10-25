# Cadenas: copia con strcpy

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Copiar` |

## Objetivo académico

Copia el contenido de un arreglo de char a otro con strcpy, ya que las cadenas C no se pueden asignar con el operador =.

## Estrategia de resolución

1. Declarar nombre1 con un literal y nombre2 como char[20]
2. strcpy(nombre2, nombre1)
3. Imprimir nombre2

## Estructuras de datos utilizadas

- arreglos de char
- strcpy de &lt;string.h>

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_copiar
./cadenas_copiar
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_copy() — `include/utn_str.h`.
