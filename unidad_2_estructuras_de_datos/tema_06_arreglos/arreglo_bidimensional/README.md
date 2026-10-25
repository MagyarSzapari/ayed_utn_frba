# Arreglo bidimensional — apunte de sintaxis de matrices

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays multidimensionales) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Arreglo_Bidimensional` |

## Objetivo académico

Apunte teórico en comentarios sobre la declaración de matrices (tipo nombre[nfilas][ncolumnas]), su inicialización lineal o por filas y el acceso [fila][columna]. El código es solo un Hola Mundo.

## Estrategia de resolución

1. Comentario con la sintaxis y ejemplos de inicialización ({1,2,3,4,5,6} y {{1,2,3},{4,5,6}})
2. main imprime 'Hello world!' y espera una tecla con getch()

## Estructuras de datos utilizadas

- (teoría) array bidimensional
- salida estándar
- getch() de conio.h

## Observaciones

Sin código del tema: es la plantilla Hola Mundo de Code::Blocks más un apunte. conio.h/getch() no son portables (solo Windows/MinGW). Podría tratarse como apunte o README del tema más que como ejercicio.

## Compilar y ejecutar

```bash
g++ main.cpp -o arreglo_bidimensional
./arreglo_bidimensional
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_mat_t — `include/utn_mat.h`.
