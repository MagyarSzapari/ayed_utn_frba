# Estructuras — Ejercicio 8: separar personas con y sin discapacidad

| | |
|---|---|
| **Programa 2008** | Unidad II · Tema 7: Registros y archivos |
| **Equivalencia Plan 2023** | U7 — Tipos de datos derivados y abstractos (struct); U8 arrays de structs (tamaño lógico/físico) |
| **Archivos** | [`main.cpp`](main.cpp) |
| **Origen en la cursada** | `Cursada/Estructuras_Ejercicio8` |

## Objetivo académico

Recorre un arreglo de struct Persona (nombre, bool discapacidad) y distribuye los nombres en dos arreglos nuevos según el campo lógico, con un índice independiente (j, k) para cada uno.

## Estrategia de resolución

1. Cargar cantidadPersonas registros (nombre con getline, discapacidad 0/1 con cin >>)
2. Si discapacidad, copiar el nombre con strcpy a discapacitados[j++]; si no, a noDiscapacitados[k++]
3. Mostrar ambos arreglos

## Estructuras de datos utilizadas

- struct con campo bool
- tres arreglos globales de structs [50]
- índices separados j y k (tamaño lógico de cada arreglo)
- strcpy
- ciclos for

## Observaciones

Bug: los for de salida recorren hasta cantidadPersonas en ambos arreglos en lugar de hasta j y k, así que imprimen líneas vacías (los arreglos globales están en cero). Usa strcpy sin incluir &lt;cstring>/&lt;string.h> (compila solo si &lt;iostream> lo incluye de forma transitiva). Copia solo el nombre y no el registro completo (alcanzaba con discapacitados[j] = personas[i]). No valida n &lt;= 50. cin.ignore sobrante tras getline y al inicio del for desde la segunda persona.

## Compilar y ejecutar

```bash
g++ main.cpp -o estructuras_ejercicio_08
./estructuras_ejercicio_08
```

**Estado:** ⚠️ no compila tal como está con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17):

```text
main.cpp:32:13: error: 'strcpy' was not declared in this scope
```

## Continuidad en la versión 2.0 (C99)

Reimplementado en `2.0-Low-Level-Library`: utn_algo_partition_copy() — `include/utn_algo.h`.
