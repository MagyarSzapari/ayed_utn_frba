# Condicional — Ejercicio 9: entero a número romano

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección múltiple) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_ejercicio_9` |

## Objetivo académico

Convierte un entero a número romano: lo descompone en unidades, decenas, centenas y millares con % 10 y / 10, y con un switch por cada posición imprime el símbolo romano correspondiente (incluidas las formas sustractivas IV, IX, XL, XC, CD, CM).

## Estrategia de resolución

1. Leer numero
2. Extraer los 4 dígitos con % 10 y / 10 en pasos fijos (sin ciclo)
3. switch(millar) para M, MM, MMM
4. switch para centenas, decenas y unidades con sus tablas de símbolos

## Estructuras de datos utilizadas

- variables simples int
- operadores / y % para descomponer dígitos
- selección múltiple switch (4 en secuencia)

## Observaciones

No valida el rango 1..3999: con millares 4–9 no hay case y se omiten, desde 10000 se pierden dígitos, y 0 o negativos no imprimen nada (con negativos % da restos negativos). La salida no termina en endl.

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_ejercicio_09
./condicional_ejercicio_09
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_from_roman_value() — `include/utn_str.h`.
