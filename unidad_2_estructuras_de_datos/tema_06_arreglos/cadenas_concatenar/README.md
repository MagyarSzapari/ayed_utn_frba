# Cadenas: concatenación con strcpy y strcat

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Concatenar` |

## Objetivo académico

Arma una cadena nueva copiando la primera en un buffer con strcpy y añadiéndole la segunda al final con strcat.

## Estrategia de resolución

1. Copiar cadena1 en cadena3[30] con strcpy
2. Concatenar cadena2 al final de cadena3 con strcat
3. Imprimir el resultado

## Estructuras de datos utilizadas

- arreglos de char
- buffer destino char[30]
- strcpy/strcat de &lt;string.h>

## Observaciones

Bug: desborde de buffer de un byte. "Esto es una cadena" (18) + " de ejemplo." (12) = 30 caracteres más el '\0' = 31 bytes, y cadena3 es char[30].

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_concatenar
./cadenas_concatenar
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_concat() — `include/utn_str.h`.
