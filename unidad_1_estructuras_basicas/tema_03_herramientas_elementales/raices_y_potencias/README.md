# Raíces y potencias: f(x, y) = sqrt(x) / (y² - 1)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U4 — Tipos, operadores y expresiones |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Raices_y_Potencias` |

## Objetivo académico

Evalúa la función 'raíz cuadrada de x sobre la diferencia entre y al cuadrado y 1' para x e y leídos por teclado, usando sqrt y pow de &lt;math.h>.

## Estrategia de resolución

1. Leer x e y (float)
2. Calcular funcion = sqrt(x) / (pow(y,2) - 1)
3. Mostrar el valor

## Estructuras de datos utilizadas

- variables simples float
- funciones de biblioteca &lt;math.h> (sqrt, pow)
- expresión aritmética con paréntesis

## Observaciones

No valida el dominio: x &lt; 0 da NaN y y = ±1 divide por cero (inf).

## Compilar y ejecutar

```bash
g++ main.cpp -o raices_y_potencias
./raices_y_potencias
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_isqrt() / utn_math_ipow() — `include/utn_math.h`.
