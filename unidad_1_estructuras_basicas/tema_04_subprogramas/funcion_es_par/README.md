# Función esPar — función booleana como condición

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (funciones, argumentos y parámetros) |
| **Archivos** | [`funcion_es_par.cpp`](funcion_es_par.cpp) |
| **Origen en la cursada** | `Cursada/Funcion_EsPar` |

## Objetivo académico

Ejercita la definición e invocación de una función que retorna bool con un parámetro por valor. Lee un entero e informa si es par usando la llamada a la función directamente como condición del if.

## Estrategia de resolución

1. esPar(int v) retorna directamente la expresión v % 2 == 0
2. main lee el valor con cin
3. Usar esPar(v) como condición del if, sin compararla con true

## Estructuras de datos utilizadas

- función bool
- parámetro por valor
- operador módulo %
- decisión compuesta (if/else)
- entrada/salida estándar

## Observaciones

Sin bugs. Encabezado de Eclipse con la descripción genérica 'Hello World'.

## Compilar y ejecutar

```bash
g++ funcion_es_par.cpp -o funcion_es_par
./funcion_es_par
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_math_is_even() — `include/utn_math.h`.
