# Ciclos — Ejercicio 11: suma de potencias de 2 (2^1 + ... + 2^n)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones exactas: for) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_11` |

## Objetivo académico

Acumulador en un for exacto: calcula la suma de las n primeras potencias de 2 usando pow de math.h.

## Estrategia de resolución

1. Leer n
2. Para i = 1..n: potenciacion = pow(2, i) y acumular en suma
3. Mostrar la suma (que equivale a 2^(n+1) - 2)

## Estructuras de datos utilizadas

- variables simples int
- acumulador
- ciclo for
- función de biblioteca pow (math.h)

## Observaciones

pow devuelve double y se asigna a int (conversión implícita); sería más simple y exacto ir duplicando una variable (p \*= 2). int desborda para n >= 31. Usa conio.h/getch().

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_11
./ciclos_ejercicio_11
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
