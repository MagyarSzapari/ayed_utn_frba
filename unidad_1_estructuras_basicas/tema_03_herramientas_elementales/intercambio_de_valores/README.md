# Intercambio de valores entre dos variables

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U2 — Conceptos fundamentales de algoritmia (asignación, variable auxiliar) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Intercambio_de_Valores` |

## Objetivo académico

Intercambia el contenido de dos variables enteras x e y usando una variable auxiliar, ejercitando la semántica de la asignación (que sobrescribe el valor anterior).

## Estrategia de resolución

1. Leer x e y
2. Guardar x en aux
3. Asignar x = y y luego y = aux
4. Mostrar los nuevos valores

## Estructuras de datos utilizadas

- variables simples int
- variable auxiliar
- asignación

## Compilar y ejecutar

```bash
g++ main.cpp -o intercambio_de_valores
./intercambio_de_valores
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_mem_swap() — `include/utn_common.h`.
