# Cadenas — Ejercicio 8: convertir dos cadenas numéricas y sumarlas

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres); conversión de tipos (U4) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Ejercicio8` |

## Objetivo académico

Lee dos cadenas con un entero y un real, las convierte con atoi y atof y muestra la suma.

## Estrategia de resolución

1. Leer dos cadenas en char[21] con cin.getline
2. entero = atoi(cadena1) y real = atof(cadena2)
3. suma = entero + real y mostrarla

## Estructuras de datos utilizadas

- arreglos char[21]
- variables int y float
- atoi/atof
- acumulación simple

## Observaciones

Es Cadenas_Cad_a_Num más la suma. El int se promueve a float (pierde precisión con enteros grandes). Sin validación de entrada.

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_ejercicio_08
./cadenas_ejercicio_08
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_to_long() / utn_str_to_double() — `include/utn_str.h`.
