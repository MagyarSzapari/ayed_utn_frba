# Ciclos — Ejercicio 5: sumar positivos hasta leer un valor en [20,30] o un cero

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones no exactas) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_5` |

## Objetivo académico

Ciclo indefinido con condición de corte compuesta: lee enteros hasta que uno caiga en el rango [20,30] o sea 0, y acumula los mayores que cero.

## Estrategia de resolución

1. do-while que lee un número por vuelta
2. Si numero > 0, acumularlo en suma
3. Continuar mientras (numero &lt; 20 || numero > 30) && numero != 0

## Estructuras de datos utilizadas

- variables simples int
- acumulador
- ciclo do-while
- condición compuesta (&&, ||)
- decisión simple (if)

## Observaciones

El valor que corta el ciclo, si está en [20,30], también se suma (el enunciado es ambiguo al respecto). Usa conio.h/getch().

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_05
./ciclos_ejercicio_05
```

> Incluye `conio.h` (`getch()`), que solo existe en compiladores de Windows (MinGW, Borland, MSVC).

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
