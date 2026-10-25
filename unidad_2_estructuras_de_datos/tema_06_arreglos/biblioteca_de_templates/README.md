# Biblioteca de templates para arrays — esqueleto de add, insert, remove, find, orderedInsert y sort

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U9 — Patrones algorítmicos (inserción, eliminación, búsqueda, inserción ordenada, ordenamiento); también U6 generalidad de tipo/criterio y U8 tamaño lógico/físico |
| **Archivos** | [`biblioteca_de_templates.cpp`](biblioteca_de_templates.cpp) |
| **Origen en la cursada** | `Cursada/Biblioteca_de_Templates` |

## Objetivo académico

Esqueleto (enunciado) de la biblioteca genérica de operaciones sobre arrays con tamaño lógico pasado por referencia: agregar al final, insertar en una posición, eliminar, buscar con comparador, insertar en orden y ordenar. Las funciones están declaradas pero sin implementar; main documenta en comentarios el estado esperado del array tras cada llamada.

## Estrategia de resolución

1. Cada función recibe T a[] y int& length (tamaño lógico), que la propia función debe actualizar
2. find recibe un comparador comparaTK(T, K) (elemento vs. clave de otro tipo); orderedInsert y sort reciben comparaTT(T, T)
3. main arma un caso de prueba por función con el resultado esperado en comentarios (sirven como casos de test)
4. Cuerpos pendientes (solo '//Implementar.')

## Estructuras de datos utilizadas

- plantillas de función con 1 y 2 parámetros de tipo
- arrays unidimensionales con tamaño físico y lógico
- parámetro por referencia (int&)
- función como argumento (comparador)

## Observaciones

INCOMPLETO: ninguna función está implementada y las que retornan int o T no tienen return (comportamiento indefinido al usar el resultado, como hace find). `int array5[0]` es un array de tamaño cero (no estándar en C++): orderedInsert escribiría fuera de rango. Los nombres remove/find/sort pueden chocar con std:: por el using namespace std. find recibe length por referencia sin necesidad. Clasificado en tema_06 porque el contenido son las operaciones clásicas sobre arrays; alternativas: tema_04 (foco en templates) o tema_05 (biblioteca estilo TAD).

## Compilar y ejecutar

```bash
g++ biblioteca_de_templates.cpp -o biblioteca_de_templates
./biblioteca_de_templates
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_insert_at() / utn_algo_remove_at() / utn_algo_ordered_insert() — `include/utn_algo.h`.
