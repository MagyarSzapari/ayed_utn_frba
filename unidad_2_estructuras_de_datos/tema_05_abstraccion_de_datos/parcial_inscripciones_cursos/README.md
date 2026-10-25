# Parcial — Inscripciones a cursos con cupo y reasignación de rechazados (Map + List)

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 5: Abstracción de datos |
| **Equivalencia Plan 2023** | U13 — Combinaciones complejas de estructuras (Map de List + archivos binarios); también U7 (TADs) y U10 |
| **Archivos** | [`principal.cpp`](principal.cpp), [`inscripciones_cursos.hpp`](inscripciones_cursos.hpp) |
| **Origen en la cursada** | `Cursada/Sznajdleder Suelto` |

## Objetivo académico

Resolución (probablemente docente, estilo Sznajdleder) de un parcial que procesa INSCRIPCIONES.dat contra un Map&lt;int,RCurso> de cursos con capacidad: aprueba inscripciones mientras haya cupo, registra por alumno las materias rechazadas, arma por materia la lista de cursos con cupo disponible y reasigna a los alumnos grabando REASIGNACION.dat.

## Estrategia de resolución

1. Punto 1: por cada Inscripcion se obtiene el RCurso; si cap - contIA > 0 se incrementa contIA, si no se agrega la materia a la List&lt;string> del alumno en Map&lt;int,List&lt;string>> (creada con mapPut si no existía).
2. Punto 2: se recorre el Map de cursos con mapReset/mapHasNext/mapNextValue y, para cada curso con cupo, se agrega su idCur a la List&lt;int> de su materia en Map&lt;string,List&lt;int>>.
3. Punto 3: se ordena el Map de alumnos por clave (mapSortByKeys con cmpIdAlu) y para cada materia rechazada se toma el primer curso disponible, se graba Reasignacion con write&lt;T>, se quita la materia y, si el curso se llenó, se lo saca de la lista.
4. La cabecera trae structs y funciones generadas (constructores, toDebug, equals) por la herramienta ayedtools.

## Estructuras de datos utilizadas

- structs Inscripcion, Curso, RCurso (Curso anidado + contador), Reasignacion, Revision
- TAD Map&lt;int,RCurso>, Map&lt;int,List&lt;string>>, Map&lt;string,List&lt;int>> de la cátedra
- TAD List&lt;string> / List&lt;int> (listAdd, listNext, listRemove, listRemoveFirst)
- archivos binarios de registros (read&lt;T>/write&lt;T>, lectura anticipada con feof)
- ordenamiento de mapa por clave con función de comparación
- while anidados, decisión if/else

## Observaciones

Integrador que excede el plan 2008 (TADs genéricos Map/List + archivos); se ubica en tema_05 por el foco en el uso de TADs. Cabecera identificada por contenido: usa rc->c (campo 'c' de RCurso) => principal.hpp. Hay una segunda versión del mismo problema en 'principal (2).cpp' + 'principal (2).hpp' (destino parcial_inscripciones_cursos_v2), que además implementa el punto 4. subirCursos, mostrarPunto1/2 y punto4 son stubs vacíos; depende de biblioteca/ (TADs stub). BUGS: punto1 crea la lista del alumno aun cuando la inscripción se aprueba; punto3 no controla lstCursosDisp == NULL (materia sin cursos con cupo) ni listNext == NULL (lista vacía), y modifica la lista y el mapa (listRemove/mapRemove) mientras los está iterando; no verifica fopen.

## Compilar y ejecutar

```bash
g++ -I ../../.. principal.cpp -o parcial_inscripciones_cursos
./parcial_inscripciones_cursos
```

> Usa la [biblioteca de la cátedra](../../../biblioteca/): `-I ../../..` apunta a la raíz del repositorio.

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_map_get_or_put() / utn_ll_t — `include/utn_map.h`, `include/utn_ll.h`.
