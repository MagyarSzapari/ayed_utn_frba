# Cadenas — Ejercicio 6: pasar dos cadenas a mayúsculas y compararlas

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Ejercicio6` |

## Objetivo académico

Normaliza dos cadenas a mayúsculas con strupr y las compara con strcmp, logrando una comparación que no distingue mayúsculas de minúsculas.

## Estrategia de resolución

1. Leer dos cadenas en char[50]
2. Convertir ambas con strupr (in place)
3. Comparar con strcmp == 0 e informar si son iguales o no

## Estructuras de datos utilizadas

- dos arreglos char[50]
- strupr / strcmp
- decisión if-else

## Observaciones

strupr no es estándar (MSVC/MinGW). Modifica las cadenas originales y muestra las versiones en mayúsculas, no lo que ingresó el usuario.

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_ejercicio_06
./cadenas_ejercicio_06
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_compare_ci() — `include/utn_str.h`.
