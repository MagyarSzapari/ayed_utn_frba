# Biblioteca de la cátedra

Funciones y TADs genéricos (templates de C++) del método de la cátedra de AyED, que se fueron
completando durante la cursada. Muchos parciales y TPs la usan con `#include "biblioteca/..."`.

## Cómo compilar un ejercicio que la usa

Hay que agregar la **raíz del repositorio** a la ruta de inclusión. Desde la carpeta de un ejercicio:

```bash
g++ -I ../../.. principal.cpp -o principal
```

## Contenido y estado

| Archivo | Tema (Plan 2008) | Estado |
|---|---|---|
| `funciones/strings.hpp` | 6 — Cadenas como arreglos de char | Implementado: length, charCount, substring, indexOf, trim, pad, conversiones, etc. Tiene bugs conocidos: `cmpString` compara longitudes, `toUpperCase(string)` y `toLowerCase(string)` no avanzan con caracteres que no cambian, y `stringToInt` depende de ajustes con `pow`. |
| `funciones/tokens.hpp` | 6 — Cadenas | Implementado: tokenCount, addToken, getTokenAt, removeTokenAt, setTokenAt, findToken. |
| `funciones/files.hpp` | 7 — Archivos | Implementado: write, read, seek, fileSize, filePos. `filePos` divide por `sizeof(f)` en lugar de `sizeof(T)`. |
| `funciones/arrays.hpp` | 6 — Arreglos | Parcial: solo `add`. El resto son esqueletos. |
| `funciones/lists.hpp` | 8, 9, 10 — Listas, pilas y colas | Esqueleto de la cátedra (cuerpos vacíos). |
| `tads/Coll.hpp` | 5 — TAD | Implementado sobre tokens. `collFind` compara el puntero a función contra 0. |
| `tads/Array.hpp` | 5 — TAD | Parcial: `array()` y `arrayAdd`. |
| `tads/Map.hpp`, `List.hpp`, `Queue.hpp`, `Stack.hpp` | 5, 8, 9, 10 | Esqueletos de la cátedra. |
| `tads/huffman/HuffmanSetup.hpp` | (Plan 2023 U12 — árboles) | Provisto por la cátedra: árbol de Huffman y recorrido con pilas. `huffmanTreeNext` reserva un nodo `aux` que nunca libera. |
| `tads/huffman/Progress.hpp` | — | Barra de progreso para consola (usa `windows.h`). |
| `tads/huffman/BitReader.hpp`, `BitWriter.hpp` | 1 — Bits | Esqueletos de la cátedra para leer y escribir archivos bit a bit. |
| `versiones_alternativas/*.hpp` | — | Otras versiones de `strings` (2.0), `files` (1.1) y `Coll` (1.3) que estaban sueltas como `.txt`. Se conservan como referencia y ningún ejercicio las incluye. |

## Continuidad en la versión 2.0

Todo este contenido se reescribió en C99, completo, corregido y optimizado, en la biblioteca
`2.0-Low-Level-Library`: `utn_str`, `utn_tok`, `utn_file`, `utn_arr`, `utn_coll`, `utn_map`, `utn_ll`,
`utn_stack`, `utn_queue`, `utn_bits` y `utn_huff`.
