# Ciclo while (v2): cuenta regresiva del 10 al 1

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones no exactas: while) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclo_while_v.2` |

## Objetivo académico

Variante del ejemplo de while con variable de control decreciente: muestra los enteros del 10 al 1. Introduce getch() de conio.h para pausar la consola.

## Estrategia de resolución

1. Inicializar i en 10
2. Mientras i >= 1, mostrar i y decrementarla con i--
3. Pausar al final con getch() hasta que se presione una tecla

## Estructuras de datos utilizadas

- variable simple int
- variable de control decreciente
- ciclo while
- salida estándar (cout)

## Observaciones

Usa conio.h/getch(), que no es estándar (solo Windows/MinGW/Borland).

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclo_while_v2
./ciclo_while_v2
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
