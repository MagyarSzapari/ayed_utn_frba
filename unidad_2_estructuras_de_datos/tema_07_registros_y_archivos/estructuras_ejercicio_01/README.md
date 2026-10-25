# Estructuras — Ejercicio 1: corredor y categoría de competición

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (struct) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Estructuras_Ejercicio1` |

## Objetivo académico

Carga un struct Corredor (nombre, edad, sexo, club) y le asigna una categoría según la edad (Juvenil &lt;= 18, Senior &lt;= 40, Veterano > 40) con if encadenado y strcpy, para luego mostrar todos los datos.

## Estrategia de resolución

1. Leer nombre, sexo y club con cin.getline y la edad con cin >> seguido de cin.clear()/cin.ignore
2. Determinar la categoría con if / else if / else
3. Copiar el texto de la categoría con strcpy a un char[20]
4. Imprimir la ficha completa

## Estructuras de datos utilizadas

- struct con campos char[] e int
- variable struct global
- decisión encadenada
- strcpy

## Observaciones

El enunciado dice 'Señor' y el código 'Senior'. La categoría se guarda en una variable aparte y no como campo del struct. club[10] admite solo 9 caracteres. El manejo de buffer es correcto (ignore solo tras cin >> edad).

## Compilar y ejecutar

```bash
g++ main.cpp -o estructuras_ejercicio_01
./estructuras_ejercicio_01
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
