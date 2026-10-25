# Array dinámico — redimensionar duplicando la capacidad

| | |
|---|---|
| **Programa 2008** | Unidad III · Tema 8: Punteros y listas enlazadas |
| **Equivalencia Plan 2023** | U11 — Punteros (asignación dinámica de memoria); relacionado U8 tamaño físico/lógico |
| **Archivos** | [`array_dinamico.cpp`](array_dinamico.cpp) |
| **Origen en la cursada** | `Cursada/Array_Dinamico` |

## Objetivo académico

Crea un array con new int[capacidad] según el valor ingresado, lo carga y lo redimensiona al doble: reserva un bloque nuevo, copia los elementos uno a uno, libera el viejo y reasigna el puntero.

## Estrategia de resolución

1. Leer capacidad y reservar int\* array = new int[capacidad]
2. Cargar 3 valores fijos (supone capacidad 3)
3. Reservar nuevo = new int[capacidad\*2] y copiar con for
4. Liberar el bloque viejo y hacer array = nuevo

## Estructuras de datos utilizadas

- puntero a int
- asignación dinámica (new[] / delete)
- ciclo for de copia
- array dinámico

## Observaciones

BUGS: `delete array;` debería ser `delete[] array;` (se reservó con new[]). Si capacidad &lt; 3 escribe fuera de rango. El bloque nuevo nunca se libera y no se imprime nada. No hay tamaño lógico separado de la capacidad.

## Compilar y ejecutar

```bash
g++ array_dinamico.cpp -o array_dinamico
./array_dinamico
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_coll_t (crecimiento geométrico x2) — `include/utn_coll.h`.
