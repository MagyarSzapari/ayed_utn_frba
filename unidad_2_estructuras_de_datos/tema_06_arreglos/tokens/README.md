# Tokens: cadenas tokenizadas con separador

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`tokens.cpp`](tokens.cpp) |
| **Origen en la cursada** | `Cursada/Tokens` |

## Objetivo académico

Introduce el concepto de cadena tokenizada: una cadena cuyos elementos (tokens) están separados por un carácter separador ('|'), incluso con tokens que a su vez están tokenizados con otro separador ('-' en las fechas).

## Estrategia de resolución

1. Declarar s1 = "Pablo|Pedro|Carlos|Juan" (separador '|')
2. Declarar s2 con fechas separadas por '|' cuyos tokens usan '-' (tokenización anidada)
3. Remite a la 'API de tratamiento de tokens' de la cátedra, sin implementarla

## Estructuras de datos utilizadas

- std::string
- cadena tokenizada (colección serializada como texto)

## Observaciones

Incompleto: solo declara dos cadenas, sin operaciones ni salida. Depende conceptualmente de la API de tokens de la cátedra (tokenCount, getTokenAt, addToken, etc.), que no está en el proyecto. Proyecto Eclipse CDT.

## Compilar y ejecutar

```bash
g++ tokens.cpp -o tokens
./tokens
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_tok_count() / utn_tok_get() / utn_tok_add() / utn_tok_view() — `include/utn_tok.h`.
