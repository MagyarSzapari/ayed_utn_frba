# Cadenas — Ejercicio 7: nombre a minúsculas si empieza con A

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Ejercicio7` |

## Objetivo académico

Accede al primer carácter de la cadena por índice (nombreUsuario[0]) y, si es 'A', convierte toda la cadena a minúsculas con strlwr.

## Estrategia de resolución

1. Leer el nombre en char[30]
2. Si nombreUsuario[0] == 'A', aplicar strlwr
3. Mostrar el nombre (convertido o no)

## Estructuras de datos utilizadas

- arreglo char[30]
- acceso por índice a un carácter
- strlwr
- decisión if-else

## Observaciones

strlwr no es estándar (MSVC/MinGW). Solo chequea 'A' mayúscula (no 'a'). Ambas ramas hacen el mismo cout; podría ir fuera del if.

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_ejercicio_07
./cadenas_ejercicio_07
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_to_lower() — `include/utn_str.h`.
