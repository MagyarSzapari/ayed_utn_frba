# Ciclo for (v2): cuenta regresiva del 10 al 1

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (iteraciones exactas: for) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Ciclo_for_v.2` |

## Objetivo académico

Variante del ejemplo de for con paso negativo: muestra los enteros del 10 al 1.

## Estrategia de resolución

1. Cabecera for(i=10; i>=1; i--) con decremento
2. En el cuerpo, mostrar i

## Estructuras de datos utilizadas

- variable simple int
- variable de control decreciente
- ciclo for
- salida estándar (cout)

## Compilar y ejecutar

```bash
g++ main.cpp -o ciclo_for_v2
./ciclo_for_v2
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
