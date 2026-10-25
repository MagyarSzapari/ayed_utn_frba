# Arreglo unidimensional — apunte de sintaxis de vectores

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Arreglo_unidimensional` |

## Objetivo académico

Apunte teórico en comentarios sobre la declaración de arrays (tipo nombre[tamaño]), la inicialización con llaves y el acceso por índice desde 0. El código es solo un Hola Mundo.

## Estrategia de resolución

1. Comentario con ejemplos de declaración (int, char, float) e inicialización con lista
2. main imprime 'Hello world!' y espera una tecla con getch()

## Estructuras de datos utilizadas

- (teoría) array unidimensional
- salida estándar
- getch() de conio.h

## Observaciones

Sin código del tema (Hola Mundo de Code::Blocks). Typo en el comentario: 'tipo nomre[tamaño;]'. conio.h/getch() no son portables. Podría tratarse como apunte o README del tema.

## Compilar y ejecutar

```bash
g++ main.cpp -o arreglo_unidimensional
./arreglo_unidimensional
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
