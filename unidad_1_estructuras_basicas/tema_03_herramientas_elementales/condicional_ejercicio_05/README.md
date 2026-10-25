# Condicional — Ejercicio 5: ¿es vocal minúscula?

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección múltiple) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_ejercicio_5` |

## Objetivo académico

Lee un carácter e indica si es una vocal minúscula usando switch sobre char, agrupando los cinco case de las vocales en una misma acción (fall-through intencional).

## Estrategia de resolución

1. Leer caracter (char)
2. case 'a' a 'u' encadenados sin break hasta la acción común
3. default: no es vocal minúscula

## Estructuras de datos utilizadas

- variable simple char
- selección múltiple switch con case agrupados (fall-through) y default

## Observaciones

Salidas sin endl.

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_ejercicio_05
./condicional_ejercicio_05
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_char_is_vowel() — `include/utn_str.h`.
