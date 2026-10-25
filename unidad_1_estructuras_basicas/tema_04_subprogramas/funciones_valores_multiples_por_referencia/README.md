# Funciones: devolver múltiples valores por referencia (suma y producto)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (parámetros por referencia) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Valores_Multiples_por_Referencia` |

## Objetivo académico

Técnica para devolver más de un resultado: calcular(a, b, suma, producto) recibe los operandos por valor y deja suma y producto en parámetros por referencia.

## Estrategia de resolución

1. Leer dos enteros en main
2. calcular() escribe suma y producto a través de referencias
3. El comentario aclara que no es un retorno múltiple real; para eso harían falta struct o arrays

## Estructuras de datos utilizadas

- procedimiento void
- parámetros por valor
- parámetros por referencia (int&)

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_valores_multiples_por_referencia
./funciones_valores_multiples_por_referencia
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
