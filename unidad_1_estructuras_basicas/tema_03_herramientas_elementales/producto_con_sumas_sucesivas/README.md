# Producto de dos enteros mediante sumas sucesivas

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (composiciones iterativas) |
| **Archivos** | [`producto_con_sumas_sucesivas.cpp`](producto_con_sumas_sucesivas.cpp) |
| **Origen en la cursada** | `Cursada/Producto_con_Sumas_Sucesivas` |

## Objetivo académico

Calcula a\*b sin usar el operador \*, sumando b a un acumulador a veces dentro de un ciclo while controlado por contador.

## Estrategia de resolución

1. Leer a y b (int)
2. Inicializar acumulador suma_parcial = 0 y contador i = 0
3. Mientras i &lt; a: suma_parcial += b; i++
4. Mostrar a\*b = suma_parcial

## Estructuras de datos utilizadas

- variables simples int
- contador
- acumulador
- ciclo while (iteración de cantidad conocida)

## Observaciones

NO es recursivo: es iterativo con while, por eso va a tema_03. Si a &lt; 0 el ciclo no se ejecuta y el resultado es 0 (incorrecto para negativos). El producto directo a\*b quedó comentado. Proyecto Eclipse CDT.

## Compilar y ejecutar

```bash
g++ producto_con_sumas_sucesivas.cpp -o producto_con_sumas_sucesivas
./producto_con_sumas_sucesivas
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_mul_successive_sums() / utn_math_mul_shift_add() — `include/utn_math.h`.
