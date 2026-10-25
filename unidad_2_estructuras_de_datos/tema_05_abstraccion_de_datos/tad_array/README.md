# TAD Array — Interfaz del TAD Array genérico (esqueleto)

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 5: Abstracción de datos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (TAD Array genérico); relacionado con U6 (generalidad de tipo y de criterio) |
| **Archivos** | [`tad_array.cpp`](tad_array.cpp) |
| **Origen en la cursada** | `Cursada/TAD_Array` |

## Objetivo académico

Presenta la interfaz (firmas) del TAD Array genérico del método Sznajdleder: un arreglo dinámico parametrizado por T con operaciones de alta, acceso, inserción, borrado, búsqueda con criterio, inserción ordenada y ordenamiento. Las funciones están vacías: el foco es la abstracción/ocultamiento (qué ofrece el TAD, no cómo).

## Estrategia de resolución

1. Declarar el tipo genérico template&lt;typename T> struct Array con implementación oculta (cuerpo vacío).
2. Definir la interfaz: arrayCreate, arrayAdd (devuelve posición), arrayGet (devuelve T\*), arrayInsert, arrayRemove (devuelve el elemento), arrayFind, arrayOrderedInsert, arraySort.
3. Parametrizar el criterio de búsqueda/orden con punteros a función comparadores: comparaTK(T,K) y comparaTT(T,T).
4. En main, ejemplo de uso con Array&lt;int>: agregar 1, 2, 3 y recorrer con for hasta arraySize mostrando \*arrayGet.

## Estructuras de datos utilizadas

- struct template (TAD genérico)
- funciones template
- punteros a función (comparadores)
- parámetros por referencia
- ciclo for

## Observaciones

Esqueleto que NO compila: solo el struct lleva template&lt;typename T>; las funciones usan T y K sin declararlos como parámetros template; ninguna función no-void retorna valor. arrayFind está declarada void (debería devolver int, la posición o -1). En main: `arrayCreate<int>` sin paréntesis, arraySize no está declarada, `int* i` redeclara la variable de control del for y arrayGet se llama sin la posición p. La implementación real equivalente está en biblioteca/tads/Array.hpp (allí el constructor se llama array&lt;T>()).

## Compilar y ejecutar

```bash
g++ tad_array.cpp -o tad_array
./tad_array
```

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
tad_array.cpp:17:7: error: 'T' was not declared in this scope
```

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_arr_t — `include/utn_arr.h`.
