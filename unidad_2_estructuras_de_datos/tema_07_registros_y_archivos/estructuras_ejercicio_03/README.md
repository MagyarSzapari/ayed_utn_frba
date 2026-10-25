# Estructuras — Ejercicio 3: empleados con mayor y menor sueldo

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (struct); U9 búsqueda de máximo/mínimo |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Estructuras_Ejercicio3` |

## Objetivo académico

Carga N empleados (nombre, sueldo) en un arreglo global de structs de tamaño físico 100 y en la misma pasada determina las posiciones del sueldo máximo y del mínimo.

## Estrategia de resolución

1. Leer N (tamaño lógico) y cargar cada empleado en un for
2. Comparar cada sueldo con mayorSueldo (inicia en 0) y menorSueldo (inicia en 999999.99) guardando posiciones
3. Mostrar los datos de ambos empleados

## Estructuras de datos utilizadas

- struct
- arreglo de structs [100] (global)
- tamaño lógico vs físico
- ciclo for
- búsqueda de máximo y mínimo con posición

## Observaciones

No valida N &lt;= 100 (desborde del arreglo). menorSueldo arranca con el centinela 999999.99 en vez del primer elemento. El cin.ignore posterior al getline del nombre sobra: obliga a ingresar una línea extra (que se descarta) antes de que aparezca el prompt del salario. Base de Estructuras_Ejercicio3_v.2.

## Compilar y ejecutar

```bash
g++ main.cpp -o estructuras_ejercicio_03
./estructuras_ejercicio_03
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_max_index() / utn_algo_min_index() con comparador de struct — `include/utn_algo.h`.
