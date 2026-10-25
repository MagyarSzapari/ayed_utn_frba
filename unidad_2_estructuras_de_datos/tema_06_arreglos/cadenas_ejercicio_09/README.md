# Cadenas — Ejercicio 9: contar ocurrencias de cada vocal

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres); U5 selección múltiple |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Ejercicio9` |

## Objetivo académico

Recorre la cadena carácter a carácter y con un switch incrementa un contador por vocal (a, e, i, o, u), mostrando cuántas veces aparece cada una.

## Estrategia de resolución

1. Leer la frase en char[50] con cin.getline
2. Recorrer con for y evaluar switch(cadena1[i])
3. Incrementar el contador de la vocal correspondiente y mostrar los cinco

## Estructuras de datos utilizadas

- arreglo char[50]
- 5 contadores int
- ciclo for
- selección múltiple (switch con case/break)

## Observaciones

Bug: el for recorre las 50 posiciones fijas en vez de cortar en el '\0', y lee bytes no inicializados después del terminador (comportamiento indefinido; puede contar vocales basura). Debería ser for (i = 0; cadena1[i] != '\0'; i++). Solo cuenta minúsculas sin tilde. El mensaje dice "maximo 50 caracteres" pero entran 49. &lt;string.h> incluido sin usar.

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_ejercicio_09
./cadenas_ejercicio_09
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_char_count() / utn_char_is_vowel() — `include/utn_str.h`.
