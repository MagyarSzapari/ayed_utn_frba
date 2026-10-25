# Funciones — Ejercicio 3: procedimiento funcionPotencia() base^exponente

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (argumentos y parámetros) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Ejercicio3` |

## Objetivo académico

Encapsula en un procedimiento el cálculo de una potencia entera por multiplicaciones sucesivas (sin pow) y muestra el resultado.

## Estrategia de resolución

1. pedirDatos() lee la base y el exponente en variables globales
2. funcionPotencia(int x, int y) acumula resultado \*= x, y veces, en un long local
3. Mostrar el resultado dentro del procedimiento

## Estructuras de datos utilizadas

- variables globales int
- procedimientos void
- parámetros por valor
- acumulador multiplicativo long
- ciclo for

## Observaciones

No valida que el exponente sea positivo (con y &lt;= 0 devuelve 1). Repite la lógica de Ciclos_ejercicio_6, ahora dentro de una función.

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_ejercicio_03
./funciones_ejercicio_03
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_ipow() — `include/utn_math.h`.
