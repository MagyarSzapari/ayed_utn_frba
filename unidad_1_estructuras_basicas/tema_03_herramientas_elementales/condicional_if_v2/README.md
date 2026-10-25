# Condicional if-else v2: número secreto con !=

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección simple) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_if_v.2` |

## Objetivo académico

Variante de Condicional_if que usa la condición negada (numero != dato) e invierte las ramas, mostrando que ambas formas son equivalentes.

## Estrategia de resolución

1. Definir dato = 5
2. Leer numero
3. if (numero != dato) informar fallo; else informar acierto

## Estructuras de datos utilizadas

- variables simples int
- operador relacional !=
- decisión simple if-else

## Observaciones

Mismo comportamiento que Condicional_if.

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_if_v2
./condicional_if_v2
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
