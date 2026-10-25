# TAD Map — Interfaz del TAD Map&lt;K,T> genérico (esqueleto) con ejemplo de los Beatles

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 5: Abstracción de datos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (TAD Map genérico); relacionado con U6 (generalidad de tipo) |
| **Archivos** | [`tad_map.cpp`](tad_map.cpp) |
| **Origen en la cursada** | `Cursada/TAD_Map` |

## Objetivo académico

Presenta la interfaz del TAD Map (diccionario clave→valor) genérico del método Sznajdleder: alta/reemplazo, consulta por clave, pertenencia, baja e iteración con cursor interno (reset/hasNext/nextKey/nextValue). Incluye un struct Integrante con función constructora para mostrar un Map&lt;string, Integrante>.

## Estrategia de resolución

1. Declarar template&lt;typename K, typename T> struct Map con implementación oculta.
2. Definir la interfaz: mapCreate, mapPut, mapGet (devuelve T\* para modificar in situ), mapContains, mapRemove (devuelve el valor), mapHasNext, mapNextKey, mapNextValue, mapReset.
3. Definir struct Integrante {nombre, rol} y la función constructora integranteCreate que devuelve un literal compuesto.
4. En main: cargar los 4 Beatles indexados por nombre y consultar el rol de "Ringo" vía mapGet (salida esperada: Baterista).

## Estructuras de datos utilizadas

- struct template con dos parámetros (TAD genérico)
- struct Integrante
- función constructora
- string
- punteros a valor (T\*)
- iterador interno del TAD

## Observaciones

Esqueleto que NO compila: las funciones usan K y T sin template; ninguna no-void retorna valor; en main mapPut se invoca sin el map (falta `beatles` como primer argumento). `(Integrante){nombre, rol}` es un literal compuesto de C99 aceptado por g++ solo como extensión. Usa string sin #include &lt;string>. Hay comentarios `//*` sueltos sin efecto. La implementación real está en biblioteca/tads/Map.hpp (constructor map&lt;K,V>(), mapPut devuelve V\*).

## Compilar y ejecutar

```bash
g++ tad_map.cpp -o tad_map
./tad_map
```

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
tad_map.cpp:17:5: error: 'K' was not declared in this scope
```

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_map_t — `include/utn_map.h`.
