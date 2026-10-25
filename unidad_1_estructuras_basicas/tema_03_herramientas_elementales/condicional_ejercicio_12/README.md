# Condicional — Ejercicio 12: menú (cubo de un número / par o impar / salir)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección múltiple) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_ejercicio_12` |

## Objetivo académico

Lee un entero y luego una opción de menú; con switch calcula el cubo del número (pow de &lt;math.h>) o informa si es par o impar con un if anidado, o sale.

## Estrategia de resolución

1. Leer el número y mostrar el menú de 3 opciones
2. case 1: resultado = pow(numero, 3) y mostrarlo
3. case 2: if numero % 2 == 0 par, else impar
4. case 3: salir

## Estructuras de datos utilizadas

- variables simples int
- selección múltiple switch-case
- decisión simple if-else anidada en un case
- función de biblioteca pow
- menú de opciones

## Observaciones

resultado = pow(numero, 3) asigna double a int: puede truncar (con algunos MinGW, pow devuelve 124.999… y da 124). En case 2 el break está dentro del else: si es par hay fall-through a case 3 (inocuo). Pide el número aunque se elija Salir; sin default.

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_ejercicio_12
./condicional_ejercicio_12
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
