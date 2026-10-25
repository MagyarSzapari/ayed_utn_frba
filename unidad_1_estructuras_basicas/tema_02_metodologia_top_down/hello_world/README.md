# Hello World: primer programa en C++

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 2: Metodología top-down |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (estructura de un programa, bibliotecas) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Hello_World` |

## Objetivo académico

Primer programa de la cursada: muestra la estructura mínima de un programa C++ (inclusión de &lt;iostream>, using namespace std, función main y return 0) imprimiendo un mensaje fijo por salida estándar.

## Estrategia de resolución

1. Incluir &lt;iostream> y usar el espacio de nombres std
2. Imprimir 'Hello world!' con cout y endl
3. Terminar main devolviendo 0

## Estructuras de datos utilizadas

- función main
- salida estándar (cout)

## Compilar y ejecutar

```bash
g++ main.cpp -o hello_world
./hello_world
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
