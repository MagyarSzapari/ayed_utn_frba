# El tipo char, su código ASCII y casting

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 3: Herramientas elementales |
| **Equivalencia Plan 2023** | U3 — Tipos de datos primitivos y operadores (char, código ASCII, conversión de tipos) |
| **Archivos** | [`caracter.cpp`](caracter.cpp) |
| **Origen en la cursada** | `Cursada/Caracter` |

## Objetivo académico

Muestra que un char es un entero pequeño con código ASCII: inicializa chars con letras y con números (65, 48), un int con 'A', y usa casts (int) y (char) para ver el código o el carácter.

## Estrategia de resolución

1. Inicializar c1 = 'A', c2 = 65, c3 = 48 e i = 'A'
2. Imprimir (int) c1 para ver el código 65
3. Imprimir c2 y c3 como caracteres ('A' y '0')
4. Imprimir (char) i para ver 'A'

## Estructuras de datos utilizadas

- variables simples char/int
- conversión explícita de tipos (cast estilo C)
- salida estándar (cout)

## Observaciones

Proyecto Eclipse CDT; la cabecera conserva la descripción del template de Eclipse (Hello World in C++, Ansi-style) sin editar. Mezcla tabs y espacios en la indentación.

## Compilar y ejecutar

```bash
g++ caracter.cpp -o caracter
./caracter
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_char_is_digit() / utn_char_is_letter() / utn_char_to_upper() — `include/utn_str.h`.
