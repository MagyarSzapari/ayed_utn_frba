# Ciclos — Ejercicio 2: contar positivos hasta leer un cero

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones no exactas) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclos_ejercicio_2` |

## Objetivo académico

Ciclo indefinido con valor centinela (0) y contador condicional: lee enteros hasta que se ingresa 0 y cuenta cuántos fueron mayores que cero.

## Estrategia de resolución

1. do-while que lee un número por vuelta y termina cuando numero == 0
2. Si numero > 0, incrementar el contador
3. Al salir, mostrar el contador

## Estructuras de datos utilizadas

- variables simples int
- contador
- valor centinela
- ciclo do-while
- decisión simple (if)

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclos_ejercicio_02
./ciclos_ejercicio_02
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
