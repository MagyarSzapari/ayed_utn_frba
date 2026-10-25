# Funciones — Ejercicio 4: parte fraccionaria de un número real

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (argumentos, parámetros y valor de retorno) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Ejercicio4` |

## Objetivo académico

Función con valor de retorno float: mantisa(x) obtiene la parte fraccionaria restándole a x su parte entera, que se calcula por conversión implícita float→int.

## Estrategia de resolución

1. pedirDatos() lee un float global
2. Dentro de mantisa(): int y = x trunca la parte entera
3. Devolver x - y e imprimirlo desde main

## Estructuras de datos utilizadas

- variable global float
- función con retorno float
- parámetro por valor
- conversión implícita de tipos (float→int)

## Observaciones

El nombre 'mantisa' no es preciso: calcula la parte fraccionaria, no la mantisa en el sentido de punto flotante. Por la precisión de float, 256.879 se muestra como algo parecido a 0.878998. Con negativos devuelve una fracción negativa, y desborda si |x| > INT_MAX.

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_ejercicio_04
./funciones_ejercicio_04
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
