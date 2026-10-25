# Cadenas: conversión de cadena a número con atoi y atof

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres); conversión de tipos (U4) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Cad_a_Num` |

## Objetivo académico

Convierte cadenas leídas por teclado a valores numéricos: un entero con atoi y un real con atof (&lt;stdlib.h>), mostrando que un texto de dígitos debe convertirse para operar con él como número.

## Estrategia de resolución

1. Leer dos cadenas de hasta 20 caracteres con cin.getline en char[21]
2. Convertir la primera a int con atoi
3. Convertir la segunda a float con atof e imprimir ambos valores

## Estructuras de datos utilizadas

- arreglos char[21]
- variables int y float
- atoi/atof de &lt;stdlib.h>
- cin.getline

## Observaciones

atoi/atof no informan errores: una entrada no numérica devuelve 0 en silencio. El mismo esquema se reutiliza en Cadenas_Ejercicio8.

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_cad_a_num
./cadenas_cad_a_num
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_to_long() / utn_str_to_double() — `include/utn_str.h`.
