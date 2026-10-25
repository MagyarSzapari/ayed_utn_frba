# Funciones — Ejercicio 5: plantilla de función despliegue()

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (generalidad de tipo) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Ejercicio5` |

## Objetivo académico

Primer uso de plantillas de función (template &lt;class T>): un único despliegue(T dato) muestra valores int, float, double y char.

## Estrategia de resolución

1. Declarar el prototipo con template &lt;class TIPODEDATO> antes de main
2. Invocar despliegue con cuatro tipos distintos; el compilador instancia una versión por tipo
3. Definir la plantilla después de main

## Estructuras de datos utilizadas

- plantilla de función (template)
- parámetro genérico por valor
- variables simples int/float/double/char

## Observaciones

Clasificado en tema_04 porque el foco es una plantilla de función (generalidad de tipo), no un TAD.

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_ejercicio_05
./funciones_ejercicio_05
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: Generalidad de tipo con (void *, size_t, utn_cmp_fn) — `include/utn_algo.h`.
