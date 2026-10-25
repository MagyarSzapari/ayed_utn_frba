# Cadenas — Ejercicio 5: palabra palíndroma (capicúa)

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Ejercicio5` |

## Objetivo académico

Determina si una palabra es palíndroma copiándola, invirtiendo la copia con strrev y comparándola con strcmp contra el original.

## Estrategia de resolución

1. Leer la palabra en char[50]
2. Copiarla a cadena2 con strcpy e invertir la copia con strrev
3. Si strcmp(cadena1, cadena2) == 0, es palíndroma

## Estructuras de datos utilizadas

- dos arreglos char[50]
- strcpy / strrev / strcmp
- decisión if-else

## Observaciones

strrev no es estándar (solo MSVC/MinGW; no existe en glibc ni en C99). Distingue mayúsculas y no ignora espacios ni tildes, así que "Neuquen" o frases no se detectan. El mensaje dice "polindroma" en lugar de "palíndroma".

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_ejercicio_05
./cadenas_ejercicio_05
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_is_palindrome() — `include/utn_str.h`.
