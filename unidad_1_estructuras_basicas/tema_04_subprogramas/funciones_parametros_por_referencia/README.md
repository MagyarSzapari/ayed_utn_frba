# Funciones: parámetros por referencia (ejemplo teórico)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (parámetros por referencia) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Parametros_por_Referencia` |

## Objetivo académico

Muestra que una función con parámetros int& modifica las variables originales del llamador: valorNuevo() imprime los valores recibidos y les asigna 17 y 35.

## Estrategia de resolución

1. Leer dos enteros en main
2. valorNuevo(int&, int&) los muestra y les asigna valores nuevos
3. main vuelve a mostrarlos para hacer visible el cambio

## Estructuras de datos utilizadas

- procedimiento void
- parámetros por referencia (int&)
- variables locales de main

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_parametros_por_referencia
./funciones_parametros_por_referencia
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
