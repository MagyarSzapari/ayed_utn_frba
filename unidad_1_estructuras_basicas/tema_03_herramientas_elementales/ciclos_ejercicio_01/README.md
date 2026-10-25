# Ciclos — Ejercicio 1: tabla de multiplicar de un número del 1 al 10

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones exactas y no exactas) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_1` |

## Objetivo académico

Combina un do-while de validación de entrada con un for exacto: lee un entero en [1,10] y muestra su tabla de multiplicar.

## Estrategia de resolución

1. Validar la entrada con do-while repitiendo mientras numero &lt; 1 || numero > 10
2. Recorrer i con un for y mostrar numero \* i en cada vuelta

## Estructuras de datos utilizadas

- variables simples int
- ciclo do-while (validación)
- ciclo for
- operador lógico OR (||)

## Observaciones

La tabla se muestra hasta i=20 (no hasta 10, que es lo habitual); el enunciado no lo fija.

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_01
./ciclos_ejercicio_01
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
