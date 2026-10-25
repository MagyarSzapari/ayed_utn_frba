# Tipos de datos simples en C++

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U3 — Tipos de datos primitivos y operadores |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Tipos_de_Datos` |

## Objetivo académico

Presenta los tipos de datos primitivos int, float, double y char: declara una variable de cada tipo inicializada con un literal y la muestra por salida estándar.

## Estrategia de resolución

1. Declarar e inicializar una variable int, una float, una double y una char
2. Mostrar cada valor con cout, uno por línea

## Estructuras de datos utilizadas

- variables simples int/float/double/char
- inicialización con literales
- salida estándar (cout)

## Observaciones

float numeroFlotante = 10.45 convierte implícitamente un literal double a float (pérdida de precisión menor, sin efecto visible).

## Compilar y ejecutar

```bash
g++ main.cpp -o tipos_de_datos
./tipos_de_datos
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
