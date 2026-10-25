# Condicional if-else: adivinar el número secreto (==)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección simple) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_if` |

## Objetivo académico

Introduce la sentencia if-else (su sintaxis está documentada en el comentario inicial): compara el número ingresado con un número secreto fijo (5) usando == e informa si se acertó.

## Estrategia de resolución

1. Definir dato = 5 como número secreto
2. Leer numero
3. if (numero == dato) informar acierto; else informar fallo

## Estructuras de datos utilizadas

- variables simples int
- operador relacional ==
- decisión simple if-else

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_if
./condicional_if
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
