# Cadenas de caracteres: std::string, secuencias de escape, recorrido y longitud manual

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres); U6 función propia |
| **Archivos** | [`cadenas_de_caracteres.cpp`](cadenas_de_caracteres.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_de_Caracteres` |

## Objetivo académico

Trabaja con std::string: muestra el efecto de las secuencias de escape (\0, \n, \", \t, \r, \\), recorre una cadena carácter a carácter con while y con for hasta el terminador, calcula la longitud con una función propia y concatena con el operador +.

## Estrategia de resolución

1. Declarar s1..s7 con distintas secuencias de escape e imprimirlas
2. Recorrer s1 con while (i &lt; 4) y luego con for hasta encontrar '\0'
3. Función longitud(string s) que cuenta caracteres hasta '\0'
4. Concatenar s1 + s8 con el operador +

## Estructuras de datos utilizadas

- std::string
- secuencias de escape
- ciclo while
- ciclo for con condición de terminador
- contador
- función con parámetro por valor

## Observaciones

Proyecto Eclipse CDT (fuente en src/). s2 = "Ho\0la" queda como "Ho": std::string se construye desde un const char\* y corta en el '\0'. El comentario del for es incorrecto: dejar vacía la inicialización no impide ejecutar el ciclo. El cast (char) es innecesario (s1[i] ya es char). No incluye &lt;string> (compila por inclusión transitiva de &lt;iostream>). Encabezado de plantilla 'Hello World' de Eclipse.

## Compilar y ejecutar

```bash
g++ cadenas_de_caracteres.cpp -o cadenas_de_caracteres
./cadenas_de_caracteres
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_* — `include/utn_str.h`.
