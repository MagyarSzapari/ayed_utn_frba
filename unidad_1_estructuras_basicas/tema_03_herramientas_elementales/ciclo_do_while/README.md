# Ciclo do-while: números del 1 al 10

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones no exactas: do-while) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclo_do_while` |

## Objetivo académico

Ejemplo introductorio de la sentencia do-while (ciclo de 1 a n iteraciones con condición evaluada al final). Muestra los enteros del 1 al 10.

## Estrategia de resolución

1. Inicializar i en 1
2. Dentro del do: mostrar i e incrementarla
3. Repetir mientras i &lt;= 10 (la condición se evalúa después del cuerpo)

## Estructuras de datos utilizadas

- variable simple int
- variable de control
- ciclo do-while
- salida estándar (cout)

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclo_do_while
./ciclo_do_while
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
