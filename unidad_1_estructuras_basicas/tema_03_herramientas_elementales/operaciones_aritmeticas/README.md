# Operaciones aritméticas con dos enteros

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U3 — Tipos de datos primitivos y operadores (operadores aritméticos, división entera y módulo) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Operaciones_Aritmeticas` |

## Objetivo académico

Lee dos enteros y calcula su suma, diferencia, producto, cociente entero y resto, ejercitando los operadores aritméticos + - \* / % sobre int y la asignación.

## Estrategia de resolución

1. Leer num1 y num2 (int)
2. Asignar cada resultado a su propia variable (suma, diferencia, producto, cociente, resto)
3. Mostrar los cinco resultados

## Estructuras de datos utilizadas

- variables simples int
- operadores aritméticos + - \* / %
- asignación
- entrada/salida estándar

## Observaciones

No valida num2 == 0: num1 / num2 y num1 % num2 provocan división por cero (comportamiento indefinido, típicamente el programa aborta).

## Compilar y ejecutar

```bash
g++ main.cpp -o operaciones_aritmeticas
./operaciones_aritmeticas
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
