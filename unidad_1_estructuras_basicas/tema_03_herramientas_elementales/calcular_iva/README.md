# Precio de un producto con IVA (21 %)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U4 — Tipos, operadores y expresiones |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Calcular_IVA` |

## Objetivo académico

Lee el precio de un producto y muestra el precio final al aplicarle un IVA del 21 %, ejercitando asignación y expresiones con porcentajes.

## Estrategia de resolución

1. Definir porcentajeIVA = 0.21
2. Leer el precio (float)
3. Reasignar precio = precio + precio \* porcentajeIVA
4. Mostrar el precio final

## Estructuras de datos utilizadas

- variables simples float
- asignación (reutiliza la misma variable)
- expresión aritmética

## Observaciones

La tasa está en una variable común en lugar de una constante; se sobrescribe precio con el valor final.

## Compilar y ejecutar

```bash
g++ main.cpp -o calcular_iva
./calcular_iva
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_add_percent_cents() — `include/utn_math.h`.
