# Cadenas — Ejercicio 1: mostrar la cadena si supera los 10 caracteres

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Ejercicio1` |

## Objetivo académico

Lee una línea con cin.getline, calcula su longitud con strlen y decide según ella (más de 10 caracteres).

## Estrategia de resolución

1. Leer la cadena en char[300] con cin.getline
2. Calcular longitud = strlen(palabra)
3. Si longitud > 10, mostrar el resultado

## Estructuras de datos utilizadas

- arreglo char[300]
- strlen de &lt;string.h>
- variable int
- decisión simple (if)

## Observaciones

No cumple exactamente el enunciado: cuando la longitud supera 10 imprime la longitud, no la cadena.

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_ejercicio_01
./cadenas_ejercicio_01
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_* — `include/utn_str.h`.
