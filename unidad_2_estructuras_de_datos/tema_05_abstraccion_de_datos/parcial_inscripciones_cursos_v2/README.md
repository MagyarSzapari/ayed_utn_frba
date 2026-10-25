# Parcial — Inscripciones a cursos con cupo y reasignación (v2, con archivo de revisión)

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 5: Abstracción de datos |
| **Equivalencia Plan 2023** | U13 — Combinaciones complejas de estructuras (Map de List + archivos binarios); también U7 y U10 |
| **Archivos** | [`principal.cpp`](principal.cpp), [`inscripciones_cursos.hpp`](inscripciones_cursos.hpp) |
| **Origen en la cursada** | `Cursada/Sznajdleder Suelto` |

## Objetivo académico

Segunda versión del parcial de inscripciones: mismo procesamiento de INSCRIPCIONES.dat con Map de cursos y Map de alumnos con materias rechazadas, reasignación modularizada en reasignar(...) grabando REASIGNACION.dat, y punto 4 que vuelca a REVISION.dat las materias que quedaron sin reasignar por alumno.

## Estrategia de resolución

1. procesarPunto1: si quedanCuposDisponibles(rc) se incrementa contIA; si no, se agrega la materia a la lista del alumno (creándola sólo en el caso de rechazo).
2. procesarPunto2: 'recorro y descubro' el Map de cursos para armar Map&lt;string,List&lt;int>> materia -> cursos con cupo.
3. punto3/reasignar: alumnos ordenados por id; para cada materia se toma el primer curso disponible (si existe), se graba Reasignacion, se actualiza contIA y se quita el curso si se llenó.
4. punto4: para cada alumno se vacía su lista con listRemoveFirst grabando un registro Revision por materia pendiente.

## Estructuras de datos utilizadas

- structs Revision, Reasignacion, Inscripcion, Curso, RCurso (Curso anidado como 'cur')
- TAD Map&lt;int,RCurso>, Map&lt;int,List&lt;string>>, Map&lt;string,List&lt;int>>
- TAD List (listAdd, listNext, listRemove, listRemoveFirst, listIsEmpty)
- archivos binarios INSCRIPCIONES.dat, REASIGNACION.dat, REVISION.dat (read&lt;T>/write&lt;T>)
- ordenamiento de mapa por clave
- while anidados, if/else

## Observaciones

Versión 2 de parcial_inscripciones_cursos (mismo enunciado). Cabecera identificada por contenido: usa rc->cur => 'principal (2).hpp' (en principal.hpp el campo se llama 'c'). El .cpp incluye "principal.hpp" (nombre que no coincide con el archivo en disco); el script corrige el #include al copiar. BUGS: 'string mat = listNext&lt;string>(lstMAT);' no compila porque listNext devuelve T\* (string\*); reasignar quita elementos de lstMAT mientras la recorre; punto4 recibe el Map por valor pero reordena y vacía listas compartidas; subirCursos y mostrarPunto1/2 son stubs; no verifica fopen.

## Compilar y ejecutar

```bash
g++ -I ../../.. principal.cpp -o parcial_inscripciones_cursos_v2
./parcial_inscripciones_cursos_v2
```

> Usa la [biblioteca de la cátedra](../../../biblioteca/): `-I ../../..` apunta a la raíz del repositorio.

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
principal.cpp:90:36: error: conversion from 'std::__cxx11::basic_string<char>*' to non-scalar type 'std::string' {aka 'std::__cxx11::basic_string<char>'} requested
```

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_map_get_or_put() / utn_ll_t — `include/utn_map.h`, `include/utn_ll.h`.
