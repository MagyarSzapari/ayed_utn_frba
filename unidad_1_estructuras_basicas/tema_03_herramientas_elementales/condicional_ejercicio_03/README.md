# Condicional — Ejercicio 3: par o impar (con caso cero)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección simple encadenada) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_ejercicio_3` |

## Objetivo académico

Lee un entero y con una decisión encadenada informa si es cero, par (numero % 2 == 0) o impar.

## Estrategia de resolución

1. Leer numero
2. if numero == 0 informar cero
3. else if numero % 2 == 0 informar par
4. else informar impar

## Estructuras de datos utilizadas

- variables simples int
- operador módulo %
- decisión encadenada if-else if-else

## Observaciones

Trata el 0 como caso aparte ('igual a cero') aunque el 0 es par. Mismo problema que Valor_Par_o_Impar.

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_ejercicio_03
./condicional_ejercicio_03
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
