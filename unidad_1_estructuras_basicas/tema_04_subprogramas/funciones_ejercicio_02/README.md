# Funciones — Ejercicio 2: procedimiento alCuadrado() de un float

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (argumentos, parámetros, ámbito de variables) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Ejercicio2` |

## Objetivo académico

Procedimiento con parámetro por valor: alCuadrado(x) eleva al cuadrado el float recibido y muestra el resultado. Como modifica solo su copia local, la global queda intacta.

## Estrategia de resolución

1. pedirDatos() lee la variable global x
2. alCuadrado(float x) hace x \*= x sobre su copia local
3. Mostrar el resultado dentro del procedimiento

## Estructuras de datos utilizadas

- variable global float
- procedimientos void
- parámetro por valor
- prototipos

## Observaciones

El parámetro x oculta a la global x.

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_ejercicio_02
./funciones_ejercicio_02
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
