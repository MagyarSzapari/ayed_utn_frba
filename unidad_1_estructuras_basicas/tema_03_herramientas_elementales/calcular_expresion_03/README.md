# Calcular expresión 3: (a + b/c) / (d + e/f)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U4 — Tipos, operadores y expresiones (precedencia y uso de paréntesis) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Calcular_Expresion_3` |

## Objetivo académico

Traduce a C++ una fracción compuesta: el cociente entre (a + b/c) y (d + e/f), con paréntesis anidados para respetar la precedencia.

## Estrategia de resolución

1. Leer a, b, c, d, e y f (float)
2. Evaluar expresion = (a + (b/c)) / (d + (e/f))
3. Mostrar el resultado

## Estructuras de datos utilizadas

- variables simples float
- expresión aritmética con paréntesis anidados
- asignación

## Observaciones

No valida c == 0, f == 0 ni d + e/f == 0 (divisiones por cero).

## Compilar y ejecutar

```bash
g++ main.cpp -o calcular_expresion_03
./calcular_expresion_03
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
