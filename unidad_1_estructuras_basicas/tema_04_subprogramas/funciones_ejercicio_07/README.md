# Funciones — Ejercicio 7: intercambio de dos variables por referencia

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (parámetros por referencia) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Ejercicio7` |

## Objetivo académico

Ejemplo clásico de parámetros por referencia (int&): intercambio(a, b) intercambia los valores de dos variables de main usando una auxiliar.

## Estrategia de resolución

1. Prototipo void intercambio(int&, int&)
2. Dentro de la función: aux = a; a = b; b = aux
3. Mostrar los valores en main antes y después de la llamada

## Estructuras de datos utilizadas

- procedimiento void
- parámetros por referencia (int&)
- variable auxiliar

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_ejercicio_07
./funciones_ejercicio_07
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_mem_swap() — `include/utn_common.h`.
