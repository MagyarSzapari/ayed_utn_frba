# Ciclos — Ejercicio 14: estadísticas de aprobación de 5 alumnos en 3 exámenes

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones exactas y selección simple) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_14` |

## Objetivo académico

Ciclo exacto sobre 5 alumnos con tres contadores condicionales: cuenta cuántos aprobaron todos los exámenes, al menos uno y solo el último (aprobado = nota >= 6).

## Estrategia de resolución

1. for de 1 a 5 leyendo las tres notas de cada alumno
2. Contador a): las tres notas >= 6 (&&)
3. Contador b): alguna nota >= 6 (||)
4. Contador c): solo la tercera aprobada; al final se muestran los tres contadores

## Estructuras de datos utilizadas

- variables simples int
- contadores
- ciclo for
- decisiones simples con condiciones compuestas (&&, ||)

## Observaciones

BUG: la condición c) usa examen1&lt;=6 && examen2&lt;=6, así que un 6 en los primeros exámenes cuenta como desaprobado, lo que contradice a) y b), donde aprobar es >= 6. Debería ser &lt; 6. Usa conio.h/getch().

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_14
./ciclos_ejercicio_14
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
