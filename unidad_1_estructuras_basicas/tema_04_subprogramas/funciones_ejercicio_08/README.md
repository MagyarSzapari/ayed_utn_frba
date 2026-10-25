# Funciones — Ejercicio 8: cambio() en billetes de dólar

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (parámetros por referencia) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Ejercicio8` |

## Objetivo académico

Usa parámetros por referencia para devolver varios resultados: cambio() descompone un monto en la menor cantidad de billetes de 100, 50, 20, 10, 5 y 1.

## Estrategia de resolución

1. El monto se pasa por valor y las seis cantidades por referencia
2. Algoritmo voraz: para cada denominación, cantidad = monto / d y monto %= d
3. main muestra las seis cantidades actualizadas

## Estructuras de datos utilizadas

- procedimiento void
- parámetro por valor
- seis parámetros por referencia (int&)
- división entera y módulo

## Observaciones

No valida montos negativos.

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_ejercicio_08
./funciones_ejercicio_08
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_change() — `include/utn_math.h`.
