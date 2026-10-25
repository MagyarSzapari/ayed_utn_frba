# Condicional — Ejercicio 8: ¿el cuarto número coincide con alguno de los tres?

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (selección simple encadenada, operadores lógicos) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Condicional_ejercicio_8` |

## Objetivo académico

Lee tres números y luego un cuarto, e indica si este es distinto de todos o con cuál coincide, usando una decisión encadenada con condiciones unidas por &&.

## Estrategia de resolución

1. Leer numero1, numero2 y numero3, luego numero4 (float)
2. if numero4 distinto de los tres (&&) informar que no coincide
3. else if sucesivos para identificar con cuál coincide

## Estructuras de datos utilizadas

- variables simples float
- operadores relacionales == y !=
- operador lógico &&
- decisión encadenada if-else if-else

## Observaciones

Compara float con == / != (exactitud de punto flotante). Si coincide con varios, informa solo el primero.

## Compilar y ejecutar

```bash
g++ main.cpp -o condicional_ejercicio_08
./condicional_ejercicio_08
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
