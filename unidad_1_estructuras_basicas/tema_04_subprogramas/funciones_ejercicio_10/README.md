# Funciones — Ejercicio 10: calcularAnios(), de días desde 1/1/2000 a fecha

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (parámetros por referencia) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Ejercicio10` |

## Objetivo académico

A partir de una cantidad de días desde 1/1/2000, calcula año, mes y día con un modelo simplificado (años de 365 días, meses de 30) y devuelve los tres valores por referencia.

## Estrategia de resolución

1. anios = dias / 365 + 2000 y dias %= 365
2. meses = dias / 30 + 1 y dia = dias % 30 + 1
3. main imprime la fecha como dd/mm/aaaa

## Estructuras de datos utilizadas

- procedimiento void
- parámetro por valor
- parámetros por referencia (int&)
- división entera y módulo

## Observaciones

Caso borde: como 12 meses de 30 días suman 360 y el año tiene 365, los restos 360 a 364 dan mes 13. Los valores iniciales de main (2000, 1, 1) se sobrescriben y no se usan.

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_ejercicio_10
./funciones_ejercicio_10
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_date_from_days() / utn_date_day_of_year() — `include/utn_date.h`.
