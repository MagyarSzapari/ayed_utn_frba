# Condicional — Ejercicio 11: cajero automático con menú

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección múltiple) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_ejercicio_11` |

## Objetivo académico

Simula un cajero automático con saldo inicial de 1000 dólares: un menú con switch permite depositar, retirar (con un if que verifica que haya saldo suficiente) o salir.

## Estrategia de resolución

1. Mostrar el menú (1 ingresar, 2 retirar, 3 salir) y leer la opción
2. case 1: leer el depósito y mostrar saldo_inicial + extra
3. case 2: leer el retiro; if supera el saldo, rechazar; else mostrar saldo_inicial - retiro
4. case 3: salir

## Estructuras de datos utilizadas

- variables simples int/float
- selección múltiple switch-case
- decisión simple if-else anidada en un case
- menú de opciones

## Observaciones

En case 2 el break está dentro del else: si el retiro excede el saldo hay fall-through a case 3 (inocuo porque case 3 solo hace break). Sin default para opciones inválidas, no valida montos negativos y el menú se ejecuta una sola vez (sin ciclo). Mezcla int (saldo_inicial) con float.

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_ejercicio_11
./condicional_ejercicio_11
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
