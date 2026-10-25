# Condicional — Ejercicio 6: vocal minúscula, mayúscula o no vocal

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección múltiple) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_ejercicio_6` |

## Objetivo académico

Extiende el ejercicio 5: con un switch sobre char clasifica el carácter ingresado como vocal minúscula, vocal mayúscula o no vocal, usando dos grupos de case.

## Estrategia de resolución

1. Leer caracter (char)
2. Grupo de case 'a'..'u' → vocal minúscula
3. Grupo de case 'A'..'U' → vocal mayúscula
4. default: no es vocal

## Estructuras de datos utilizadas

- variable simple char
- selección múltiple switch con case agrupados y default

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_ejercicio_06
./condicional_ejercicio_06
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_char_is_vowel() — `include/utn_str.h`.
