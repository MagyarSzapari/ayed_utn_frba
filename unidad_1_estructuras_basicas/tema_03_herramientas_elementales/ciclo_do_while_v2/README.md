# Ciclo do-while (v2): cuenta regresiva del 10 al 1

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones no exactas: do-while) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclo_do_while_v.2` |

## Objetivo académico

Variante del ejemplo de do-while con variable de control decreciente: muestra los enteros del 10 al 1. Introduce system("pause") de stdlib.h para pausar la consola.

## Estrategia de resolución

1. Inicializar i en 10
2. Dentro del do: mostrar i y decrementarla
3. Repetir mientras i >= 1 y pausar al final con system("pause")

## Estructuras de datos utilizadas

- variable simple int
- variable de control decreciente
- ciclo do-while
- salida estándar (cout)

## Observaciones

system("pause") depende del intérprete de comandos de Windows; no es portable.

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclo_do_while_v2
./ciclo_do_while_v2
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
