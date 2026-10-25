# Funciones (v2): mayor de dos números con prototipo

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (prototipos, argumentos y parámetros) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_v.2` |

## Objetivo académico

Misma lógica que 'Funciones', pero separa el prototipo (declaración antes de main) de la definición (después de main), presentada como mejor práctica.

## Estrategia de resolución

1. Declarar el prototipo int encontrarMaximo(int, int) antes de main
2. Invocar la función desde main
3. Definir la función después de main con if/else

## Estructuras de datos utilizadas

- prototipo de función
- función con retorno int
- parámetros por valor
- variable local
- decisión compuesta (if/else)

## Observaciones

Arrastra el mismo BUG que 'Funciones': falta 'return numeroMaximo;' (comportamiento indefinido). Es casi un duplicado de 'Funciones'; solo cambia la organización prototipo/definición.

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_v2
./funciones_v2
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_max2() — `include/utn_math.h`.
