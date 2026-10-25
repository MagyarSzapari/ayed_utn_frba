# Funciones: pasaje de arreglos como parámetro

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U6 — Descomposiciones y funciones (argumentos y parámetros); relacionado con U8 — Estructuras indexadas |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Funciones_Pasaje_de_Arreglos` |

## Objetivo académico

Muestra que un arreglo se pasa a una función junto con su tamaño y que se comparte con el llamador (no se copia): cuadrado() eleva al cuadrado cada elemento en el lugar e imprime() lo recorre y lo muestra.

## Estrategia de resolución

1. Declarar en main un arreglo int de TAMANIO = 5 inicializado con {1,2,3,4,5}
2. cuadrado(int arreglo[], int n) modifica cada elemento con arreglo[i] \*= arreglo[i]
3. imprime(int arreglo[], int n) recorre y muestra el arreglo ya modificado

## Estructuras de datos utilizadas

- arreglo unidimensional int
- constante de tamaño (const int)
- procedimientos void
- parámetro arreglo (int arreglo[]) + tamaño
- ciclo for de recorrido

## Observaciones

Va en tema_04 porque el foco es el pasaje del arreglo como parámetro; la algoritmia de arreglos es mínima. La carpeta trae artefactos de Borland/C++Builder (.ilc, .ild, .ilf, .ils, .map, .obj, .tds, .exe) que hay que ignorar. Errata en el comentario: 'Pasaja'. imprime() no agrega salto de línea final.

## Compilar y ejecutar

```bash
g++ main.cpp -o funciones_pasaje_de_arreglos
./funciones_pasaje_de_arreglos
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
