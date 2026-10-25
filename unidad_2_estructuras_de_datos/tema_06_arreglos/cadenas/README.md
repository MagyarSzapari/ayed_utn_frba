# Cadenas: declaración, inicialización y lectura con getline

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas` |

## Objetivo académico

Presenta las cadenas estilo C como arreglos de char: inicialización con literal, inicialización carácter a carácter con lista de inicializadores y lectura de una línea desde teclado con cin.getline en un buffer de tamaño fijo.

## Estrategia de resolución

1. Declarar char nombre[] = "Marco" (el literal agrega el '\0' final)
2. Declarar char nombre2[] = {'M','a','r','c','o'} sin terminador y mostrar ambas
3. Leer nombre3[30] con cin.getline(nombre3, 30, '\n') e imprimirlo

## Estructuras de datos utilizadas

- arreglo de char (cadena C) inicializado con literal
- arreglo de char inicializado por lista de caracteres
- buffer char[30]
- cin.getline
- salida estándar (cout)

## Observaciones

Bug: nombre2 se inicializa con {'M','a','r','c','o'} sin '\0', así que cout &lt;&lt; nombre2 sigue leyendo más allá del arreglo (comportamiento indefinido; puede imprimir basura). Sirve como contraejemplo didáctico del terminador. Incluye &lt;string.h> sin usarlo.

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas
./cadenas
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_copy() / utn_str_length() — `include/utn_str.h`.
