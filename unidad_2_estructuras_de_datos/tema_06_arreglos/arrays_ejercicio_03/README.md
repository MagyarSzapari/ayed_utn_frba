# Arrays — Ejercicio 3: carga por teclado y listado con índices

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (carga y recorrido; tamaño lógico y físico) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Arrays_Ejercicio3` |

## Objetivo académico

Carga un vector desde la entrada estándar con tamaño lógico n sobre un tamaño físico de 100 y lo muestra con el índice de cada elemento.

## Estrategia de resolución

1. Declarar int numeros[100] (tamaño físico) y leer n (tamaño lógico)
2. Cargar n valores con for
3. Recorrer y mostrar 'i -> valor'

## Estructuras de datos utilizadas

- array unidimensional con tamaño físico/lógico
- ciclo for
- entrada/salida estándar

## Observaciones

No valida n: si n > 100 se escribe fuera del array.

## Compilar y ejecutar

```bash
g++ main.cpp -o arrays_ejercicio_03
./arrays_ejercicio_03
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
