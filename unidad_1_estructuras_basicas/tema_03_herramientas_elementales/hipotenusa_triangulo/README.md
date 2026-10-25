# Hipotenusa de un triángulo rectángulo

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U4 — Tipos, operadores y expresiones |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Hipotenusa_Triangulo` |

## Objetivo académico

Lee los dos catetos de un triángulo rectángulo y calcula la hipotenusa por Pitágoras usando sqrt y pow de &lt;math.h>.

## Estrategia de resolución

1. Leer cateto1 y cateto2 (float)
2. Calcular hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2))
3. Mostrar el resultado

## Estructuras de datos utilizadas

- variables simples float
- funciones de biblioteca &lt;math.h> (sqrt, pow)
- expresión aritmética

## Observaciones

No valida catetos negativos.

## Compilar y ejecutar

```bash
g++ main.cpp -o hipotenusa_triangulo
./hipotenusa_triangulo
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_hypotenuse() — `include/utn_math.h`.
