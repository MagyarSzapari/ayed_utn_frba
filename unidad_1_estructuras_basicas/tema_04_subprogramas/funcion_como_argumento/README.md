# Función como argumento — tabular factorial y Fibonacci

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (generalidad de criterio: función como argumento); relacionado U11 punteros a código |
| **Archivos** | [`funcion_como_argumento.cpp`](funcion_como_argumento.cpp) |
| **Origen en la cursada** | `Cursada/Funcion_como_Argumento` |

## Objetivo académico

Muestra cómo pasar una función como parámetro (double f(int)) a otra función. invocar() recorre i = 1..4 y aplica la función recibida; se usa con factorial (iterativo) y con Fibonacci (recursivo).

## Estrategia de resolución

1. invocar(string mssg, double f(int)) itera i de 1 a 4, llama a f(i) e imprime 'mssg de i = resultado'
2. factorial(n) acumula el producto 2..n en un double con for
3. fibonacci(n) es recursiva: fib(n-1) + fib(n-2) si n >= 2, si no retorna 1
4. main llama dos veces a invocar pasando el nombre de la función sin paréntesis

## Estructuras de datos utilizadas

- función como parámetro (puntero a función)
- ciclo for
- acumulador producto
- recursividad (fibonacci)
- string

## Observaciones

El foco es la función como argumento, no la recursividad: por eso va a tema_04 aunque fibonacci sea recursiva. Fibonacci recursivo ingenuo (exponencial) con fib(0) = fib(1) = 1. Usa string sin #include &lt;string> (compila por inclusión transitiva de &lt;iostream>).

## Compilar y ejecutar

```bash
g++ funcion_como_argumento.cpp -o funcion_como_argumento
./funcion_como_argumento
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_cmp_fn / utn_algo_map_int() — `include/utn_common.h`, `include/utn_algo.h`.
