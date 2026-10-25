# Ciclos — Ejercicio 4: temperatura media, máxima y mínima del día

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones exactas: for) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_4` |

## Objetivo académico

Lee temperaturas tomadas cada 4 horas y calcula promedio, máximo y mínimo. Ejercita acumulador y búsqueda de máximo/mínimo dentro de un ciclo con paso distinto de 1.

## Estrategia de resolución

1. for con i de 0 a 24 en pasos de 4, leyendo una temperatura por vuelta
2. Acumular las temperaturas para el promedio
3. Actualizar máximo y mínimo con comparaciones if contra los valores actuales
4. Dividir la suma por 6 para obtener la media

## Estructuras de datos utilizadas

- variables simples float
- acumulador
- máximo/mínimo
- ciclo for con paso 4
- decisión simple (if)

## Observaciones

BUG: el for va de 0 a 24 inclusive con paso 4, así que lee 7 temperaturas (0,4,8,12,16,20,24) pero divide por 6, y la media sale mal (debería ser i&lt;24 o dividir por 7). Además el máximo arranca en 0, lo que falla si todas las temperaturas son negativas, y el mínimo arranca en un 999 arbitrario; sería más robusto inicializar ambos con la primera lectura. Usa conio.h/getch().

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_04
./ciclos_ejercicio_04
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
