# Tema 11: Recursividad

**Unidad III: Estructuras dinámicas: punteros, listas, pilas, colas y recursividad** · Programa analítico Plan 2008

**Contenidos del programa:** Programación recursiva y verificación de funciones recursivas. Asignación estática y dinámica de memoria.

**Equivalencia Plan 2023:** U5 — El lenguaje C++ (iteración versus recursividad)

## Ejercicios

En la práctica no hay ejercicios cuyo foco sea la recursividad. La única función recursiva activa es el Fibonacci de [`funcion_como_argumento`](../../unidad_1_estructuras_basicas/tema_04_subprogramas/funcion_como_argumento/), que se clasificó en el Tema 4 porque su objetivo es pasar una función como argumento.

En la versión 2.0 en C99 la recursión se reemplazó a propósito por iteración, siguiendo la regla MISRA C 17.2 (stack acotado). Por ejemplo: Fibonacci por *fast doubling* en O(log n), merge sort bottom-up y códigos Huffman calculados subiendo por el enlace al padre.
