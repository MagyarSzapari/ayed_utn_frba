# Plantillas de funciones — valor absoluto genérico (mostrarAbs)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (generalidad de tipo: plantillas de función) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Plantillas` |

## Objetivo académico

Introduce las plantillas de función (template &lt;class T>) para escribir una sola función que sirva para int, float y double. Calcula y muestra el valor absoluto de tres números de distinto tipo.

## Estrategia de resolución

1. Declarar el prototipo con el prefijo template &lt;class TIPODEDATO> antes de main y definir la función después
2. mostrarAbs recibe el número por valor; si es negativo lo multiplica por -1 y lo imprime
3. Invocar la misma plantilla con int, float y double: el compilador deduce el tipo e instancia una versión por cada uno

## Estructuras de datos utilizadas

- plantilla de función (template &lt;class T>)
- prototipo + definición separada
- parámetro por valor
- decisión simple (if)
- variables int/float/double

## Observaciones

La función es void: muestra el resultado pero no lo retorna. Con INT_MIN, numero \*= -1 desborda.

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_plantillas
./funciones_plantillas
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: Generalidad de tipo con (void *, size_t, utn_cmp_fn) — `include/utn_algo.h`.
