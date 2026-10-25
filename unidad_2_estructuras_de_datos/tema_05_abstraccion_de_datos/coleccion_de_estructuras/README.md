# Colección de estructuras: TAD Coll&lt;Persona> con serialización y comparadores

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 5: Abstracción de datos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (TAD Coll); U6 generalidad de tipo y de criterio |
| **Archivos** | [`coleccion_de_estructuras.cpp`](coleccion_de_estructuras.cpp) |
| **Origen en la cursada** | `Cursada/Coleccion_de_Estructuras` |

## Objetivo académico

Usa el TAD genérico Coll&lt;T> de la cátedra para guardar structs Persona serializados como cadenas tokenizadas ("dni,nombre"): recorre la colección, busca por DNI con un comparador y la ordena por nombre y por DNI pasando funciones de comparación como criterio.

## Estrategia de resolución

1. struct Persona {dni, nombre} con personaToString / personaFromString (tokens separados por ',')
2. Agregar 3 personas con collAdd y recorrerlas con collReset / collHasNext / collNext
3. Buscar con collFind y comparaPersonaDNI, y obtener con collGetAt
4. Ordenar con collSort usando comparaPersonasNombreAscendente y luego comparaPersonasDNI

## Estructuras de datos utilizadas

- struct
- TAD Coll&lt;T> (plantilla) de la cátedra
- serialización a string tokenizado
- funciones comparadoras pasadas como parámetro
- ciclos while con iterador
- búsqueda y ordenamiento por criterio

## Observaciones

No compila: no incluye la biblioteca de la cátedra que define Coll/coll/collAdd/collReset/collHasNext/collNext/collFind/collGetAt/collSort ni intToString/stringToInt/getTokenAt (no está en el proyecto, que además no tiene carpeta Debug). Además, en los tres while se imprime v.dni / v.nombre pero la variable es p (error de compilación). El comentario dice 'ordenada por nombre descendente' pero se ordenó ascendente; comparaPersonasNombreDescendente y comparaPersonaNombre quedan sin usar. getTokenAt(s, 0, ',') pasa (cadena, índice, separador): verificar contra la firma de la API de la cátedra, que suele ser getTokenAt(s, sep, i). comparaPersonaDNI y comparaPersonasDNI devuelven la resta (puede desbordar con valores extremos). Depende de la API de tokens (ver Tokens). Proyecto Eclipse CDT.

## Compilar y ejecutar

```bash
g++ coleccion_de_estructuras.cpp -o coleccion_de_estructuras
./coleccion_de_estructuras
```

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
coleccion_de_estructuras.cpp:18:11: error: 'intToString' was not declared in this scope
```

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_coll_t — `include/utn_coll.h`.
