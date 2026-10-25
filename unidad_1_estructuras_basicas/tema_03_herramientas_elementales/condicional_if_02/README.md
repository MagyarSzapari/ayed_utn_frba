# Condicional if-else 2: mayor que 5 (>)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección simple) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_if_2` |

## Objetivo académico

Usa if-else con el operador > para informar si el número ingresado es mayor o menor que 5.

## Estrategia de resolución

1. Definir dato = 5
2. Leer numero
3. if (numero > dato) informar mayor; else informar menor

## Estructuras de datos utilizadas

- variables simples int
- operador relacional >
- decisión simple if-else

## Observaciones

Error lógico: si se ingresa 5 informa 'es menor que 5' (el else no distingue la igualdad). Condicional_if_3 lo resuelve con >=.

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_if_02
./condicional_if_02
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
