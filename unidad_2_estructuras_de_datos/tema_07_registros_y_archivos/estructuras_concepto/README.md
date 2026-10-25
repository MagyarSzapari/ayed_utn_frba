# Estructuras: concepto, declaración e inicialización de struct

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (struct) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Estructuras_Concepto` |

## Objetivo académico

Explica en el comentario qué es un struct (colección de campos de distinto tipo) y las dos formas de declarar variables. En el código declara struct Persona con variables globales: una inicializada por lista ({"Marco", 18}) y otra cargada por teclado.

## Estrategia de resolución

1. Comentario teórico con el ejemplo Coleccion_CD
2. struct Persona {nombre[20], edad} con persona1 inicializada y persona2 sin inicializar
3. Cargar persona2 con cin.getline y cin >>
4. Mostrar ambas accediendo a los campos con el operador '.'

## Estructuras de datos utilizadas

- struct
- variables struct globales declaradas junto a la definición
- inicialización por lista
- campo char[20]
- campo int

## Observaciones

Material mayormente teórico (comentario de cabecera largo).

## Compilar y ejecutar

```bash
g++ main.cpp -o estructuras_concepto
./estructuras_concepto
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
