# Algoritmos y Estructuras de Datos — UTN FRBA

Práctica completa de la materia **Algoritmos y Estructuras de Datos** (Ingeniería en Sistemas de Información, UTN FRBA), escrita en C++. Está ordenada según las unidades y los temas del **programa analítico Plan 2008** y cada tema indica su equivalencia en el **Plan 2023**.

- **165 ejercicios**, cada uno en su carpeta y con un `README.md` que explica el objetivo académico, la estrategia de resolución y las estructuras de datos que usa.
- **151 de 165** compilan tal como están con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17). El código es el original de la cursada: en los que no compilan, el README de cada uno explica por qué.

## Estructura según el programa analítico (Plan 2008)

| Unidad | Tema | Ejercicios | Equivalencia Plan 2023 |
|---|---|:---:|---|
| [I](unidad_1_estructuras_basicas/) | [1. Introducción](unidad_1_estructuras_basicas/tema_01_introduccion/) | 0 | U1 — Definición de términos y frases · U2 — Conceptos fundamentales de algoritmia |
| [I](unidad_1_estructuras_basicas/) | [2. Metodología top-down](unidad_1_estructuras_basicas/tema_02_metodologia_top_down/) | 1 | U2 — Conceptos fundamentales de algoritmia (refinamientos sucesivos) |
| [I](unidad_1_estructuras_basicas/) | [3. Herramientas elementales](unidad_1_estructuras_basicas/tema_03_herramientas_elementales/) | 61 | U3 — Tipos de datos primitivos y operadores · U4 — Tipos, operadores y expresiones · U5 — El lenguaje C++ |
| [I](unidad_1_estructuras_basicas/) | [4. Subprogramas](unidad_1_estructuras_basicas/tema_04_subprogramas/) | 22 | U6 — Descomposiciones y funciones |
| [II](unidad_2_estructuras_de_datos/) | [5. Abstracción de datos](unidad_2_estructuras_de_datos/tema_05_abstraccion_de_datos/) | 9 | U7 — Tipos de datos derivados y abstractos |
| [II](unidad_2_estructuras_de_datos/) | [6. Arreglos](unidad_2_estructuras_de_datos/tema_06_arreglos/) | 46 | U8 — Estructuras indexadas · U9 — Patrones algorítmicos |
| [II](unidad_2_estructuras_de_datos/) | [7. Registros y archivos](unidad_2_estructuras_de_datos/tema_07_registros_y_archivos/) | 18 | U7 — Tipos derivados · U9 — Patrones algorítmicos · U10 — Almacenamiento físico |
| [III](unidad_3_estructuras_dinamicas/) | [8. Punteros y listas enlazadas](unidad_3_estructuras_dinamicas/tema_08_punteros_y_listas/) | 3 | U11 — Punteros y estructuras enlazadas lineales |
| [III](unidad_3_estructuras_dinamicas/) | [9. Pilas](unidad_3_estructuras_dinamicas/tema_09_pilas/) | 1 | U11 — Punteros y estructuras enlazadas lineales (pila) |
| [III](unidad_3_estructuras_dinamicas/) | [10. Colas](unidad_3_estructuras_dinamicas/tema_10_colas/) | 4 | U11 — Punteros y estructuras enlazadas lineales (cola) |
| [III](unidad_3_estructuras_dinamicas/) | [11. Recursividad](unidad_3_estructuras_dinamicas/tema_11_recursividad/) | 0 | U5 — El lenguaje C++ (iteración versus recursividad) |
| [III](unidad_3_estructuras_dinamicas/) | [12. Complejidad computacional](unidad_3_estructuras_dinamicas/tema_12_complejidad_computacional/) | 0 | U9 — Patrones algorítmicos (análisis de eficiencia) · U12 — Estructuras arbóreas (eficiencia) |

Los temas del Plan 2023 que no existen en el Plan 2008 (**U12 Estructuras arbóreas** y **U13 Combinaciones complejas de estructuras**) se ubicaron en el tema 2008 dominante y se señalan en el README de cada ejercicio: Huffman en la biblioteca, parciales y finales integradores en los Temas 5, 7, 8 y 10.

```text
ayed_utn_frba/
├── unidad_1_estructuras_basicas/
│   ├── tema_01_introduccion/  (sin ejercicios propios)
│   ├── tema_02_metodologia_top_down/  (1 ejercicio)
│   ├── tema_03_herramientas_elementales/  (61 ejercicios)
│   └── tema_04_subprogramas/  (22 ejercicios)
├── unidad_2_estructuras_de_datos/
│   ├── tema_05_abstraccion_de_datos/  (9 ejercicios)
│   ├── tema_06_arreglos/  (46 ejercicios)
│   └── tema_07_registros_y_archivos/  (18 ejercicios)
├── unidad_3_estructuras_dinamicas/
│   ├── tema_08_punteros_y_listas/  (3 ejercicios)
│   ├── tema_09_pilas/  (1 ejercicio)
│   ├── tema_10_colas/  (4 ejercicios)
│   ├── tema_11_recursividad/  (sin ejercicios propios)
│   └── tema_12_complejidad_computacional/  (sin ejercicios propios)
├── biblioteca/            (biblioteca de la cátedra: funciones y TADs)
└── README.md
```

## Compilar un ejercicio

Cada ejercicio es autocontenido:

```bash
cd unidad_1_estructuras_basicas/tema_03_herramientas_elementales/ciclos_ejercicio_01
g++ main.cpp -o ciclos_ejercicio_01
./ciclos_ejercicio_01
```

Los que usan la [biblioteca de la cátedra](biblioteca/) (`#include "biblioteca/..."`) se compilan agregando la raíz del repositorio a la ruta de inclusión: `g++ -I ../../.. principal.cpp`.

## Convenciones

- Nombres de carpetas y archivos en `snake_case`, sin espacios ni tildes, para que funcionen igual en Git, Linux y Windows.
- Todas las fuentes están en UTF-8. Los originales estaban en ISO-8859-1/Windows-1252.
- No se incluyen artefactos de compilación ni archivos de proyecto de Code::Blocks o Eclipse (ver `.gitignore`).
- El código se conserva tal como se escribió en la cursada. Lo único que se modificó son los `#include` de las cabeceras renombradas.
- Varios programas usan `conio.h` (`getch()`), que solo existe en compiladores de Windows.