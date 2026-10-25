# Cadenas — Ejercicio 4: saludo concatenando el nombre del usuario

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 6: Arreglos |
| **Equivalencia Plan 2023** | U8 — Estructuras indexadas (arrays de caracteres) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Cadenas_Ejercicio4` |

## Objetivo académico

Arma el mensaje "Hola que tal, &lt;nombre>" copiando el saludo fijo a un buffer con strcpy y concatenando el nombre leído por teclado con strcat.

## Estrategia de resolución

1. Saludo fijo en cadena1 y nombre leído con cin.getline en char[30]
2. strcpy(cadena2, cadena1) y luego strcat(cadena2, nombreUsuario)
3. Mostrar cadena2

## Estructuras de datos utilizadas

- arreglos de char
- buffer destino char[45]
- strcpy/strcat
- cin.getline

## Observaciones

Tamaños correctos: 14 caracteres del saludo + hasta 29 del nombre + '\0' = 44 &lt;= 45.

## Compilar y ejecutar

```bash
g++ main.cpp -o cadenas_ejercicio_04
./cadenas_ejercicio_04
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_str_copy() / utn_str_concat() — `include/utn_str.h`.
