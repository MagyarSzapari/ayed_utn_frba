# Selección múltiple con switch: número entre 1 y 5

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección múltiple) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_switch` |

## Objetivo académico

Introduce la sentencia switch (su sintaxis está documentada en el comentario inicial): según el número ingresado entre 1 y 5 muestra un mensaje, y con default informa si está fuera de rango.

## Estrategia de resolución

1. Leer numero (int)
2. switch con un case por valor 1..5, cada uno con break
3. default para valores fuera de rango

## Estructuras de datos utilizadas

- variables simples int
- selección múltiple switch-case con break y default

## Observaciones

Los mensajes no terminan en endl (sin salto de línea final).

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_switch
./condicional_switch
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
