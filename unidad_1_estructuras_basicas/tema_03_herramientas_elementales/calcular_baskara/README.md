# Fórmula resolvente (Bhaskara) para ecuación cuadrática

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U4 — Tipos, operadores y expresiones |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Calcular_Baskara` |

## Objetivo académico

Lee los coeficientes a, b y c de una ecuación cuadrática y calcula sus dos raíces con la fórmula resolvente, usando sqrt y pow de &lt;math.h> dentro de expresiones aritméticas.

## Estrategia de resolución

1. Leer a, b y c (float)
2. Calcular x1 = (-b + sqrt(b² - 4ac)) / (2a)
3. Calcular x2 = (-b - sqrt(b² - 4ac)) / (2a)
4. Mostrar ambas raíces

## Estructuras de datos utilizadas

- variables simples float
- funciones de biblioteca &lt;math.h> (sqrt, pow)
- expresiones aritméticas con paréntesis

## Observaciones

No valida a == 0 (división por cero) ni discriminante negativo (sqrt de negativo da NaN; no contempla raíces complejas). El discriminante se calcula dos veces.

## Compilar y ejecutar

```bash
g++ main.cpp -o calcular_baskara
./calcular_baskara
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_quadratic() — `include/utn_math.h`.
