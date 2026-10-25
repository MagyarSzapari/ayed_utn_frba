# Funciones — Ejercicio 1: procedimiento multiplicar() de dos float

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (argumentos, parámetros, ámbito de variables) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Ejercicio1` |

## Objetivo académico

Procedimientos (void) con parámetros por valor y variables globales: pedirDatos() carga dos float globales y multiplicar(x, y) calcula y muestra el producto.

## Estrategia de resolución

1. Declarar prototipos de pedirDatos() y multiplicar(float, float)
2. pedirDatos() lee directamente sobre las variables globales x, y
3. multiplicar() recibe copias, calcula el producto en una variable local y lo muestra

## Estructuras de datos utilizadas

- variables globales float
- procedimientos void
- parámetros por valor
- variable local
- prototipos

## Observaciones

Los parámetros de multiplicar se llaman igual que las globales (x, y) y las ocultan dentro de la función: sirve para ver el ámbito local frente al global.

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_ejercicio_01
./funciones_ejercicio_01
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
