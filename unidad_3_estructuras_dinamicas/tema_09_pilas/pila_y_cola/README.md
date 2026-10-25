# Pilas y colas — Pila, cola con frente/fin, cola circular y cola sobre TAD Array

| | |
|---|---|
| **Programa 2008** | Unidad III · Tema 9: Pilas |
| **Equivalencia Plan 2023** | U11 — Punteros y estructuras enlazadas lineales (pila, cola, cola circular) |
| **Archivos** | [`pila_y_cola.cpp`](pila_y_cola.cpp) |
| **Origen en la cursada** | `Cursada/Pila_y_Cola` |

## Objetivo académico

Implementa con nodos enlazados las operaciones de pila (apilar/desapilar), de cola con punteros a frente y fin (encolar/desencolar), de cola circular con un único puntero al último, y una cola montada sobre el TAD Array (agregar al final, quitar la posición 0).

## Estrategia de resolución

1. Pila: apilar inserta el nuevo nodo adelante (nuevo->siguiente = p; p = nuevo); desapilar guarda el valor del primero, avanza p y libera el nodo.
2. Cola: encolar enlaza el nuevo detrás de q (o lo hace también frente p si estaba vacía) y mueve q; desencolar saca del frente y pone q = NULL si la cola queda vacía.
3. Cola circular: q apunta al último y q->siguiente es el frente; encolar inserta después de q (un nodo solo se apunta a sí mismo); desencolar quita q->siguiente y anula q si era el único.
4. Cola sobre TAD Array: encolarConArray = arrayAdd, desencolarConArray = arrayRemove(c, 0), vacía si arraySize == 0; main encola 1..5 y desencola todo.

## Estructuras de datos utilizadas

- struct Nodo
- punteros y new/delete
- pila enlazada
- cola enlazada (frente y fin)
- cola circular (puntero al último)
- TAD Array (biblioteca)
- punteros por referencia

## Observaciones

Combina pila y cola, por eso va a tema_09_pilas. NO compila tal cual: usa Array&lt;int>, array&lt;int>(), arrayAdd/arrayRemove/arraySize sin incluir la biblioteca (el propio comentario dice "FALTA AGREGARLE LA BIBLIOTECA DE TAD ARRAY"; haría falta `#include "biblioteca/tads/Array.hpp"`, no se agregó para conservar el código original). En main, `encolar(c, 5)` llama a la versión con punteros pasando un Array (error de tipos; debería ser encolarConArray). main solo ejercita la cola sobre Array: pila, cola enlazada y cola circular no se prueban. desapilar/desencolar/desencolarCircular no validan estructura vacía (desreferencian NULL). colaEstaVacia recibe q sin usarlo.

## Compilar y ejecutar

```bash
g++ pila_y_cola.cpp -o pila_y_cola
./pila_y_cola
```

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
pila_y_cola.cpp:110:6: error: variable or field 'encolarConArray' declared void
```

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_ll_push()/utn_ll_pop()/utn_ll_enqueue()/utn_ll_dequeue() y utn_stack_t / utn_queue_t — `include/utn_ll.h`, `include/utn_stack.h`, `include/utn_queue.h`.
