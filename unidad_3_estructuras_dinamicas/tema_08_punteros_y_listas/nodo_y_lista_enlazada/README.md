# Listas enlazadas — Nodo y lista simple: agregar al final, mostrar y liberar

| | |
|---|---|
| **Programa 2008** | Unidad III · Tema 8: Punteros y listas enlazadas |
| **Equivalencia Plan 2023** | U11 — Punteros y estructuras enlazadas lineales (lista simplemente enlazada) |
| **Archivos** | [`nodo_y_lista_enlazada.cpp`](nodo_y_lista_enlazada.cpp) |
| **Origen en la cursada** | `Cursada/Nodo_y_Lista_Enlazada` |

## Objetivo académico

Implementa una lista simplemente enlazada de enteros con nodos creados por new: inserción al final recorriendo hasta el último nodo, recorrido para mostrar y liberación de toda la memoria con delete.

## Estrategia de resolución

1. Definir struct Nodo {int informacion; Nodo\* siguiente;} y representar la lista vacía con un puntero a NULL.
2. agregar(Nodo\*& p, int v): crear el nodo con siguiente = NULL; si la lista está vacía p apunta al nuevo, si no recorrer con un auxiliar hasta el último y enlazarlo.
3. mostrar(Nodo\* p): recorrer con auxiliar hasta NULL imprimiendo cada información.
4. liberar(Nodo\*& p): guardar el siguiente, delete del actual y avanzar hasta dejar p en NULL.

## Estructuras de datos utilizadas

- struct autorreferenciado (nodo)
- punteros
- new/delete
- puntero pasado por referencia (Nodo\*&)
- ciclo while de recorrido

## Observaciones

Código correcto y completo. agregar es O(n) por recorrer hasta el final (no guarda puntero al último).

## Compilar y ejecutar

```bash
g++ nodo_y_lista_enlazada.cpp -o nodo_y_lista_enlazada
./nodo_y_lista_enlazada
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_ll_t / utn_ll_add() / utn_ll_destroy() — `include/utn_ll.h`.
