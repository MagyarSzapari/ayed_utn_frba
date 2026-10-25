# Calcular expresión 1: (a / b) + 1

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U4 — Tipos, operadores y expresiones (precedencia y uso de paréntesis) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Calcular_Expresión_1` |

## Objetivo académico

Traduce a C++ la expresión 'el siguiente del cociente entre a y b', es decir (a/b)+1, leyendo a y b reales y mostrando el resultado.

## Estrategia de resolución

1. Leer a y b (float)
2. Evaluar expresion = (a / b) + 1
3. Mostrar el resultado

## Estructuras de datos utilizadas

- variables simples float
- expresión aritmética con paréntesis
- asignación

## Observaciones

Carpeta original con tilde (Calcular_Expresión_1). No valida b == 0 (con float da inf).

## Compilar y ejecutar

```bash
g++ main.cpp -o calcular_expresion_01
./calcular_expresion_01
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
