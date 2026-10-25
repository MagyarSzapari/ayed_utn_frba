# Argumentos en línea de comandos (argc / argv)

| | |
|---|---|
| **Programa 2008** | Unidad I · Tema 4: Subprogramas |
| **Equivalencia Plan 2023** | U5 — El lenguaje de programación C++ (estructura de programa: parámetros de main); relacionado U8 arrays de caracteres |
| **Archivos** | [`argumentos_en_linea_de_comandos.cpp`](argumentos_en_linea_de_comandos.cpp) |
| **Origen en la cursada** | `Cursada/Argumentos_en_Linea_de_Comandos` |

## Objetivo académico

Presenta la firma main(int argc, char\*\* argv) y recorre el vector de argumentos imprimiendo cada uno; argv[0] es el nombre del programa.

## Estrategia de resolución

1. Declarar main con argc (cantidad) y argv (array de cadenas C)
2. Recorrer i de 0 a argc-1 con for
3. Convertir cada argv[i] a string e imprimirlo en una línea

## Estructuras de datos utilizadas

- parámetros de main (int argc, char\*\* argv)
- array de cadenas C (char\*)
- ciclo for
- string

## Observaciones

Sin bugs. Usa string sin #include &lt;string>.

## Compilar y ejecutar

```bash
g++ argumentos_en_linea_de_comandos.cpp -o argumentos_en_linea_de_comandos
./argumentos_en_linea_de_comandos
```

**Estado:** ✅ compila con g++ 15.1 (MSYS2 UCRT64, dialecto por defecto gnu++17).
