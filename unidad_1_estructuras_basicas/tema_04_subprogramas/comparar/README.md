# Funciones de comparación — criterios ascendente, descendente y por longitud

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (generalidad de criterio) |
| **Archivos** | [`comparar.cpp`](comparar.cpp) |
| **Origen en la cursada** | `Cursada/Comparar` |

## Objetivo académico

Define funciones comparadoras que retornan negativo / 0 / positivo (convención tipo strcmp) y las usa para decidir qué nombre precede al otro según tres criterios: alfabético ascendente, alfabético descendente y por longitud.

## Estrategia de resolución

1. Cada comparador retorna &lt;0, 0 o >0; los de string usan el ternario anidado a&lt;b?-1:a>b?1:0 (o invertido)
2. longitud(s) recorre el string hasta '\0' para el criterio por longitud
3. main lee dos nombres y por cada criterio informa con if / else if / else cuál precede o si son iguales
4. Las versiones para int (ascendente a-b, descendente b-a) y su uso quedaron comentadas

## Estructuras de datos utilizadas

- funciones comparadoras int f(T, T)
- operador condicional ternario
- decisión encadenada (if / else if / else)
- string
- ciclo while

## Observaciones

Comparadores int y su uso en main comentados. Con el criterio por longitud, dos nombres distintos del mismo largo se informan como 'iguales'. Es el precursor de Templates (ahí los comparadores pasan a ser argumentos).

## Compilar y ejecutar

```bash
g++ comparar.cpp -o comparar
./comparar
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_cmp_int() / utn_cmp_cstr() — `include/utn_common.h`.
