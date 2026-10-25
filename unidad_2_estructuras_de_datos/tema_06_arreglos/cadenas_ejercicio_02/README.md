# Cadenas — Ejercicio 2: copiar una cadena ingresada a otro arreglo

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Ejercicio2` |

## Objetivo académico

Lee una cadena por teclado en un arreglo de char y copia todo su contenido a otro arreglo con strcpy.

## Estrategia de resolución

1. Leer cadena1[300] con cin.getline
2. strcpy(cadena2, cadena1)
3. Mostrar cadena2

## Estructuras de datos utilizadas

- dos arreglos char[300]
- strcpy
- cin.getline

## Observaciones

Prácticamente igual a Cadenas_Copiar, con entrada por teclado.

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_ejercicio_02
./cadenas_ejercicio_02
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_copy() — `include/utn_str.h`.
