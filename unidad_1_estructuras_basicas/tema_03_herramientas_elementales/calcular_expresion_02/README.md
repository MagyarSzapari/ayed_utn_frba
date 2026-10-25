# Calcular expresión 2: (a + b) / (c + d)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U4 — Tipos, operadores y expresiones (precedencia y uso de paréntesis) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Calcular_Expresion_2` |

## Objetivo académico

Traduce a C++ 'el cociente entre la suma de a más b y la suma de c más d', ejercitando el uso de paréntesis para forzar la precedencia.

## Estrategia de resolución

1. Leer a, b, c y d (float)
2. Evaluar expresion = (a + b) / (c + d)
3. Mostrar el resultado

## Estructuras de datos utilizadas

- variables simples float
- expresión aritmética con paréntesis
- asignación

## Observaciones

No valida c + d == 0 (división por cero, da inf/NaN).

## Compilar y ejecutar

```bash
g++ main.cpp -o calcular_expresion_02
./calcular_expresion_02
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
